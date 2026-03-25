// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerStart/TeamPlayerStart.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTeamPlayerStart() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ATeamPlayerStart();
BLASTER_API UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister();
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ETeam();
ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATeamPlayerStart *********************************************************
void ATeamPlayerStart::StaticRegisterNativesATeamPlayerStart()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATeamPlayerStart;
UClass* ATeamPlayerStart::GetPrivateStaticClass()
{
	using TClass = ATeamPlayerStart;
	if (!Z_Registration_Info_UClass_ATeamPlayerStart.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TeamPlayerStart"),
			Z_Registration_Info_UClass_ATeamPlayerStart.InnerSingleton,
			StaticRegisterNativesATeamPlayerStart,
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
	return Z_Registration_Info_UClass_ATeamPlayerStart.InnerSingleton;
}
UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister()
{
	return ATeamPlayerStart::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATeamPlayerStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "PlayerStart/TeamPlayerStart.h" },
		{ "ModuleRelativePath", "Public/PlayerStart/TeamPlayerStart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "TeamPlayerStart" },
		{ "ModuleRelativePath", "Public/PlayerStart/TeamPlayerStart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamPlayerStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamPlayerStart, Team), Z_Construct_UEnum_Blaster_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 3922529676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATeamPlayerStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerStart,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamPlayerStart_Statics::ClassParams = {
	&ATeamPlayerStart::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeamPlayerStart()
{
	if (!Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton, Z_Construct_UClass_ATeamPlayerStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton;
}
ATeamPlayerStart::ATeamPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamPlayerStart);
ATeamPlayerStart::~ATeamPlayerStart() {}
// ********** End Class ATeamPlayerStart ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeamPlayerStart, ATeamPlayerStart::StaticClass, TEXT("ATeamPlayerStart"), &Z_Registration_Info_UClass_ATeamPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamPlayerStart), 1986712547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h__Script_Blaster_966539017(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
