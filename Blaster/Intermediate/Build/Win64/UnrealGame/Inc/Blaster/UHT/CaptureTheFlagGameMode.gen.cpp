// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/CaptureTheFlagGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureTheFlagGameMode() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ACaptureTheFlagGameMode();
BLASTER_API UClass* Z_Construct_UClass_ACaptureTheFlagGameMode_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ATeamsGameMode();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureTheFlagGameMode **************************************************
void ACaptureTheFlagGameMode::StaticRegisterNativesACaptureTheFlagGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureTheFlagGameMode;
UClass* ACaptureTheFlagGameMode::GetPrivateStaticClass()
{
	using TClass = ACaptureTheFlagGameMode;
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureTheFlagGameMode"),
			Z_Registration_Info_UClass_ACaptureTheFlagGameMode.InnerSingleton,
			StaticRegisterNativesACaptureTheFlagGameMode,
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
	return Z_Registration_Info_UClass_ACaptureTheFlagGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureTheFlagGameMode_NoRegister()
{
	return ACaptureTheFlagGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureTheFlagGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/CaptureTheFlagGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/CaptureTheFlagGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureTheFlagGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATeamsGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::ClassParams = {
	&ACaptureTheFlagGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureTheFlagGameMode()
{
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton, Z_Construct_UClass_ACaptureTheFlagGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagGameMode.OuterSingleton;
}
ACaptureTheFlagGameMode::ACaptureTheFlagGameMode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureTheFlagGameMode);
ACaptureTheFlagGameMode::~ACaptureTheFlagGameMode() {}
// ********** End Class ACaptureTheFlagGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_CaptureTheFlagGameMode_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureTheFlagGameMode, ACaptureTheFlagGameMode::StaticClass, TEXT("ACaptureTheFlagGameMode"), &Z_Registration_Info_UClass_ACaptureTheFlagGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureTheFlagGameMode), 858679487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_CaptureTheFlagGameMode_h__Script_Blaster_1205606313(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_CaptureTheFlagGameMode_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_CaptureTheFlagGameMode_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
