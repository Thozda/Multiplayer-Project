// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/ReturnToMainMenu.h"
#include "MultiplayerSessionsSubsystem.h"
#include "Character/BlasterCharacter.h"
#include "Components/Button.h"
#include "GameFramework/GameModeBase.h"

void UReturnToMainMenu::MenuSetup()
{
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	SetIsFocusable(true);

	UWorld* World = GetWorld();
	if (World)
	{
		PlayerController = PlayerController == nullptr ? World->GetFirstPlayerController() : PlayerController;
		if (PlayerController)
		{
			FInputModeGameAndUI InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}
	
	if (ReturnButton && !ReturnButton->OnClicked.IsBound())
	{
		ReturnButton->OnClicked.AddDynamic(this, &ThisClass::ReturnButtonClicked);
	}
	
	UGameInstance* Instance = GetGameInstance();
	if (Instance)
	{
		MultiplayerSessionsSubsystem = Instance->GetSubsystem<UMultiplayerSessionsSubsystem>();
		if (MultiplayerSessionsSubsystem)
		{
			MultiplayerSessionsSubsystem->MultiplayerOnDestroySessionComplete.AddDynamic(this, &ThisClass::OnDestroySession);
		}
	}
}

bool UReturnToMainMenu::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}

	return true;
}

void UReturnToMainMenu::ReturnButtonClicked()
{
	if (ReturnButton)
	{
		ReturnButton->SetIsEnabled(false);
	}
	
	UWorld* World = GetWorld();
	if (World && ReturnButton)
	{
		ABlasterCharacter* BlasterCharacter = Cast<ABlasterCharacter>(World->GetFirstPlayerController()->GetPawn());
		if (BlasterCharacter)
		{
			BlasterCharacter->ServerLeaveGame();
			BlasterCharacter->OnLeftGame.AddDynamic(this, &ThisClass::OnPlayerLeftGame);
		}
		else
		{
			ReturnButton->SetIsEnabled(true);
		}
	}
}

void UReturnToMainMenu::OnPlayerLeftGame()
{
	if (MultiplayerSessionsSubsystem)
	{
		MultiplayerSessionsSubsystem->DestroySession();
	}
}

void UReturnToMainMenu::OnDestroySession(bool bWasSuccessful)
{
	if (!bWasSuccessful && ReturnButton)
	{
		ReturnButton->SetIsEnabled(true);
		return;
	}
	
	UWorld* World = GetWorld();
	if (World)
	{
		AGameModeBase* GameMode = World->GetAuthGameMode<AGameModeBase>();
		if (GameMode)
		{
			//GetAuthGameMode only valid on Server
			GameMode->ReturnToMainMenuHost();
		}
		else
		{
			//Client
			PlayerController = PlayerController == nullptr ? World->GetFirstPlayerController() : PlayerController;
			if (PlayerController)
			{
				PlayerController->ClientReturnToMainMenuWithTextReason(FText());
			}
		}
	}
}

void UReturnToMainMenu::MenuTearDown()
{
	RemoveFromParent();
	
	UWorld* World = GetWorld();
	if (World)
	{
		PlayerController = PlayerController == nullptr ? World->GetFirstPlayerController() : PlayerController;
		if (PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
	
	if (ReturnButton && ReturnButton->OnClicked.IsBound())
	{
		ReturnButton->OnClicked.RemoveDynamic(this, &ThisClass::ReturnButtonClicked);
	}
	
	if (MultiplayerSessionsSubsystem && MultiplayerSessionsSubsystem->MultiplayerOnDestroySessionComplete.IsBound())
	{
		MultiplayerSessionsSubsystem->MultiplayerOnDestroySessionComplete.RemoveDynamic(this, &ThisClass::OnDestroySession);
	}
}
