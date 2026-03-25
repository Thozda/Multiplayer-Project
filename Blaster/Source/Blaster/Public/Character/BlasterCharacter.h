// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blaster/BlasterTypes/TurningInPlace.h"
#include "GameFramework/Character.h"
#include "Interfaces/InteractWithCrosshairsInterface.h"
#include "Components/TimelineComponent.h"
#include "Blaster/BlasterTypes/CombatState.h"
#include "Blaster/BlasterTypes/Team.h"
#include "BlasterCharacter.generated.h"

class UNiagaraSystem;
class ULagCompensationComponent;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UWidgetComponent;
class AWeapon;
class UCombatComponent;
class UAnimMontage;
class ABlasterPlayerController;
class USoundCue;
class ABlasterPlayerState;
class UBuffComponent;
class UBoxComponent;
class UNiagaraComponent;
class ABlasterGameMode;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftGame);

UCLASS()
class BLASTER_API ABlasterCharacter : public ACharacter, public IInteractWithCrosshairsInterface
{
	GENERATED_BODY()

public:
	ABlasterCharacter();
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitializeComponents() override;
	virtual void OnRep_ReplicatedMovement() override;
	virtual void Destroyed() override;

	void UpdateHUDHealth();
	void UpdateHUDShield();
	void UpdateHUDAmmo();
	
	void PlayFireMontage(bool bAiming);
	void PlayElimMontage();
	void PlayReloadMontage();
	void PlayThrowGrenadeMontage();
	void PlaySwapMontage();

	void SetTeamColour(ETeam Team);
	void SpawnDefaultWeapon();
	void Elim(bool bPlayerLeftGame);

	bool bFinishedSwapping;
	
	UFUNCTION(NetMulticast, Reliable)
	void MulticastElim(bool bPlayerLeftGame);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastGainedTheLead();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastLostTheLead();

	UFUNCTION(BlueprintImplementableEvent)
	void ShowSniperScopeWidget(bool bShowScope);

	UPROPERTY(Replicated)
	bool bDisableGameplay = false;

	UPROPERTY()
	TMap<FName, UBoxComponent*> HitCollisionBoxes;
	
	//
	//Leave Game
	//
	UFUNCTION(Server, Reliable)
	void ServerLeaveGame();
	
	FOnLeftGame OnLeftGame;
	
protected:
	virtual void BeginPlay() override;
	void RotateInPlace(float DeltaTime);
	//poll for any relevant classes and init HUD
	void PollInit();

	//
	//Team Spawn
	//
	void SetSpawnPoint();

	//
	//Animation
	//
	void AimOffset(float DeltaTime);
	void SimProxiesTurn();
	void PlayHitReactMontage();

	//
	//Input
	//
	UFUNCTION()
	void Move(const FInputActionValue& Value);
	
	UFUNCTION()
	void Look(const FInputActionValue& Value);

	virtual void Jump() override;
	
	UFUNCTION()
	void EquipButtonPressed(const FInputActionValue& Value);
	
	UFUNCTION()
	void CrouchButtonPressed(const FInputActionValue& Value);
	
	UFUNCTION()
	void AimButtonPressed(const FInputActionValue& Value);
	
	UFUNCTION()
	void AimButtonReleased(const FInputActionValue& Value);
	
	UFUNCTION()
	void FireButtonPressed(const FInputActionValue& Value);
	
	UFUNCTION()
	void FireButtonReleased(const FInputActionValue& Value);

	UFUNCTION()
	void ReloadButtonPressed(const FInputActionValue& Value);

	UFUNCTION()
	void GrenadeButtonPressed(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, Category="Input")
	UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* EquipAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* CrouchAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* AimAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* FireAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* ReloadAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* GrenadeAction;

	//
	//Damage
	//
	UFUNCTION()
	void RecieveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatorController,
		AActor* DamageCauser);

	//
	//Hitboxes for Server-Side Rewind
	//
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* HeadBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* PelvisBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Spine02Box;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Spine03Box;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* UpperArmLBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* UpperArmRBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* LowerArmLBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* LowerArmRBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BackpackBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BlanketBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* ThighLBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* ThighRBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CalfLBox;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CalfRBox;

