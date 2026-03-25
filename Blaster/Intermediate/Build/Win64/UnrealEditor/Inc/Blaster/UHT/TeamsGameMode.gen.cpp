// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/TeamsGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTeamsGameMode() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode();
BLASTER_API UClass* Z_Construct_UClass_ATeamsGameMode();
BLASTER_API UClass* Z_Construct_UClass_ATeamsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATeamsGameMode ***********************************************************
void ATeamsGameMode::StaticRegisterNativesATeamsGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATeamsGameMode;
UClass* ATeamsGameMode::GetPrivateStaticClass()
{
	using TClass = ATeamsGameMode;
	if (!Z_Registration_Info_UClass_ATeamsGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TeamsGameMode"),
			Z_Registration_Info_UClass_ATeamsGameMode.InnerSingleton,
			StaticRegisterNativesATeamsGameMode,
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
	return Z_Registration_Info_UClass_ATeamsGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATeamsGameMode_NoRegister()
{
	return ATeamsGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATeamsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/TeamsGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/TeamsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATeamsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABlasterGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamsGameMode_Statics::ClassParams = {
	&ATeamsGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeamsGameMode()
{
	if (!Z_Registration_Info_UClass_ATeamsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamsGameMode.OuterSingleton, Z_Construct_UClass_ATeamsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeamsGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamsGameMode);
ATeamsGameMode::~ATeamsGameMode() {}
// ********** End Class ATeamsGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeamsGameMode, ATeamsGameMode::StaticClass, TEXT("ATeamsGameMode"), &Z_Registration_Info_UClass_ATeamsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamsGameMode), 863602193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h__Script_Blaster_973668392(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
