// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BlasterHUD.generated.h"

class UElimAnnouncement;
class UAnnouncement;

USTRUCT(BlueprintType)
struct FHUDPackage
{
	GENERATED_BODY()
public:
	class UTexture2D* CrosshairCenter;
	UTexture2D* CrosshairLeft;
	UTexture2D* CrosshairRight;
	UTexture2D* CrosshairTop;
	UTexture2D* CrosshairBottom;
	float CrosshairSpread;
	FLinearColor CrosshairsColor;
};

class UCharacterOverlay;
class UUserWidget;

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;
	void AddCharacterOverlay();
	void AddAnnouncement();
	void AddElimAnnounement(FString Attacker, FString Victim);

	UPROPERTY(EditAnywhere, Category = "Player Stats")
	TSubclassOf<UUserWidget> CharacterOverlayClass;

	UPROPERTY(EditAnywhere, Category = "Announcements")
	TSubclassOf<UUserWidget> AnnouncementClass;

	UPROPERTY()
	UCharacterOverlay* CharacterOverlay;

	UPROPERTY()
	UAnnouncement* Announcement;

protected:
	virtual void BeginPlay() override;
		
private:
	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewporCenter, FVector2D Spread, FLinearColor CrosshairsColor);

	FHUDPackage HUDPackage;

	UPROPERTY()
	APlayerController* OwningPlayer;

	UPROPERTY(EditAnywhere)
	float CrosshairSpreadMax = 16.f;

	//
	//Elim Announcement
	//
	UFUNCTION()
	void ElimAnnouncementTimerFinished(UElimAnnouncement* MessageToRemove);
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UElimAnnouncement> ElimAnnouncementClass;

	UPROPERTY(EditAnywhere)
	float ElimAnnouncementTime = 3.f;

	UPROPERTY()
	TArray<UElimAnnouncement*> ElimMessages;
	
public:
	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) { HUDPackage = Package; }
	
};
