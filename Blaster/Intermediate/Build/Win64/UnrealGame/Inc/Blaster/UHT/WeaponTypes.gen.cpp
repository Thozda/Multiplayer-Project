// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/WeaponTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponTypes() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_EWeaponType();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWeaponType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Blaster_EWeaponType, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> BLASTER_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_Blaster_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWT_AssaultRifle.DisplayName", "Assault Rifle" },
		{ "EWT_AssaultRifle.Name", "EWeaponType::EWT_AssaultRifle" },
		{ "EWT_GrenadeLauncher.DisplayName", "Grenade Launcher" },
		{ "EWT_GrenadeLauncher.Name", "EWeaponType::EWT_GrenadeLauncher" },
		{ "EWT_MAX.DisplayName", "MAX" },
		{ "EWT_MAX.Name", "EWeaponType::EWT_MAX" },
		{ "EWT_Pistol.DisplayName", "Pistol" },
		{ "EWT_Pistol.Name", "EWeaponType::EWT_Pistol" },
		{ "EWT_RocketLauncher.DisplayName", "Rocket Launcher" },
		{ "EWT_RocketLauncher.Name", "EWeaponType::EWT_RocketLauncher" },
		{ "EWT_Shotgun.DisplayName", "Shotgun" },
		{ "EWT_Shotgun.Name", "EWeaponType::EWT_Shotgun" },
		{ "EWT_SniperRifle.DisplayName", "Sniper Rifle" },
		{ "EWT_SniperRifle.Name", "EWeaponType::EWT_SniperRifle" },
		{ "EWT_SubmachineGun.DisplayName", "Submachine Gun" },
		{ "EWT_SubmachineGun.Name", "EWeaponType::EWT_SubmachineGun" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::EWT_AssaultRifle", (int64)EWeaponType::EWT_AssaultRifle },
		{ "EWeaponType::EWT_RocketLauncher", (int64)EWeaponType::EWT_RocketLauncher },
		{ "EWeaponType::EWT_Pistol", (int64)EWeaponType::EWT_Pistol },
		{ "EWeaponType::EWT_SubmachineGun", (int64)EWeaponType::EWT_SubmachineGun },
		{ "EWeaponType::EWT_Shotgun", (int64)EWeaponType::EWT_Shotgun },
		{ "EWeaponType::EWT_SniperRifle", (int64)EWeaponType::EWT_SniperRifle },
		{ "EWeaponType::EWT_GrenadeLauncher", (int64)EWeaponType::EWT_GrenadeLauncher },
		{ "EWeaponType::EWT_MAX", (int64)EWeaponType::EWT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Blaster_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_Blaster_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Blaster_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Blaster_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_Blaster_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponTypes_h__Script_Blaster_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2438016219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponTypes_h__Script_Blaster_2200815046(TEXT("/Script/Blaster"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponTypes_h__Script_Blaster_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponTypes_h__Script_Blaster_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
