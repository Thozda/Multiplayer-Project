// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/LobbyGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLobbyGameMode() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ALobbyGameMode();
BLASTER_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALobbyGameMode ***********************************************************
void ALobbyGameMode::StaticRegisterNativesALobbyGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALobbyGameMode;
UClass* ALobbyGameMode::GetPrivateStaticClass()
{
	using TClass = ALobbyGameMode;
	if (!Z_Registration_Info_UClass_ALobbyGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LobbyGameMode"),
			Z_Registration_Info_UClass_ALobbyGameMode.InnerSingleton,
			StaticRegisterNativesALobbyGameMode,
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
	return Z_Registration_Info_UClass_ALobbyGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister()
{
	return ALobbyGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALobbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/LobbyGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/LobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams = {
	&ALobbyGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyGameMode()
{
	if (!Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton, Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton;
}
ALobbyGameMode::ALobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGameMode);
ALobbyGameMode::~ALobbyGameMode() {}
// ********** End Class ALobbyGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_LobbyGameMode_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyGameMode, ALobbyGameMode::StaticClass, TEXT("ALobbyGameMode"), &Z_Registration_Info_UClass_ALobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyGameMode), 4159738441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_LobbyGameMode_h__Script_Blaster_3147862964(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_LobbyGameMode_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameMode_LobbyGameMode_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
