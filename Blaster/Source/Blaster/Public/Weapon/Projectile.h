// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class UBoxComponent;
class UProjectileMovementComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USoundCue;
class UNiagaraSystem;
class UNiagaraComponent;

UCLASS()
class BLASTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AProjectile();
	virtual void Tick(float DeltaTime) override;

	virtual void Destroyed() override;

	//
	//Server-Side Rewind
	//
	bool bUseServerSideRewind = false;
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize100 InitialVelocity;

	//Only set this for Grenades and Rockets
	UPROPERTY(EditAnywhere)
	float Damage = 20.f;

	//Doesnt matter for Grenades and Rockets
	UPROPERTY(EditAnywhere)
	float HeadshotDamage = 40.f;

	UPROPERTY(EditAnywhere)
	float InitialSpeed = 15000;

protected:
	virtual void BeginPlay() override;
	void SpawnTrailSystem();
	void StartDestroyTimer();
	void ExplodeDamage();
	void DestroyTimerFinished();

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit );

	//
	//Components
	//
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovementComponent;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;

	//
	//Damage
	//
	UPROPERTY(EditAnywhere)
	float DamageInnerRadius = 200.f;
	
	UPROPERTY(EditAnywhere)
	float DamageOuterRadius = 500.f;
	
	//
	//FX
	//
	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactParticles;

	UPROPERTY(EditAnywhere)
	USoundCue* ImpactSound;
	
	UPROPERTY(EditAnywhere)
	UNiagaraSystem* TrailSystem;

	UPROPERTY()
	UNiagaraComponent* TrailSystemComponent;

private:
	//
	//FX
	//
	UPROPERTY()
	UParticleSystemComponent* TracerComponent;

	UPROPERTY(EditAnywhere)
	UParticleSystem* Tracer;

	//
	//Explosion
	//
	FTimerHandle DestroyTimer;

	UPROPERTY(EditAnywhere)
	float DestroyTime = 3.f;
};
