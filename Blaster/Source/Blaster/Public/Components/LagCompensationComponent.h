// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BlasterCharacter.h"
#include "Components/ActorComponent.h"
#include "LagCompensationComponent.generated.h"

class ABlasterPlayerController;

USTRUCT(BlueprintType)
struct FBoxInformation
{
	GENERATED_BODY()

	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FRotator Rotation;

	UPROPERTY()
	FVector BoxExtent;
};

USTRUCT(BlueprintType)
struct FFramePackage
{
	GENERATED_BODY()

	UPROPERTY()
	float Time;

	UPROPERTY()
	TMap<FName, FBoxInformation> HitBoxInfo;

	UPROPERTY()
	ABlasterCharacter* Character;
};

USTRUCT(BlueprintType)
struct FServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	bool bHitConfirmed;

	UPROPERTY()
	bool bHeadShot;
};

USTRUCT(BlueprintType)
struct FShotgunServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<ABlasterCharacter*, uint32> HeadShots;

	UPROPERTY()
	TMap<ABlasterCharacter*, uint32> BodyShots;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLASTER_API ULagCompensationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	ULagCompensationComponent();
	friend class ABlasterCharacter;
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void ShowFramePackage(const FFramePackage& Package, const FColor Color);

	//Hitscan
	FServerSideRewindResult ServerSideRewind(ABlasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize& HitLocation, const float HitTime);

	//Projectile
	FServerSideRewindResult ProjectileServerSideRewind(ABlasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize100& InitialVelocity, const float HitTime);
	
	//Shotgun
	FShotgunServerSideRewindResult ShotgunServerSideRewind(const TArray<ABlasterCharacter*>& HitCharacters,
		const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations, const float HitTime);

	//HitScan
	UFUNCTION(Server, Reliable)
	void ServerScoreRequest(ABlasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize& HitLocation, const float HitTime);

	//Projectile
	UFUNCTION(Server, Reliable)
	void ProjectileServerScoreRequest(ABlasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize100& InitialVelocity, const float HitTime);
	
	//Shotgun
	UFUNCTION(Server, Reliable)
	void ShotgunServerScoreRequest(const TArray<ABlasterCharacter*>& HitCharacters,
		const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations, const float HitTime);

protected:
	virtual void BeginPlay() override;

	void SaveFramePackage(FFramePackage& Package);
	void TickSaveFramePackage();
	FFramePackage InterpBetweenFrames(const FFramePackage& OlderFrame, const FFramePackage& YoungerFrame, float HitTime);
	FFramePackage GetFrameToCheck(ABlasterCharacter* HitCharacter, const float HitTime);
	void CacheBoxPositions(const ABlasterCharacter* HitCharacter, FFramePackage& OutFramePackage);
	void MoveBoxes(const ABlasterCharacter* HitCharacter, const FFramePackage& Package);
	void ResetBoxes(const ABlasterCharacter* HitCharacter, const FFramePackage& Package);
	void EnableCharactermeshCollision(const ABlasterCharacter* HitCharacter, ECollisionEnabled::Type NewType);

	//HitScan
	FServerSideRewindResult ConfirmHit(const FFramePackage& Package, const ABlasterCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation);

	//Projectile
	FServerSideRewindResult ProjectileConfirmHit(const FFramePackage& Package, ABlasterCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialVelocity, const float HitTime);
	
	//Shotgun
	FShotgunServerSideRewindResult ShotgunConfirmHit(const TArray<FFramePackage>& Packages, const FVector_NetQuantize& TraceStart,
		const TArray<FVector_NetQuantize>& HitLocations);
	
private:
	TDoubleLinkedList<FFramePackage> FrameHistory;

	UPROPERTY(EditAnywhere)
	float MaxRecordTime = 4.f;
	
	UPROPERTY()
	ABlasterCharacter* Character;

	UPROPERTY()
	ABlasterPlayerController* Controller;
	
};
