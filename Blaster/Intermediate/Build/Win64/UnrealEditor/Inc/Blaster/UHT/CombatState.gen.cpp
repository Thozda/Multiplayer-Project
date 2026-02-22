// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterTypes/CombatState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatState() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ECombatState();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECombatState **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatState;
static UEnum* ECombatState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Blaster_ECombatState, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("ECombatState"));
	}
	return Z_Registration_Info_UEnum_ECombatState.OuterSingleton;
}
template<> BLASTER_API UEnum* StaticEnum<ECombatState>()
{
	return ECombatState_StaticEnum();
}
struct Z_Construct_UEnum_Blaster_ECombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Max.DisplayName", "DefaultMAX" },
		{ "ECS_Max.Name", "ECombatState::ECS_Max" },
		{ "ECS_Reloading.DisplayName", "Reloading" },
		{ "ECS_Reloading.Name", "ECombatState::ECS_Reloading" },
		{ "ECS_SwappingWeapons.DisplayName", "Swapping Weapons" },
		{ "ECS_SwappingWeapons.Name", "ECombatState::ECS_SwappingWeapons" },
		{ "ECS_ThrowingGrenade.DisplayName", "Throwing Grenade" },
		{ "ECS_ThrowingGrenade.Name", "ECombatState::ECS_ThrowingGrenade" },
		{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
		{ "ECS_Unoccupied.Name", "ECombatState::ECS_Unoccupied" },
		{ "ModuleRelativePath", "BlasterTypes/CombatState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatState::ECS_Unoccupied", (int64)ECombatState::ECS_Unoccupied },
		{ "ECombatState::ECS_Reloading", (int64)ECombatState::ECS_Reloading },
		{ "ECombatState::ECS_ThrowingGrenade", (int64)ECombatState::ECS_ThrowingGrenade },
		{ "ECombatState::ECS_SwappingWeapons", (int64)ECombatState::ECS_SwappingWeapons },
		{ "ECombatState::ECS_Max", (int64)ECombatState::ECS_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Blaster_ECombatState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	"ECombatState",
	"ECombatState",
	Z_Construct_UEnum_Blaster_ECombatState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_ECombatState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_ECombatState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Blaster_ECombatState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Blaster_ECombatState()
{
	if (!Z_Registration_Info_UEnum_ECombatState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatState.InnerSingleton, Z_Construct_UEnum_Blaster_ECombatState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatState.InnerSingleton;
}
// ********** End Enum ECombatState ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_CombatState_h__Script_Blaster_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatState_StaticEnum, TEXT("ECombatState"), &Z_Registration_Info_UEnum_ECombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4169793038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_CombatState_h__Script_Blaster_4144775676(TEXT("/Script/Blaster"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_CombatState_h__Script_Blaster_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_CombatState_h__Script_Blaster_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
