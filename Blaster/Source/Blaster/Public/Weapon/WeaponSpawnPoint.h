// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponSpawnPoint.generated.h"

class AWeapon;

UCLASS()
class BLASTER_API AWeaponSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	AWeaponSpawnPoint();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void StartSpawnWeaponTimer(AActor* DestroyedActor);

protected:
	virtual void BeginPlay() override;

	void SpawnWeapon();
	void SpawnWeaponTimerFinished();

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AWeapon>> WeaponClasses;

	UPROPERTY()
	AWeapon* SpawnedWeapon;

private:
	FTimerHandle SpawnWeaponTimer;

	UPROPERTY(EditAnywhere)
	float SpawnWeaponTimeMin;

	UPROPERTY(EditAnywhere)
	float SpawnWeaponTimeMax;
	
};
