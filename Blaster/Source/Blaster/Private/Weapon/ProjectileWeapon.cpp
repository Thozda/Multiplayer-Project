// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ProjectileWeapon.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Weapon/Projectile.h"

void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	if (!HasAuthority()) return;
	
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
	if (MuzzleFlashSocket)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		if (ProjectileClass)
	    {
     		UWorld* World = GetWorld();
			APawn* InstigatorPawn = Cast<APawn>(GetOwner());
			if (World && InstigatorPawn)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = GetOwner();
				SpawnParams.Instigator = InstigatorPawn;
				World->SpawnActor<AProjectile>(ProjectileClass, SocketTransform.GetLocation(), ToTarget.Rotation(), SpawnParams);
			}
	    }
	}
}
