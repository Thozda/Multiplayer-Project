#pragma once

UENUM(BlueprintType)
enum class ETeam : uint8
{
	ET_PurpleTeam UMETA(DisplayName = "Purple Team"),
	ET_BlueTeam UMETA(DisplayName = "Blue Team"),
	ET_NoTeam UMETA(DisplayName = "No Team"),
	
	ET_MAX UMETA(DisplayName = "DefaultMAX")
};