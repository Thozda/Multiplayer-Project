// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/CombatComponent.h"
#include "Engine/NetSerialization.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UCombatComponent();
BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ECombatState();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatComponent Function FinishReloading ********************************
struct Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishReloading", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_FinishReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execFinishReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishReloading();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function FinishReloading **********************************

// ********** Begin Class UCombatComponent Function LaunchGrenade **********************************
struct Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "LaunchGrenade", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_LaunchGrenade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_LaunchGrenade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execLaunchGrenade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchGrenade();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function LaunchGrenade ************************************

// ********** Begin Class UCombatComponent Function MulticastFire **********************************
struct CombatComponent_eventMulticastFire_Parms
{
	FVector_NetQuantize TraceHitTarget;
};
static FName NAME_UCombatComponent_MulticastFire = FName(TEXT("MulticastFire"));
void UCombatComponent::MulticastFire(FVector_NetQuantize const& TraceHitTarget)
{
	CombatComponent_eventMulticastFire_Parms Parms;
	Parms.TraceHitTarget=TraceHitTarget;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_MulticastFire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventMulticastFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitTarget_MetaData), NewProp_TraceHitTarget_MetaData) }; // 1339770568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "MulticastFire", Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers), sizeof(CombatComponent_eventMulticastFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatComponent_eventMulticastFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_MulticastFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execMulticastFire)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastFire_Implementation(Z_Param_TraceHitTarget);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function MulticastFire ************************************

// ********** Begin Class UCombatComponent Function OnRep_CarriedAmmo ******************************
struct Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CarriedAmmo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_CarriedAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CarriedAmmo();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function OnRep_CarriedAmmo ********************************

// ********** Begin Class UCombatComponent Function OnRep_CombatState ******************************
struct Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Combat State\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat State" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CombatState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CombatState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_CombatState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CombatState();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function OnRep_CombatState ********************************

// ********** Begin Class UCombatComponent Function OnRep_EquippedWeapon ***************************
struct Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_EquippedWeapon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_EquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EquippedWeapon();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function OnRep_EquippedWeapon *****************************

// ********** Begin Class UCombatComponent Function OnRep_Grenades *********************************
struct Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_Grenades", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_Grenades()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_Grenades_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execOnRep_Grenades)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Grenades();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function OnRep_Grenades ***********************************

// ********** Begin Class UCombatComponent Function Server_LaunchGrenade ***************************
struct CombatComponent_eventServer_LaunchGrenade_Parms
{
	FVector_NetQuantize Target;
};
static FName NAME_UCombatComponent_Server_LaunchGrenade = FName(TEXT("Server_LaunchGrenade"));
void UCombatComponent::Server_LaunchGrenade(FVector_NetQuantize const& Target)
{
	CombatComponent_eventServer_LaunchGrenade_Parms Parms;
	Parms.Target=Target;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_LaunchGrenade);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServer_LaunchGrenade_Parms, Target), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1339770568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_LaunchGrenade", Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::PropPointers), sizeof(CombatComponent_eventServer_LaunchGrenade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatComponent_eventServer_LaunchGrenade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_LaunchGrenade)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_LaunchGrenade_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function Server_LaunchGrenade *****************************

// ********** Begin Class UCombatComponent Function Server_ThrowGrenade ****************************
static FName NAME_UCombatComponent_Server_ThrowGrenade = FName(TEXT("Server_ThrowGrenade"));
void UCombatComponent::Server_ThrowGrenade()
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_Server_ThrowGrenade);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "Server_ThrowGrenade", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServer_ThrowGrenade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ThrowGrenade_Implementation();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function Server_ThrowGrenade ******************************

// ********** Begin Class UCombatComponent Function ServerFire *************************************
struct CombatComponent_eventServerFire_Parms
{
	FVector_NetQuantize TraceHitTarget;
};
static FName NAME_UCombatComponent_ServerFire = FName(TEXT("ServerFire"));
void UCombatComponent::ServerFire(FVector_NetQuantize const& TraceHitTarget)
{
	CombatComponent_eventServerFire_Parms Parms;
	Parms.TraceHitTarget=TraceHitTarget;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_ServerFire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_ServerFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServerFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitTarget_MetaData), NewProp_TraceHitTarget_MetaData) }; // 1339770568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerFire", Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers), sizeof(CombatComponent_eventServerFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatComponent_eventServerFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_ServerFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServerFire)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerFire_Implementation(Z_Param_TraceHitTarget);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ServerFire ***************************************

