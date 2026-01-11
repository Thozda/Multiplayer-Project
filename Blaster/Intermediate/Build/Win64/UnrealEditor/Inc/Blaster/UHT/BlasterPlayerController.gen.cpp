// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerController/BlasterPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterPlayerController() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABlasterPlayerController Function ClientJoinMidGame **********************
struct BlasterPlayerController_eventClientJoinMidGame_Parms
{
	FName StateOfMatch;
	float Warmup;
	float Match;
	float Cooldown;
	float Stating;
};
static FName NAME_ABlasterPlayerController_ClientJoinMidGame = FName(TEXT("ClientJoinMidGame"));
void ABlasterPlayerController::ClientJoinMidGame(FName StateOfMatch, float Warmup, float Match, float Cooldown, float Stating)
{
	BlasterPlayerController_eventClientJoinMidGame_Parms Parms;
	Parms.StateOfMatch=StateOfMatch;
	Parms.Warmup=Warmup;
	Parms.Match=Match;
	Parms.Cooldown=Cooldown;
	Parms.Stating=Stating;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_ClientJoinMidGame);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Match;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch = { "StateOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, StateOfMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup = { "Warmup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Warmup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Match), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Cooldown), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Stating = { "Stating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Stating), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Stating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ClientJoinMidGame", Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers), sizeof(BlasterPlayerController_eventClientJoinMidGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BlasterPlayerController_eventClientJoinMidGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execClientJoinMidGame)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Warmup);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Match);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Stating);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientJoinMidGame_Implementation(Z_Param_StateOfMatch,Z_Param_Warmup,Z_Param_Match,Z_Param_Cooldown,Z_Param_Stating);
	P_NATIVE_END;
}
// ********** End Class ABlasterPlayerController Function ClientJoinMidGame ************************

// ********** Begin Class ABlasterPlayerController Function ClientReportServerTime *****************
struct BlasterPlayerController_eventClientReportServerTime_Parms
{
	float TimeOfClientRequest;
	float TimeServerRecievedClientRequest;
};
static FName NAME_ABlasterPlayerController_ClientReportServerTime = FName(TEXT("ClientReportServerTime"));
void ABlasterPlayerController::ClientReportServerTime(float TimeOfClientRequest, float TimeServerRecievedClientRequest)
{
	BlasterPlayerController_eventClientReportServerTime_Parms Parms;
	Parms.TimeOfClientRequest=TimeOfClientRequest;
	Parms.TimeServerRecievedClientRequest=TimeServerRecievedClientRequest;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_ClientReportServerTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reports the current server time to the client in response to ServerRequestServerTime\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reports the current server time to the client in response to ServerRequestServerTime" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeServerRecievedClientRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientReportServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerRecievedClientRequest = { "TimeServerRecievedClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventClientReportServerTime_Parms, TimeServerRecievedClientRequest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerRecievedClientRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ClientReportServerTime", Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers), sizeof(BlasterPlayerController_eventClientReportServerTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BlasterPlayerController_eventClientReportServerTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execClientReportServerTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeServerRecievedClientRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReportServerTime_Implementation(Z_Param_TimeOfClientRequest,Z_Param_TimeServerRecievedClientRequest);
	P_NATIVE_END;
}
// ********** End Class ABlasterPlayerController Function ClientReportServerTime *******************

// ********** Begin Class ABlasterPlayerController Function OnRep_MatchState ***********************
struct Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "OnRep_MatchState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execOnRep_MatchState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MatchState();
	P_NATIVE_END;
}
// ********** End Class ABlasterPlayerController Function OnRep_MatchState *************************

// ********** Begin Class ABlasterPlayerController Function ServerCheckMatchState ******************
static FName NAME_ABlasterPlayerController_ServerCheckMatchState = FName(TEXT("ServerCheckMatchState"));
void ABlasterPlayerController::ServerCheckMatchState()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_ServerCheckMatchState);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//MatchState\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MatchState" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ServerCheckMatchState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execServerCheckMatchState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCheckMatchState_Implementation();
	P_NATIVE_END;
}
// ********** End Class ABlasterPlayerController Function ServerCheckMatchState ********************