private:
	void OnPlayerStateInitialized();
	
	//
	//Components
	//
	void HideCharacterIfCameraClose();

	UPROPERTY(EditAnywhere, Category = Camera)
	float CameraThreshhold = 200.f;
	
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* OverheadWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCombatComponent* Combat;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UBuffComponent* Buff;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	ULagCompensationComponent* LagCompensation;

	//
	//Weapon
	//
	void DropOrDestroyWeapons();
	
	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	AWeapon* OverlappingWeapon;

	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeapon* LastWeapon);

	UFUNCTION(Server, Reliable)
	void ServerEquipButtonPressed();

	//
	//Grenade
	//
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedGrenade;

	//
	//Animations
	//
	void TurnInPlace(float DeltaTime);
	void CalculateAO_Pitch();
	float CalculateSpeed();

	float AO_Yaw;
	float InterpAO_Yaw;
	float AO_Pitch;
	float TurnThreshold = 0.5f;
	float ProxyYaw;
	float TimeSinceLastMovementReplication;
	bool bRotateRootBone;
	FRotator StartingAimRotation;
	FRotator ProxyRotation;
	FRotator ProxyRotationLastFrame;
	ETurningInPlace TurningInPlace;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* FireWeaponMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ElimMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ThrowGrenadeMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* SwapMontage;

	//
	//Player Health
	//
	void ElimTimerfinished();
	
	UFUNCTION()
	void OnRep_Health(float LastHealth);
	
	bool bElimmed = false;
	FTimerHandle ElimTimer;
	ABlasterGameMode* BlasterGameMode;
	
	UPROPERTY()
	ABlasterPlayerController* BlasterPlayerController;
	
	UPROPERTY(ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = "Player Stats")
	float Health = 100.f;
	
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxHealth = 100.f;
	
	UPROPERTY(EditDefaultsOnly)
	float ElimDelay = 3.f;

	//
	//PlayerShield
	//
	UFUNCTION()
	void OnRep_Shield(float LastShield);
	
	UPROPERTY(ReplicatedUsing = OnRep_Shield, EditAnywhere, Category = "Player Stats")
	float Shield = 0.f;
	
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxShield = 100.f;

	//
	//Dissolve Effect
	//
	void StartDissolve();
	
	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);
	
	FOnTimelineFloat DissolveTrack;
	
	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DissolveTimeline;

	UPROPERTY(EditAnywhere)
	UCurveFloat* DissolveCurve;

	//Dynamic Instance that can be changed at runtime
	UPROPERTY(VisibleAnywhere, Category = Elim)
	UMaterialInstanceDynamic* DynamicDissolveMaterialInstance;

	//Material instance set in blueprint used by dynamic instance
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* DissolveMaterialInstance;

	//
	//Team colours
	//
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* PurpleDissolveMatInst;
	
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* PurpleMaterial;
	
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* BlueDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* BlueMaterial;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* OriginalDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* OriginalMaterial;

	//
	//ElimFX
	//
	UPROPERTY(EditAnywhere)
	UParticleSystem* ElimBotEffect;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ElimBotComponent;

	UPROPERTY(EditAnywhere)
	USoundBase* ElimBotSound;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CrownSystem;

	UPROPERTY()
	UNiagaraComponent* CrownComponent;

	//
	//Score
	//
	UPROPERTY()
	ABlasterPlayerState* BlasterPlayerState;
	
	//
	//Default Weapon
	//
	UPROPERTY(EditAnywhere)
	TSubclassOf<AWeapon> DefaultWeaponClass;

	//
	//Leave Game
	//
	bool bLeftGame;
	
public:
	void SetOverlappingWeapon(AWeapon* Weapon);
	bool IsWeaponEquipped();
	bool IsAiming();
	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }
	FORCEINLINE ETurningInPlace GetTurningInPlace() const { return TurningInPlace; }
	AWeapon* GetEquippedWeapon();
	FVector GetHitTarget() const; 
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE bool ShouldRotateRootBone() const { return bRotateRootBone; }
	FORCEINLINE bool IsElimmed() const { return bElimmed; }
	FORCEINLINE float GetHealth() const { return Health; }
	FORCEINLINE void SetHealth(float Ammount) { Health = Ammount; }
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }
	FORCEINLINE float GetShield() const { return Shield; }
	FORCEINLINE void SetShield(float Ammount) { Shield = Ammount; }
	FORCEINLINE float GetMaxShield() const { return MaxShield; }
	ECombatState GetCombatState() const;
	FORCEINLINE bool GetDisableGameplay() const { return bDisableGameplay; }
	FORCEINLINE UAnimMontage* GetReloadMontage() const { return ReloadMontage; }
	FORCEINLINE UCombatComponent* GetCombat() const { return Combat; }
	FORCEINLINE UStaticMeshComponent* GetAttachedGrenade() const { return AttachedGrenade; }
	FORCEINLINE UBuffComponent* GetBuff() const { return Buff; }
	bool IsLocallyReloading();
	FORCEINLINE ULagCompensationComponent* GetLagCompensation() const { return LagCompensation; }
	bool IsHoldingTheFlag() const;
	ETeam GetTeam();
	void SetHoldingTheFlag(bool bHolding);
};
