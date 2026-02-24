// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReturnToMainMenu.generated.h"

class UButton;
class UMultiplayerSessionsSubsystem;
class APlayerController;

/**
 * 
 */
UCLASS()
class BLASTER_API UReturnToMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual bool Initialize() override;
	
	void MenuSetup();
	void MenuTearDown();

protected:
	UFUNCTION()
	void OnDestroySession(bool bWasSuccessful);

	UFUNCTION()
	void OnPlayerLeftGame();

private:
	UFUNCTION()
	void ReturnButtonClicked();

	UPROPERTY()
	APlayerController* PlayerController;

	UPROPERTY()
	UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;
	
	UPROPERTY(meta = (BindWidget))
	UButton* ReturnButton;
	
};
