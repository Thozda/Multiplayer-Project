// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BlasterPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighPingDelegate, bool, bPingTooHigh);

class ABlasterHUD;
class UCharacterOverlay;
class ABlasterGameMode;

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual float GetServerTime(); //Synced with server world clock
	virtual void ReceivedPlayer() override; //Sync with server clock as soon as possible
	void SetHUDHealth(float Health, float MaxHealth);
	void SetHUDShield(float Shield, float MaxShield);
	void SetHUDScore(float Score);
	void SetHUDDefeats(int32 Defeats);
	void SetHUDWeaponAmmo(int32 Ammo);
	void SetHUDCarriedAmmo(int32 Ammo);
	void SetHUDMatchCountdown(float CountdownTime);
	void SetHUDAnnouncementCountdown(float CountdownTime);
	void SetHUDGrenades(int32 Grenades);
	void OnMatchStateSet(FName State);
	void HandleMatchHasStarted();
	void HandleCooldown();

	float SingleTripTime = 0.f;

	FHighPingDelegate HighPingDelegate;
	
protected:
	virtual void BeginPlay() override;
	void CheckTimeSync(float DeltaSeconds);
	void PollInit();
	void SetHUDTime();

	//
	//Sync Time between Client and Server
	//
	//Requests current server time passing in clients time when the request was sent
	UFUNCTION(Server, Reliable)
	void ServerRequestServerTime(float TimeOfClientRequest);

	//Reports the current server time to the client in response to ServerRequestServerTime
	UFUNCTION(Client, Reliable)
	void ClientReportServerTime(float TimeOfClientRequest, float TimeServerRecievedClientRequest);

	//Difference between client and server time
	float ClientServerDelta = 0.f;
	float TimeSyncRunningTime = 0.f;

	UPROPERTY(EditAnywhere, Category = Time)
	float TimeSyncFrequency = 5.f;

	//
	//MatchState
	//
	UFUNCTION(Server, Reliable)
	void ServerCheckMatchState();

	UFUNCTION(Client, Reliable)
	void ClientJoinMidGame(FName StateOfMatch, float Warmup, float Match, float Cooldown, float Stating);

	//
	//Ping Warning
	//
	void CheckPing(float DeltaSeconds);
	void HighPingWarning();
	void StopHighPingWarning();
	
private:
	UFUNCTION()
	void OnRep_MatchState();

	UFUNCTION(Server, Reliable)
	void ServerReportPingStatus(bool bHighPing);

	float WarmupTime = 0.f;
	float MatchTime = 0.f;
	float CooldownTime = 0.f;
	float LevelStartingTime = 0.f;
	uint32 CountdownInt = 0;

	bool bInitializeHealth = false;
	float HUDHealth;
	float HUDMaxHealth;
	bool bInitializeShield = false;
	float HUDShield;
	float HUDMaxShield;
	bool bInitializeScore = false;
	float HUDScore;
	bool bInitializeDefeats = false;
	int32 HUDDefeats;
	bool bInitializeGrenades = false;
	int32 HUDGrenades;
	bool bInitializeWeaponAmmo = false;
	int32 HUDWeaponAmmo;
	bool bInitializeCarriedAmmo = false;
	int32 HUDCarriedAmmo;

	float HighPingRunningTime = 0.f;
	float HighPingAnimationRunningTime = 0.f;

	UPROPERTY(EditAnywhere)
	float HighPingDuration = 5.f;

	UPROPERTY(EditAnywhere)
	float CheckPingFrequency = 20.f;

	UPROPERTY(EditAnywhere)
	float HighPingThreshold = 50.f;
	
	UPROPERTY(ReplicatedUsing = OnRep_MatchState)
	FName MatchState;
	
	UPROPERTY()
	ABlasterHUD* BlasterHUD;

	UPROPERTY()
	UCharacterOverlay* CharacterOverlay;

	UPROPERTY()
	ABlasterGameMode* BlasterGameMode;
	
};
