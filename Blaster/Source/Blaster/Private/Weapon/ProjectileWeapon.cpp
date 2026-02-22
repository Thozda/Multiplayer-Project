// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ProjectileWeapon.h"
#include "Engine/SkeletalMeshSocket.h"
#include "EntitySystem/MovieSceneEntitySystemRunner.h"
#include "Weapon/Projectile.h"

void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
    UWorld* World = GetWorld();
	APawn* InstigatorPawn = Cast<APawn>(GetOwner());
	if (MuzzleFlashSocket && World && InstigatorPawn)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = InstigatorPawn;

		AProjectile* SpawnedProjectile = nullptr;

		if (bUseServerSideRewind)
		{
			if (InstigatorPawn->HasAuthority()) //On Server - No SSR
			{
				if (InstigatorPawn->IsLocallyControlled())
				{
					//Local Player on Server - Replicated Projectile - No SSR
					SpawnedProjectile = World->SpawnActor<AProjectile>(ProjectileClass, SocketTransform.GetLocation(),
						ToTarget.Rotation(), SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = false;
					SpawnedProjectile->Damage = Damage;
				}
				else
				{
					//Non-Local Player on Server - Non-Replicated Projectile - SSR
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(),
						ToTarget.Rotation(), SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = true;
				}
			}
			else //Client - Use SSR
			{
				if (InstigatorPawn->IsLocallyControlled())
				{
					//Local Client - Non-Replicated Projectile - Use SSR
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(),
						ToTarget.Rotation(), SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = true;
					SpawnedProjectile->TraceStart = SocketTransform.GetLocation();
					SpawnedProjectile->InitialVelocity = SpawnedProjectile->GetActorForwardVector() * SpawnedProjectile->InitialSpeed;
					SpawnedProjectile->Damage = Damage;
				}
				else
				{
					//Non-Local Client - Non-Replicated Projectile - No SSR
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(),
						ToTarget.Rotation(), SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = false;
				}
			}
		}
		else //No SSR
		{
			if (InstigatorPawn->HasAuthority())
			{
				//All Pawns on Server - Replicated Projectile - No SSR
				SpawnedProjectile = World->SpawnActor<AProjectile>(ProjectileClass, SocketTransform.GetLocation(),
					ToTarget.Rotation(), SpawnParams);
				SpawnedProjectile->bUseServerSideRewind = false;
				SpawnedProjectile->Damage = Damage;
			}
		}
	}
}