// ********** Begin Class UCombatComponent Function ServerHitTarget ********************************
struct CombatComponent_eventServerHitTarget_Parms
{
	FVector_NetQuantize Target;
};
static FName NAME_UCombatComponent_ServerHitTarget = FName(TEXT("ServerHitTarget"));
void UCombatComponent::ServerHitTarget(FVector_NetQuantize const& Target)
{
	CombatComponent_eventServerHitTarget_Parms Parms;
	Parms.Target=Target;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_ServerHitTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventServerHitTarget_Parms, Target), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1339770568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerHitTarget", Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::PropPointers), sizeof(CombatComponent_eventServerHitTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatComponent_eventServerHitTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_ServerHitTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerHitTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServerHitTarget)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerHitTarget_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ServerHitTarget **********************************

// ********** Begin Class UCombatComponent Function ServerReload ***********************************
static FName NAME_UCombatComponent_ServerReload = FName(TEXT("ServerReload"));
void UCombatComponent::ServerReload()
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_ServerReload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCombatComponent_ServerReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_ServerReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload_Implementation();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ServerReload *************************************

// ********** Begin Class UCombatComponent Function ServerSetAiming ********************************
struct CombatComponent_eventServerSetAiming_Parms
{
	bool bIsAiming;
};
static FName NAME_UCombatComponent_ServerSetAiming = FName(TEXT("ServerSetAiming"));
void UCombatComponent::ServerSetAiming(bool bIsAiming)
{
	CombatComponent_eventServerSetAiming_Parms Parms;
	Parms.bIsAiming=bIsAiming ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UCombatComponent_ServerSetAiming);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((CombatComponent_eventServerSetAiming_Parms*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponent_eventServerSetAiming_Parms), &Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerSetAiming", Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers), sizeof(CombatComponent_eventServerSetAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatComponent_eventServerSetAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_ServerSetAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execServerSetAiming)
{
	P_GET_UBOOL(Z_Param_bIsAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetAiming_Implementation(Z_Param_bIsAiming);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ServerSetAiming **********************************

// ********** Begin Class UCombatComponent Function ShotgunShellReload *****************************
struct Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ShotgunShellReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_ShotgunShellReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execShotgunShellReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShotgunShellReload();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ShotgunShellReload *******************************

// ********** Begin Class UCombatComponent Function ThrowGrenadeFinished ***************************
struct Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ThrowGrenadeFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execThrowGrenadeFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowGrenadeFinished();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ThrowGrenadeFinished *****************************

// ********** Begin Class UCombatComponent *********************************************************
void UCombatComponent::StaticRegisterNativesUCombatComponent()
{
	UClass* Class = UCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishReloading", &UCombatComponent::execFinishReloading },
		{ "LaunchGrenade", &UCombatComponent::execLaunchGrenade },
		{ "MulticastFire", &UCombatComponent::execMulticastFire },
		{ "OnRep_CarriedAmmo", &UCombatComponent::execOnRep_CarriedAmmo },
		{ "OnRep_CombatState", &UCombatComponent::execOnRep_CombatState },
		{ "OnRep_EquippedWeapon", &UCombatComponent::execOnRep_EquippedWeapon },
		{ "OnRep_Grenades", &UCombatComponent::execOnRep_Grenades },
		{ "Server_LaunchGrenade", &UCombatComponent::execServer_LaunchGrenade },
		{ "Server_ThrowGrenade", &UCombatComponent::execServer_ThrowGrenade },
		{ "ServerFire", &UCombatComponent::execServerFire },
		{ "ServerHitTarget", &UCombatComponent::execServerHitTarget },
		{ "ServerReload", &UCombatComponent::execServerReload },
		{ "ServerSetAiming", &UCombatComponent::execServerSetAiming },
		{ "ShotgunShellReload", &UCombatComponent::execShotgunShellReload },
		{ "ThrowGrenadeFinished", &UCombatComponent::execThrowGrenadeFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatComponent;
UClass* UCombatComponent::GetPrivateStaticClass()
{
	using TClass = UCombatComponent;
	if (!Z_Registration_Info_UClass_UCombatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatComponent"),
			Z_Registration_Info_UClass_UCombatComponent.InnerSingleton,
			StaticRegisterNativesUCombatComponent,
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
	return Z_Registration_Info_UClass_UCombatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
{
	return UCombatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeClass_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Carried ammo for currently equipped weapon type\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Carried ammo for currently equipped weapon type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingARAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingRocketAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingPistolAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingSMGAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingShotgunAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingSniperAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingGrenadeLauncherAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grenades_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrenades_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_bAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimWalkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CarriedAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingARAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingRocketAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingPistolAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingSMGAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingShotgunAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingSniperAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingGrenadeLauncherAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Grenades;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGrenades;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_FinishReloading, "FinishReloading" }, // 3010970278
		{ &Z_Construct_UFunction_UCombatComponent_LaunchGrenade, "LaunchGrenade" }, // 608461866
		{ &Z_Construct_UFunction_UCombatComponent_MulticastFire, "MulticastFire" }, // 3527086431
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo, "OnRep_CarriedAmmo" }, // 1637119899
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CombatState, "OnRep_CombatState" }, // 311151153
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 548863243
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_Grenades, "OnRep_Grenades" }, // 1841787285
		{ &Z_Construct_UFunction_UCombatComponent_Server_LaunchGrenade, "Server_LaunchGrenade" }, // 2444453115
		{ &Z_Construct_UFunction_UCombatComponent_Server_ThrowGrenade, "Server_ThrowGrenade" }, // 3067104826
		{ &Z_Construct_UFunction_UCombatComponent_ServerFire, "ServerFire" }, // 2370916949
		{ &Z_Construct_UFunction_UCombatComponent_ServerHitTarget, "ServerHitTarget" }, // 3401653077
		{ &Z_Construct_UFunction_UCombatComponent_ServerReload, "ServerReload" }, // 1748928667
		{ &Z_Construct_UFunction_UCombatComponent_ServerSetAiming, "ServerSetAiming" }, // 3080027491
		{ &Z_Construct_UFunction_UCombatComponent_ShotgunShellReload, "ShotgunShellReload" }, // 3231446065
		{ &Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFinished, "ThrowGrenadeFinished" }, // 2600305182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, HitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTarget_MetaData), NewProp_HitTarget_MetaData) }; // 1339770568
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass = { "GrenadeClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, GrenadeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeClass_MetaData), NewProp_GrenadeClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState = { "CombatState", "OnRep_CombatState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, CombatState), Z_Construct_UEnum_Blaster_ECombatState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatState_MetaData), NewProp_CombatState_MetaData) }; // 1724859208
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit(void* Obj)
{
	((UCombatComponent*)Obj)->bAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAiming_MetaData), NewProp_bAiming_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed = { "BaseWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, BaseWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWalkSpeed_MetaData), NewProp_BaseWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed = { "AimWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, AimWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimWalkSpeed_MetaData), NewProp_AimWalkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, HUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_MetaData), NewProp_HUD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ZoomedFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomedFOV_MetaData), NewProp_ZoomedFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ZoomInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData), NewProp_ZoomInterpSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo = { "CarriedAmmo", "OnRep_CarriedAmmo", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, CarriedAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedAmmo_MetaData), NewProp_CarriedAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo = { "StartingARAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingARAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingARAmmo_MetaData), NewProp_StartingARAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo = { "StartingRocketAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingRocketAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingRocketAmmo_MetaData), NewProp_StartingRocketAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo = { "StartingPistolAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingPistolAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingPistolAmmo_MetaData), NewProp_StartingPistolAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo = { "StartingSMGAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingSMGAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingSMGAmmo_MetaData), NewProp_StartingSMGAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo = { "StartingShotgunAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingShotgunAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingShotgunAmmo_MetaData), NewProp_StartingShotgunAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo = { "StartingSniperAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingSniperAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingSniperAmmo_MetaData), NewProp_StartingSniperAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo = { "StartingGrenadeLauncherAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, StartingGrenadeLauncherAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingGrenadeLauncherAmmo_MetaData), NewProp_StartingGrenadeLauncherAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Grenades = { "Grenades", "OnRep_Grenades", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, Grenades), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grenades_MetaData), NewProp_Grenades_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenades = { "MaxGrenades", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, MaxGrenades), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGrenades_MetaData), NewProp_MaxGrenades_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HitTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_GrenadeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Grenades,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MaxGrenades,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
	&UCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatComponent()
{
	if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_HitTarget(TEXT("HitTarget"));
	static FName Name_CombatState(TEXT("CombatState"));
	static FName Name_bAiming(TEXT("bAiming"));
	static FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
	static FName Name_CarriedAmmo(TEXT("CarriedAmmo"));
	static FName Name_Grenades(TEXT("Grenades"));
	const bool bIsValid = true
		&& Name_HitTarget == ClassReps[(int32)ENetFields_Private::HitTarget].Property->GetFName()
		&& Name_CombatState == ClassReps[(int32)ENetFields_Private::CombatState].Property->GetFName()
		&& Name_bAiming == ClassReps[(int32)ENetFields_Private::bAiming].Property->GetFName()
		&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
		&& Name_CarriedAmmo == ClassReps[(int32)ENetFields_Private::CarriedAmmo].Property->GetFName()
		&& Name_Grenades == ClassReps[(int32)ENetFields_Private::Grenades].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCombatComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
UCombatComponent::~UCombatComponent() {}
// ********** End Class UCombatComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 1223730999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h__Script_Blaster_2256862199(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
