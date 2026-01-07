// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HUD/BlasterHUD.h"
#include "Weapon/WeaponTypes.h"
#include "Blaster/BlasterTypes/CombatState.h"
#include "CombatComponent.generated.h"

#define TRACE_LENGTH 80000.f

class AWeapon;
class ABlasterCharacter;
class ABlasterPlayerController;
class ABlasterHUD;

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
	void Reload();
	void UpdateAmmoValues();

	UFUNCTION(BlueprintCallable)
	void FinishReloading();
	
protected:
	virtual void BeginPlay() override;

	//
	//Equip
	//
	UFUNCTION()
	void OnRep_EquippedWeapon();

	void SetHUDCrosshairs(float DeltaTime);

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

	UFUNCTION(Server, Reliable)
	void ServerFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

	//
	//Reload
	//
	int32 AmountToReload();
	//Called on both Server and Clients
	void HandleReload();
	
	UFUNCTION(Server, Reliable)
	void ServerReload();

private:
	UFUNCTION()
	void OnRep_CombatState();
	
	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;
	
	//
	//Animation
	//
	bool bFireButtonPressed;
	
	UPROPERTY()
	ABlasterCharacter* Character;
	
	UPROPERTY()
	ABlasterPlayerController* Controller;
	
	UPROPERTY(Replicated)
	bool bAiming;
	
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	AWeapon* EquippedWeapon;

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
	void StartFireTimer();
	void FireTimerFinished();

	bool bCanFire = true;
	FTimerHandle FireTimer;

	//
	//Ammo
	//
	void InitializeCarriedAmmo();
	
	UFUNCTION()
	void OnRep_CarriedAmmo();

	TMap<EWeaponType, int32> CarriedAmmoMap;

	//Carried ammo for currently equipped weapon type
	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;

	UPROPERTY(EditAnywhere)
	int32 StartingARAmmo = 30;
	
};
