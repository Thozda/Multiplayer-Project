// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blaster/BlasterTypes/TurningInPlace.h"
#include "GameFramework/Character.h"
#include "BlasterCharacter.generated.h"

class UInputAction;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UWidgetComponent;
class AWeapon;
class UCombatComponent;
class UAnimMontage;

UCLASS()
class BLASTER_API ABlasterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABlasterCharacter();
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitializeComponents() override;

	void PlayFireMontage(bool bAiming);
	
protected:
	virtual void BeginPlay() override;

	//
	//Animation
	//
	void AimOffset(float DeltaTime);
	
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

private:
	//
	//Components
	//
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* OverheadWidget;

	UPROPERTY(VisibleAnywhere)
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
	
	float AO_Yaw;
	float InterpAO_Yaw;
	float AO_Pitch;
	FRotator StartingAimRotation;
	ETurningInPlace TurningInPlace;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* FireWeaponMontage;

public:
	void SetOverlappingWeapon(AWeapon* Weapon);
	bool IsWeaponEquipped();
	bool IsAiming();
	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }
	FORCEINLINE ETurningInPlace GetTurningInPlace() const { return TurningInPlace; }
	AWeapon* GetEquippedWeapon();
};