// ********** Begin Class ABlasterPlayerController Function ServerRequestServerTime ****************
struct BlasterPlayerController_eventServerRequestServerTime_Parms
{
	float TimeOfClientRequest;
};
static FName NAME_ABlasterPlayerController_ServerRequestServerTime = FName(TEXT("ServerRequestServerTime"));
void ABlasterPlayerController::ServerRequestServerTime(float TimeOfClientRequest)
{
	BlasterPlayerController_eventServerRequestServerTime_Parms Parms;
	Parms.TimeOfClientRequest=TimeOfClientRequest;
	UFunction* Func = FindFunctionChecked(NAME_ABlasterPlayerController_ServerRequestServerTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Sync Time between Client and Server\n//\n//Requests current server time passing in clients time when the request was sent\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sync Time between Client and Server\n\nRequests current server time passing in clients time when the request was sent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterPlayerController_eventServerRequestServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ServerRequestServerTime", Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::PropPointers), sizeof(BlasterPlayerController_eventServerRequestServerTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BlasterPlayerController_eventServerRequestServerTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerController::execServerRequestServerTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestServerTime_Implementation(Z_Param_TimeOfClientRequest);
	P_NATIVE_END;
}
// ********** End Class ABlasterPlayerController Function ServerRequestServerTime ******************

// ********** Begin Class ABlasterPlayerController *************************************************
void ABlasterPlayerController::StaticRegisterNativesABlasterPlayerController()
{
	UClass* Class = ABlasterPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientJoinMidGame", &ABlasterPlayerController::execClientJoinMidGame },
		{ "ClientReportServerTime", &ABlasterPlayerController::execClientReportServerTime },
		{ "OnRep_MatchState", &ABlasterPlayerController::execOnRep_MatchState },
		{ "ServerCheckMatchState", &ABlasterPlayerController::execServerCheckMatchState },
		{ "ServerRequestServerTime", &ABlasterPlayerController::execServerRequestServerTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlasterPlayerController;
UClass* ABlasterPlayerController::GetPrivateStaticClass()
{
	using TClass = ABlasterPlayerController;
	if (!Z_Registration_Info_UClass_ABlasterPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterPlayerController"),
			Z_Registration_Info_UClass_ABlasterPlayerController.InnerSingleton,
			StaticRegisterNativesABlasterPlayerController,
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
	return Z_Registration_Info_UClass_ABlasterPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister()
{
	return ABlasterPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlasterPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BlasterPlayerController.h" },
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncFrequency_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSyncFrequency;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterGameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame, "ClientJoinMidGame" }, // 1111940327
		{ &Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime, "ClientReportServerTime" }, // 324595013
		{ &Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState, "OnRep_MatchState" }, // 2911612603
		{ &Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState, "ServerCheckMatchState" }, // 572383824
		{ &Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime, "ServerRequestServerTime" }, // 1117671654
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency = { "TimeSyncFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, TimeSyncFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSyncFrequency_MetaData), NewProp_TimeSyncFrequency_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, MatchState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchState_MetaData), NewProp_MatchState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD = { "BlasterHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, BlasterHUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterHUD_MetaData), NewProp_BlasterHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOverlay_MetaData), NewProp_CharacterOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode = { "BlasterGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, BlasterGameMode), Z_Construct_UClass_ABlasterGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterGameMode_MetaData), NewProp_BlasterGameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams = {
	&ABlasterPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterPlayerController()
{
	if (!Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton, Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ABlasterPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_MatchState(TEXT("MatchState"));
	const bool bIsValid = true
		&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterPlayerController"));
}
#endif
ABlasterPlayerController::ABlasterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerController);
ABlasterPlayerController::~ABlasterPlayerController() {}
// ********** End Class ABlasterPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerController, ABlasterPlayerController::StaticClass, TEXT("ABlasterPlayerController"), &Z_Registration_Info_UClass_ABlasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerController), 3643260173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_3450286427(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
