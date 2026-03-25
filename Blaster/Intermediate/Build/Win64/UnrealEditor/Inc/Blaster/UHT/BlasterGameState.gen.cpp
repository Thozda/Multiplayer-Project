// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameState/BlasterGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterGameState() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterGameState();
BLASTER_API UClass* Z_Construct_UClass_ABlasterGameState_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABlasterGameState Function OnRep_BlueTeamScore ***************************
struct Z_Construct_UFunction_ABlasterGameState_OnRep_BlueTeamScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterGameState_OnRep_BlueTeamScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterGameState, nullptr, "OnRep_BlueTeamScore", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterGameState_OnRep_BlueTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterGameState_OnRep_BlueTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterGameState::execOnRep_BlueTeamScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlueTeamScore();
	P_NATIVE_END;
}
// ********** End Class ABlasterGameState Function OnRep_BlueTeamScore *****************************

// ********** Begin Class ABlasterGameState Function OnRep_PurpleTeamScore *************************
struct Z_Construct_UFunction_ABlasterGameState_OnRep_PurpleTeamScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterGameState_OnRep_PurpleTeamScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterGameState, nullptr, "OnRep_PurpleTeamScore", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterGameState_OnRep_PurpleTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterGameState_OnRep_PurpleTeamScore_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterGameState_OnRep_PurpleTeamScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterGameState_OnRep_PurpleTeamScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterGameState::execOnRep_PurpleTeamScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PurpleTeamScore();
	P_NATIVE_END;
}
// ********** End Class ABlasterGameState Function OnRep_PurpleTeamScore ***************************

// ********** Begin Class ABlasterGameState ********************************************************
void ABlasterGameState::StaticRegisterNativesABlasterGameState()
{
	UClass* Class = ABlasterGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_BlueTeamScore", &ABlasterGameState::execOnRep_BlueTeamScore },
		{ "OnRep_PurpleTeamScore", &ABlasterGameState::execOnRep_PurpleTeamScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlasterGameState;
UClass* ABlasterGameState::GetPrivateStaticClass()
{
	using TClass = ABlasterGameState;
	if (!Z_Registration_Info_UClass_ABlasterGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterGameState"),
			Z_Registration_Info_UClass_ABlasterGameState.InnerSingleton,
			StaticRegisterNativesABlasterGameState,
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
	return Z_Registration_Info_UClass_ABlasterGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlasterGameState_NoRegister()
{
	return ABlasterGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlasterGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/BlasterGameState.h" },
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopScoringPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurpleTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurpleTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/BlasterGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopScoringPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TopScoringPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PurpleTeam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PurpleTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueTeam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueTeam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PurpleTeamScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueTeamScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterGameState_OnRep_BlueTeamScore, "OnRep_BlueTeamScore" }, // 2164700977
		{ &Z_Construct_UFunction_ABlasterGameState_OnRep_PurpleTeamScore, "OnRep_PurpleTeamScore" }, // 1872815993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers_Inner = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, TopScoringPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopScoringPlayers_MetaData), NewProp_TopScoringPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_PurpleTeam_Inner = { "PurpleTeam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_PurpleTeam = { "PurpleTeam", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, PurpleTeam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurpleTeam_MetaData), NewProp_PurpleTeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeam_Inner = { "BlueTeam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlasterPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeam = { "BlueTeam", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, BlueTeam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueTeam_MetaData), NewProp_BlueTeam_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_PurpleTeamScore = { "PurpleTeamScore", "OnRep_PurpleTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, PurpleTeamScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurpleTeamScore_MetaData), NewProp_PurpleTeamScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeamScore = { "BlueTeamScore", "OnRep_BlueTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterGameState, BlueTeamScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueTeamScore_MetaData), NewProp_BlueTeamScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_PurpleTeam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_PurpleTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_PurpleTeamScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_BlueTeamScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameState_Statics::ClassParams = {
	&ABlasterGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterGameState()
{
	if (!Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton, Z_Construct_UClass_ABlasterGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ABlasterGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TopScoringPlayers(TEXT("TopScoringPlayers"));
	static FName Name_PurpleTeamScore(TEXT("PurpleTeamScore"));
	static FName Name_BlueTeamScore(TEXT("BlueTeamScore"));
	const bool bIsValid = true
		&& Name_TopScoringPlayers == ClassReps[(int32)ENetFields_Private::TopScoringPlayers].Property->GetFName()
		&& Name_PurpleTeamScore == ClassReps[(int32)ENetFields_Private::PurpleTeamScore].Property->GetFName()
		&& Name_BlueTeamScore == ClassReps[(int32)ENetFields_Private::BlueTeamScore].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterGameState"));
}
#endif
ABlasterGameState::ABlasterGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameState);
ABlasterGameState::~ABlasterGameState() {}
// ********** End Class ABlasterGameState **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameState, ABlasterGameState::StaticClass, TEXT("ABlasterGameState"), &Z_Registration_Info_UClass_ABlasterGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameState), 3606383962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h__Script_Blaster_1034489641(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
