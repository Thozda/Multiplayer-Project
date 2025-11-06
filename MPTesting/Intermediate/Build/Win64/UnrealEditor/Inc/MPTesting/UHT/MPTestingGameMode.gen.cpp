// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPTestingGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMPTestingGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MPTESTING_API UClass* Z_Construct_UClass_AMPTestingGameMode();
MPTESTING_API UClass* Z_Construct_UClass_AMPTestingGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MPTesting();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMPTestingGameMode *******************************************************
void AMPTestingGameMode::StaticRegisterNativesAMPTestingGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMPTestingGameMode;
UClass* AMPTestingGameMode::GetPrivateStaticClass()
{
	using TClass = AMPTestingGameMode;
	if (!Z_Registration_Info_UClass_AMPTestingGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MPTestingGameMode"),
			Z_Registration_Info_UClass_AMPTestingGameMode.InnerSingleton,
			StaticRegisterNativesAMPTestingGameMode,
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
	return Z_Registration_Info_UClass_AMPTestingGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMPTestingGameMode_NoRegister()
{
	return AMPTestingGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMPTestingGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MPTestingGameMode.h" },
		{ "ModuleRelativePath", "MPTestingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPTestingGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMPTestingGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MPTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPTestingGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPTestingGameMode_Statics::ClassParams = {
	&AMPTestingGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPTestingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPTestingGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMPTestingGameMode()
{
	if (!Z_Registration_Info_UClass_AMPTestingGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPTestingGameMode.OuterSingleton, Z_Construct_UClass_AMPTestingGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMPTestingGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMPTestingGameMode);
AMPTestingGameMode::~AMPTestingGameMode() {}
// ********** End Class AMPTestingGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h__Script_MPTesting_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMPTestingGameMode, AMPTestingGameMode::StaticClass, TEXT("AMPTestingGameMode"), &Z_Registration_Info_UClass_AMPTestingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPTestingGameMode), 3937784049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h__Script_MPTesting_2604779332(TEXT("/Script/MPTesting"),
	Z_CompiledInDeferFile_FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h__Script_MPTesting_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h__Script_MPTesting_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
