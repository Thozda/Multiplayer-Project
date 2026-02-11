// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/LagCompensationComponent.h"
#include "Engine/NetSerialization.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLagCompensationComponent() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ULagCompensationComponent();
BLASTER_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister();
BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation();
BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FFramePackage();
BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult();
BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FShotgunServerSideRewindResult();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBoxInformation ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBoxInformation;
class UScriptStruct* FBoxInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBoxInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBoxInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxInformation, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("BoxInformation"));
	}
	return Z_Registration_Info_UScriptStruct_FBoxInformation.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBoxInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxInformation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxInformation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxInformation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxInformation, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtent_MetaData), NewProp_BoxExtent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxInformation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	&NewStructOps,
	"BoxInformation",
	Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers),
	sizeof(FBoxInformation),
	alignof(FBoxInformation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation()
{
	if (!Z_Registration_Info_UScriptStruct_FBoxInformation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBoxInformation.InnerSingleton, Z_Construct_UScriptStruct_FBoxInformation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBoxInformation.InnerSingleton;
}
// ********** End ScriptStruct FBoxInformation *****************************************************

// ********** Begin ScriptStruct FFramePackage *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFramePackage;
class UScriptStruct* FFramePackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFramePackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFramePackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFramePackage, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("FramePackage"));
	}
	return Z_Registration_Info_UScriptStruct_FFramePackage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFramePackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoxInfo_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoxInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitBoxInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFramePackage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFramePackage, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBoxInformation, METADATA_PARAMS(0, nullptr) }; // 3527671915
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp = { "HitBoxInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFramePackage, HitBoxInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoxInfo_MetaData), NewProp_HitBoxInfo_MetaData) }; // 3527671915
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFramePackage, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFramePackage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	&NewStructOps,
	"FramePackage",
	Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers),
	sizeof(FFramePackage),
	alignof(FFramePackage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFramePackage()
{
	if (!Z_Registration_Info_UScriptStruct_FFramePackage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFramePackage.InnerSingleton, Z_Construct_UScriptStruct_FFramePackage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFramePackage.InnerSingleton;
}
// ********** End ScriptStruct FFramePackage *******************************************************

// ********** Begin ScriptStruct FServerSideRewindResult *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FServerSideRewindResult;
class UScriptStruct* FServerSideRewindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FServerSideRewindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FServerSideRewindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSideRewindResult, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("ServerSideRewindResult"));
	}
	return Z_Registration_Info_UScriptStruct_FServerSideRewindResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeadShot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHitConfirmed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitConfirmed;
	static void NewProp_bHeadShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeadShot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSideRewindResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_SetBit(void* Obj)
{
	((FServerSideRewindResult*)Obj)->bHitConfirmed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed = { "bHitConfirmed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitConfirmed_MetaData), NewProp_bHitConfirmed_MetaData) };
void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_SetBit(void* Obj)
{
	((FServerSideRewindResult*)Obj)->bHeadShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot = { "bHeadShot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeadShot_MetaData), NewProp_bHeadShot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	&NewStructOps,
	"ServerSideRewindResult",
	Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers),
	sizeof(FServerSideRewindResult),
	alignof(FServerSideRewindResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult()
{
	if (!Z_Registration_Info_UScriptStruct_FServerSideRewindResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FServerSideRewindResult.InnerSingleton, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FServerSideRewindResult.InnerSingleton;
}
// ********** End ScriptStruct FServerSideRewindResult *********************************************

// ********** Begin ScriptStruct FShotgunServerSideRewindResult ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult;
class UScriptStruct* FShotgunServerSideRewindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("ShotgunServerSideRewindResult"));
	}
	return Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadShots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyShots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HeadShots_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadShots_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HeadShots;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyShots_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyShots_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BodyShots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShotgunServerSideRewindResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_ValueProp = { "HeadShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_Key_KeyProp = { "HeadShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots = { "HeadShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotgunServerSideRewindResult, HeadShots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadShots_MetaData), NewProp_HeadShots_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_ValueProp = { "BodyShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_Key_KeyProp = { "BodyShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots = { "BodyShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotgunServerSideRewindResult, BodyShots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyShots_MetaData), NewProp_BodyShots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_HeadShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewProp_BodyShots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	&NewStructOps,
	"ShotgunServerSideRewindResult",
	Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::PropPointers),
	sizeof(FShotgunServerSideRewindResult),
	alignof(FShotgunServerSideRewindResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShotgunServerSideRewindResult()
{
	if (!Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult.InnerSingleton, Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult.InnerSingleton;
}
// ********** End ScriptStruct FShotgunServerSideRewindResult **************************************

// ********** Begin Class ULagCompensationComponent Function ServerScoreRequest ********************
struct LagCompensationComponent_eventServerScoreRequest_Parms
{
	ABlasterCharacter* HitCharacter;
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize HitLocation;
	float HitTime;
	AWeapon* DamageCauser;
};
static FName NAME_ULagCompensationComponent_ServerScoreRequest = FName(TEXT("ServerScoreRequest"));
void ULagCompensationComponent::ServerScoreRequest(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, const float HitTime, AWeapon* DamageCauser)
{
	LagCompensationComponent_eventServerScoreRequest_Parms Parms;
	Parms.HitCharacter=HitCharacter;
	Parms.TraceStart=TraceStart;
	Parms.HitLocation=HitLocation;
	Parms.HitTime=HitTime;
	Parms.DamageCauser=DamageCauser;
	UFunction* Func = FindFunctionChecked(NAME_ULagCompensationComponent_ServerScoreRequest);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitCharacter = { "HitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStart_MetaData), NewProp_TraceStart_MetaData) }; // 1339770568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) }; // 1339770568
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, HitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTime_MetaData), NewProp_HitTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventServerScoreRequest_Parms, DamageCauser), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_HitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ServerScoreRequest", Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::PropPointers), sizeof(LagCompensationComponent_eventServerScoreRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LagCompensationComponent_eventServerScoreRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULagCompensationComponent::execServerScoreRequest)
{
	P_GET_OBJECT(ABlasterCharacter,Z_Param_HitCharacter);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_HitLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
	P_GET_OBJECT(AWeapon,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerScoreRequest_Implementation(Z_Param_HitCharacter,Z_Param_TraceStart,Z_Param_HitLocation,Z_Param_HitTime,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class ULagCompensationComponent Function ServerScoreRequest **********************

// ********** Begin Class ULagCompensationComponent Function ShotgunServerScoreRequest *************
struct LagCompensationComponent_eventShotgunServerScoreRequest_Parms
{
	TArray<ABlasterCharacter*> HitCharacters;
	FVector_NetQuantize TraceStart;
	TArray<FVector_NetQuantize> HitLocations;
	float HitTime;
	AWeapon* DamageCauser;
};
static FName NAME_ULagCompensationComponent_ShotgunServerScoreRequest = FName(TEXT("ShotgunServerScoreRequest"));
void ULagCompensationComponent::ShotgunServerScoreRequest(TArray<ABlasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, const float HitTime, AWeapon* DamageCauser)
{
	LagCompensationComponent_eventShotgunServerScoreRequest_Parms Parms;
	Parms.HitCharacters=HitCharacters;
	Parms.TraceStart=TraceStart;
	Parms.HitLocations=HitLocations;
	Parms.HitTime=HitTime;
	Parms.DamageCauser=DamageCauser;
	UFunction* Func = FindFunctionChecked(NAME_ULagCompensationComponent_ShotgunServerScoreRequest);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitCharacters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitLocations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters_Inner = { "HitCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters = { "HitCharacters", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, HitCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCharacters_MetaData), NewProp_HitCharacters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStart_MetaData), NewProp_TraceStart_MetaData) }; // 1339770568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations_Inner = { "HitLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1339770568
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations = { "HitLocations", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, HitLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocations_MetaData), NewProp_HitLocations_MetaData) }; // 1339770568
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, HitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTime_MetaData), NewProp_HitTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LagCompensationComponent_eventShotgunServerScoreRequest_Parms, DamageCauser), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_HitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULagCompensationComponent, nullptr, "ShotgunServerScoreRequest", Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::PropPointers), sizeof(LagCompensationComponent_eventShotgunServerScoreRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LagCompensationComponent_eventShotgunServerScoreRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULagCompensationComponent::execShotgunServerScoreRequest)
{
	P_GET_TARRAY(ABlasterCharacter*,Z_Param_HitCharacters);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
	P_GET_TARRAY(FVector_NetQuantize,Z_Param_HitLocations);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
	P_GET_OBJECT(AWeapon,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShotgunServerScoreRequest_Implementation(Z_Param_HitCharacters,Z_Param_TraceStart,Z_Param_HitLocations,Z_Param_HitTime,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class ULagCompensationComponent Function ShotgunServerScoreRequest ***************

// ********** Begin Class ULagCompensationComponent ************************************************
void ULagCompensationComponent::StaticRegisterNativesULagCompensationComponent()
{
	UClass* Class = ULagCompensationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ServerScoreRequest", &ULagCompensationComponent::execServerScoreRequest },
		{ "ShotgunServerScoreRequest", &ULagCompensationComponent::execShotgunServerScoreRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULagCompensationComponent;
UClass* ULagCompensationComponent::GetPrivateStaticClass()
{
	using TClass = ULagCompensationComponent;
	if (!Z_Registration_Info_UClass_ULagCompensationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LagCompensationComponent"),
			Z_Registration_Info_UClass_ULagCompensationComponent.InnerSingleton,
			StaticRegisterNativesULagCompensationComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULagCompensationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister()
{
	return ULagCompensationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULagCompensationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/LagCompensationComponent.h" },
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecordTime_MetaData[] = {
		{ "Category", "LagCompensationComponent" },
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LagCompensationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecordTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULagCompensationComponent_ServerScoreRequest, "ServerScoreRequest" }, // 4245695281
		{ &Z_Construct_UFunction_ULagCompensationComponent_ShotgunServerScoreRequest, "ShotgunServerScoreRequest" }, // 2179348739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULagCompensationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime = { "MaxRecordTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULagCompensationComponent, MaxRecordTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRecordTime_MetaData), NewProp_MaxRecordTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULagCompensationComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULagCompensationComponent, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MaxRecordTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULagCompensationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams = {
	&ULagCompensationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULagCompensationComponent()
{
	if (!Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton, Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULagCompensationComponent);
ULagCompensationComponent::~ULagCompensationComponent() {}
// ********** End Class ULagCompensationComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h__Script_Blaster_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoxInformation::StaticStruct, Z_Construct_UScriptStruct_FBoxInformation_Statics::NewStructOps, TEXT("BoxInformation"), &Z_Registration_Info_UScriptStruct_FBoxInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxInformation), 3527671915U) },
		{ FFramePackage::StaticStruct, Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps, TEXT("FramePackage"), &Z_Registration_Info_UScriptStruct_FFramePackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFramePackage), 1208223951U) },
		{ FServerSideRewindResult::StaticStruct, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewStructOps, TEXT("ServerSideRewindResult"), &Z_Registration_Info_UScriptStruct_FServerSideRewindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerSideRewindResult), 433709604U) },
		{ FShotgunServerSideRewindResult::StaticStruct, Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics::NewStructOps, TEXT("ShotgunServerSideRewindResult"), &Z_Registration_Info_UScriptStruct_FShotgunServerSideRewindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShotgunServerSideRewindResult), 3668589299U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULagCompensationComponent, ULagCompensationComponent::StaticClass, TEXT("ULagCompensationComponent"), &Z_Registration_Info_UClass_ULagCompensationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULagCompensationComponent), 926851152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h__Script_Blaster_3057343608(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h__Script_Blaster_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h__Script_Blaster_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h__Script_Blaster_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
