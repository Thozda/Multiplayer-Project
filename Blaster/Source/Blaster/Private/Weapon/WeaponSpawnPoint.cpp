// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponSpawnPoint.h"

#include "Weapon/Weapon.h"

AWeaponSpawnPoint::AWeaponSpawnPoint()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AWeaponSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
	StartSpawnWeaponTimer((AActor*)nullptr);
}

void AWeaponSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponSpawnPoint::SpawnWeapon()
{
	int32 NumPickupClasses = WeaponClasses.Num();
	if (NumPickupClasses > 0)
	{
		int32 Selection = FMath::RandRange(0, NumPickupClasses - 1);
		SpawnedWeapon = GetWorld()->SpawnActor<AWeapon>(WeaponClasses[Selection], GetActorTransform());
		if (HasAuthority() && SpawnedWeapon)
		{
			SpawnedWeapon->SetSpawnPoint(this);
		}
	}
}

void AWeaponSpawnPoint::StartSpawnWeaponTimer(AActor* DestroyedActor)
{
	const float SpawnTime = FMath::RandRange(SpawnWeaponTimeMin, SpawnWeaponTimeMax);
	GetWorldTimerManager().SetTimer(SpawnWeaponTimer, this, &ThisClass::SpawnWeaponTimerFinished, SpawnTime);
}

void AWeaponSpawnPoint::SpawnWeaponTimerFinished()
{
	if (HasAuthority())
	{
		SpawnWeapon();
	}
}
