// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HUD/BlasterHUD.h"
#include "Weapon/WeaponTypes.h"
#include "Blaster/BlasterTypes/CombatState.h"
#include "CombatComponent.generated.h"

class AWeapon;
class ABlasterCharacter;
class ABlasterPlayerController;
class ABlasterHUD;
class AProjectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLASTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCombatComponent();
	friend class ABlasterCharacter;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void EquipWeapon(AWeapon* WeaponToEquip);
	void SwapWeapons();
	void Reload();
	void JumpToShotgunEnd();
	void PickupAmmo(EWeaponType WeaponType, int32 AmmoAmount);

	UFUNCTION(BlueprintCallable)
	void FinishReloading();

	UFUNCTION(BlueprintCallable)
	void FinishSwap();

	UFUNCTION(BlueprintCallable)
	void FinishSwapAttachWeapons();

	UFUNCTION(BlueprintCallable)
	void ShotgunShellReload();

	UFUNCTION(BlueprintCallable)
	void ThrowGrenadeFinished();
	
	UFUNCTION(BlueprintCallable)
	void LaunchGrenade();

	UFUNCTION(Server, Reliable)
	void Server_LaunchGrenade(const FVector_NetQuantize& Target);

	bool bLocallyReloading = false;
	
protected:
	virtual void BeginPlay() override;

	//
	//Equip
	//
	void SetHUDCrosshairs(float DeltaTime);
	void DropEquippedWeapon();
	void AttachActorToRightHand(AActor* ActorToAttach);
	void AttachActorToLeftHand(AActor* ActorToAttach);
	void AttachFlagToLeftHand(AWeapon* Flag);
	void AttachActorToBackpack(AActor* ActorToAttach);
	void UpdateCarriedAmmo();
	void ReloadEmptyWeapon();
	void PlayEquipWeaponSound(AWeapon* WeaponToEquip);
	void EquipPrimaryWeapon(AWeapon* WeaponToEquip);
	void EquipSecondaryWeapon(AWeapon* WeaponToEquip);
	
	UFUNCTION()
	void OnRep_EquippedWeapon();

	UFUNCTION()
	void OnRep_SecondaryWeapon();

	//
	//Aim
	//
	void SetAiming(bool bIsAiming);

	UFUNCTION(Server, Reliable)
	void ServerSetAiming(bool bIsAiming);
	
	UFUNCTION(Server, Reliable)
	void ServerHitTarget(const FVector_NetQuantize& Target);

	UPROPERTY(Replicated)
	FVector_NetQuantize HitTarget;

	//
	//Fire
	//
	void FireButtonPressed(bool bPressed);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire(const FVector_NetQuantize& TraceHitTarget, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

	//
	//Reload
	//
	int32 AmountToReload();
	//Called on both Server and Clients
	void HandleReload();
	
	UFUNCTION(Server, Reliable)
	void ServerReload();

	//
	//Grenade
	//
	void ThrowGrenade();

	UFUNCTION(Server, Reliable)
	void Server_ThrowGrenade();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> GrenadeClass;

private:
	UPROPERTY()
	ABlasterCharacter* Character;
	
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	AWeapon* EquippedWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_SecondaryWeapon)
	AWeapon* SecondaryWeapon;

	//
	//Combat State
	//
	UFUNCTION()
	void OnRep_CombatState();

	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;

	//
	//Animation
	//
	bool bFireButtonPressed;
	
	UPROPERTY()
	ABlasterPlayerController* Controller;
	
	UPROPERTY(EditAnywhere)
	float BaseWalkSpeed;

	UPROPERTY(EditAnywhere)
	float AimWalkSpeed;

	//
	//HUD
	//
	FHUDPackage HUDPackage;
	float CrosshairVelocityFactor;
	float CrosshairInAirFactor;
	float CrosshairAimFactor;
	float CrosshairShootingFactor;
	float CrosshairTargetFactor;
	float CrosshairTargetFactorInterp;

	UPROPERTY()
	ABlasterHUD* HUD;

	//
	//Aiming
	//
	void InterpFOV(float DeltaTime);

	UFUNCTION()
	void OnRep_Aiming();

	UPROPERTY(ReplicatedUsing = OnRep_Aiming)
	bool bAiming = false;

	bool bAimButtonPressed = false;
	
	//set to cameras base fov in begin play
	float DefaultFOV;

	float CurrentFOV;
	
	UPROPERTY(EditAnywhere, Category = Combat)
	float ZoomedFOV = 30.f;

	UPROPERTY(EditAnywhere, Category = Combat)
	float ZoomInterpSpeed = 20.f;

	//
	//Fire
	//
	bool CanFire();
	void Fire();
	void FireProjectileWeapon();
	void FireHitscanWeapon();
	void FireShotgun();
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);
	void ShotgunLocalFire(const TArray<FVector_NetQuantize>& TraceHitTargets);
	void StartFireTimer();
	void FireTimerFinished();

	bool bCanFire = true;
	FTimerHandle FireTimer;

	//
	//Ammo
	//
	void InitializeCarriedAmmo();
	void UpdateAmmoValues();
	void UpdateShotgunAmmoValues();
	
	UFUNCTION()
	void OnRep_CarriedAmmo();

	TMap<EWeaponType, int32> CarriedAmmoMap;

	//Carried ammo for currently equipped weapon type
	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;
	
	UPROPERTY(EditAnywhere)
	int32 MaxCarriedAmmo = 500;

	UPROPERTY(EditAnywhere)
	int32 StartingARAmmo = 60;
	
	UPROPERTY(EditAnywhere)
	int32 StartingRocketAmmo = 4;
	
	UPROPERTY(EditAnywhere)
	int32 StartingPistolAmmo = 32;
	
	UPROPERTY(EditAnywhere)
	int32 StartingSMGAmmo = 40;
	
	UPROPERTY(EditAnywhere)
	int32 StartingShotgunAmmo = 8;
	
	UPROPERTY(EditAnywhere)
	int32 StartingSniperAmmo = 10;
	
	UPROPERTY(EditAnywhere)
	int32 StartingGrenadeLauncherAmmo = 8;

	//
	//Grenade
	//
	void ShowAttachedGrenade(bool bShowGrenade);
	void UpdateHUDGrenades();
	
	UFUNCTION()
	void OnRep_Grenades();
	
	UPROPERTY(ReplicatedUsing = OnRep_Grenades)
	int32 Grenades = 2;

	UPROPERTY(EditAnywhere)
	int32 MaxGrenades = 4;

	//
	//Flag
	//
	UFUNCTION()
	void OnRep_HoldingTheFlag();
	
	UPROPERTY(ReplicatedUsing = OnRep_HoldingTheFlag)
	bool bHoldingTheFlag = false;

	UPROPERTY()
	AWeapon* TheFlag;

public:
	FORCEINLINE int32 GetGrenades() const { return Grenades; }
	bool ShouldSwapWeapons();
};
