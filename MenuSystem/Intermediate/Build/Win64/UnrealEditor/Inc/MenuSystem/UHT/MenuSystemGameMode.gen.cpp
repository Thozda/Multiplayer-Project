// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MenuSystemGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenuSystemGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemGameMode();
MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MenuSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMenuSystemGameMode ******************************************************
void AMenuSystemGameMode::StaticRegisterNativesAMenuSystemGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMenuSystemGameMode;
UClass* AMenuSystemGameMode::GetPrivateStaticClass()
{
	using TClass = AMenuSystemGameMode;
	if (!Z_Registration_Info_UClass_AMenuSystemGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuSystemGameMode"),
			Z_Registration_Info_UClass_AMenuSystemGameMode.InnerSingleton,
			StaticRegisterNativesAMenuSystemGameMode,
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
	return Z_Registration_Info_UClass_AMenuSystemGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMenuSystemGameMode_NoRegister()
{
	return AMenuSystemGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMenuSystemGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MenuSystemGameMode.h" },
		{ "ModuleRelativePath", "MenuSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuSystemGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMenuSystemGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MenuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuSystemGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuSystemGameMode_Statics::ClassParams = {
	&AMenuSystemGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuSystemGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMenuSystemGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMenuSystemGameMode()
{
	if (!Z_Registration_Info_UClass_AMenuSystemGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuSystemGameMode.OuterSingleton, Z_Construct_UClass_AMenuSystemGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMenuSystemGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuSystemGameMode);
AMenuSystemGameMode::~AMenuSystemGameMode() {}
// ********** End Class AMenuSystemGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h__Script_MenuSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMenuSystemGameMode, AMenuSystemGameMode::StaticClass, TEXT("AMenuSystemGameMode"), &Z_Registration_Info_UClass_AMenuSystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuSystemGameMode), 3402522876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h__Script_MenuSystem_1844351403(TEXT("/Script/MenuSystem"),
	Z_CompiledInDeferFile_FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h__Script_MenuSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h__Script_MenuSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
