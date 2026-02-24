// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/ElimAnnouncement.h"

#include "Components/TextBlock.h"

void UElimAnnouncement::SetElimAnnouncementText(FString AttackerName, FString VictimName)
{
	if (AnnouncementText)
	{
		FString ElimAnnounementText = FString::Printf(TEXT("%s Eliminated %s"), *AttackerName, *VictimName);
		AnnouncementText->SetText(FText::FromString(ElimAnnounementText));
	}
}
