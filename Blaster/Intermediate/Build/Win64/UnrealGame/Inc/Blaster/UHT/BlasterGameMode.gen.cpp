// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/BlasterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterGameMode() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode();
BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABlasterGameMode *********************************************************
void ABlasterGameMode::StaticRegisterNativesABlasterGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlasterGameMode;
UClass* ABlasterGameMode::GetPrivateStaticClass()
{
	using TClass = ABlasterGameMode;
	if (!Z_Registration_Info_UClass_ABlasterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterGameMode"),
			Z_Registration_Info_UClass_ABlasterGameMode.InnerSingleton,
			StaticRegisterNativesABlasterGameMode,
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
	return Z_Registration_Info_UClass_ABlasterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister()
{
	return ABlasterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/BlasterGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/BlasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[] = {
		{ "Category", "BlasterGameMode" },
		{ "ModuleRelativePath", "Public/GameMode/BlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[] = {
		{ "Category", "BlasterGameMode" },
		{ "ModuleRelativePath", "Public/GameMode/BlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[] = {
		{ "Category", "BlasterGameMode" },
		{ "ModuleRelativePath", "Public/GameMode/BlasterGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameMode, WarmupTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmupTime_MetaData), NewProp_WarmupTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameMode, MatchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchTime_MetaData), NewProp_MatchTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameMode, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTime_MetaData), NewProp_CooldownTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_WarmupTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_MatchTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameMode_Statics::NewProp_CooldownTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams = {
	&ABlasterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterGameMode()
{
	if (!Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton, Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameMode);
ABlasterGameMode::~ABlasterGameMode() {}
// ********** End Class ABlasterGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameMode, ABlasterGameMode::StaticClass, TEXT("ABlasterGameMode"), &Z_Registration_Info_UClass_ABlasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameMode), 1140406448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h__Script_Blaster_3539314844(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
