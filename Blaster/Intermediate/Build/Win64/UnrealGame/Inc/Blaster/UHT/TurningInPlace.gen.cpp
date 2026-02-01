// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterTypes/TurningInPlace.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurningInPlace() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ETurningInPlace();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETurningInPlace ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurningInPlace;
static UEnum* ETurningInPlace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Blaster_ETurningInPlace, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("ETurningInPlace"));
	}
	return Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton;
}
template<> BLASTER_API UEnum* StaticEnum<ETurningInPlace>()
{
	return ETurningInPlace_StaticEnum();
}
struct Z_Construct_UEnum_Blaster_ETurningInPlace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ETIP_Left.DisplayName", "Turning Left" },
		{ "ETIP_Left.Name", "ETurningInPlace::ETIP_Left" },
		{ "ETIP_Max.DisplayName", "DefaultMAX" },
		{ "ETIP_Max.Name", "ETurningInPlace::ETIP_Max" },
		{ "ETIP_NotTurning.DisplayName", "Not Turning" },
		{ "ETIP_NotTurning.Name", "ETurningInPlace::ETIP_NotTurning" },
		{ "ETIP_Right.DisplayName", "Turning Right" },
		{ "ETIP_Right.Name", "ETurningInPlace::ETIP_Right" },
		{ "ModuleRelativePath", "BlasterTypes/TurningInPlace.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurningInPlace::ETIP_Left", (int64)ETurningInPlace::ETIP_Left },
		{ "ETurningInPlace::ETIP_Right", (int64)ETurningInPlace::ETIP_Right },
		{ "ETurningInPlace::ETIP_NotTurning", (int64)ETurningInPlace::ETIP_NotTurning },
		{ "ETurningInPlace::ETIP_Max", (int64)ETurningInPlace::ETIP_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Blaster_ETurningInPlace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	"ETurningInPlace",
	"ETurningInPlace",
	Z_Construct_UEnum_Blaster_ETurningInPlace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_ETurningInPlace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_ETurningInPlace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Blaster_ETurningInPlace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Blaster_ETurningInPlace()
{
	if (!Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton, Z_Construct_UEnum_Blaster_ETurningInPlace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton;
}
// ********** End Enum ETurningInPlace *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_TurningInPlace_h__Script_Blaster_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETurningInPlace_StaticEnum, TEXT("ETurningInPlace"), &Z_Registration_Info_UEnum_ETurningInPlace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1231018714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_TurningInPlace_h__Script_Blaster_459135575(TEXT("/Script/Blaster"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_TurningInPlace_h__Script_Blaster_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_BlasterTypes_TurningInPlace_h__Script_Blaster_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
