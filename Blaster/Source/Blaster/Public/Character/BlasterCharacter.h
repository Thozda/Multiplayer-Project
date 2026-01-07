// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blaster/BlasterTypes/TurningInPlace.h"
#include "GameFramework/Character.h"
#include "Interfaces/InteractWithCrosshairsInterface.h"
#include "Components/TimelineComponent.h"
#include "Blaster/BlasterTypes/CombatState.h"
#include "BlasterCharacter.generated.h"

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

	void PlayFireMontage(bool bAiming);
	void PlayElimMontage();
	void PlayReloadMontage();
	void Elim();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastElim();

protected:
	virtual void BeginPlay() override;
	//poll for any relevant classes and init HUD
	void PollInit();

	//
	//Animation
	//
	void AimOffset(float DeltaTime);
	void SimProxiesTurn();
	void PlayHitReactMontage();
	void UpdateHUDHealth();

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

	//
	//Damage
	//
	UFUNCTION()
	void RecieveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatorController,
		AActor* DamageCauser);

private:
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

	//
	//Weapon
	//
	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	AWeapon* OverlappingWeapon;

	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeapon* LastWeapon);

	UFUNCTION(Server, Reliable)
	void ServerEquipButtonPressed();

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

	//
	//Player Health
	//
	UFUNCTION()
	void OnRep_Health();
	void ElimTimerfinished();
	
	bool bElimmed = false;
	FTimerHandle ElimTimer;

	UPROPERTY()
	ABlasterPlayerController* BlasterPlayerController;
	
	UPROPERTY(ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = "Player Stats")
	float Health = 100.f;
	
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxHealth = 100.f;
	
	UPROPERTY(EditDefaultsOnly)
	float ElimDelay = 3.f;

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
	//ElimBot
	//
	UPROPERTY(EditAnywhere)
	UParticleSystem* ElimBotEffect;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ElimBotComponent;

	UPROPERTY(EditAnywhere)
	USoundBase* ElimBotSound;

	//
	//Score
	//
	UPROPERTY()
	ABlasterPlayerState* BlasterPlayerState;
	
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
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }
	FORCEINLINE ECombatState GetCombatState() const;
};
