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
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UCombatComponent();
BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

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

// ********** Begin Class UCombatComponent Function OnRep_EquippedWeapon ***************************
struct Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Equip\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equip" },
#endif
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

// ********** Begin Class UCombatComponent *********************************************************
void UCombatComponent::StaticRegisterNativesUCombatComponent()
{
	UClass* Class = UCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastFire", &UCombatComponent::execMulticastFire },
		{ "OnRep_EquippedWeapon", &UCombatComponent::execOnRep_EquippedWeapon },
		{ "ServerFire", &UCombatComponent::execServerFire },
		{ "ServerSetAiming", &UCombatComponent::execServerSetAiming },
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
#endif // WITH_METADATA
	static void NewProp_bAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_MulticastFire, "MulticastFire" }, // 3527086431
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 1942760144
		{ &Z_Construct_UFunction_UCombatComponent_ServerFire, "ServerFire" }, // 2370916949
		{ &Z_Construct_UFunction_UCombatComponent_ServerSetAiming, "ServerSetAiming" }, // 3080027491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit(void* Obj)
{
	((UCombatComponent*)Obj)->bAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAiming_MetaData), NewProp_bAiming_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed = { "BaseWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, BaseWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWalkSpeed_MetaData), NewProp_BaseWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed = { "AimWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, AimWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimWalkSpeed_MetaData), NewProp_AimWalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed,
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
	static FName Name_bAiming(TEXT("bAiming"));
	static FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
	const bool bIsValid = true
		&& Name_bAiming == ClassReps[(int32)ENetFields_Private::bAiming].Property->GetFName()
		&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName();
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
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 3518435936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h__Script_Blaster_1023964327(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
