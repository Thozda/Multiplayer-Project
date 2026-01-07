// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/Weapon.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ACasing_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeapon();
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_EWeaponState();
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_EWeaponType();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWeaponState **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
static UEnum* EWeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Blaster_EWeaponState, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("EWeaponState"));
	}
	return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
}
template<> BLASTER_API UEnum* StaticEnum<EWeaponState>()
{
	return EWeaponState_StaticEnum();
}
struct Z_Construct_UEnum_Blaster_EWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWS_Dropped.DisplayName", "Dropped" },
		{ "EWS_Dropped.Name", "EWeaponState::EWS_Dropped" },
		{ "EWS_Equipped.DisplayName", "Equipped" },
		{ "EWS_Equipped.Name", "EWeaponState::EWS_Equipped" },
		{ "EWS_Initial.DisplayName", "Initial State" },
		{ "EWS_Initial.Name", "EWeaponState::EWS_Initial" },
		{ "EWS_MAX.DisplayName", "Default MAX" },
		{ "EWS_MAX.Name", "EWeaponState::EWS_MAX" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponState::EWS_Initial", (int64)EWeaponState::EWS_Initial },
		{ "EWeaponState::EWS_Equipped", (int64)EWeaponState::EWS_Equipped },
		{ "EWeaponState::EWS_Dropped", (int64)EWeaponState::EWS_Dropped },
		{ "EWeaponState::EWS_MAX", (int64)EWeaponState::EWS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Blaster_EWeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	"EWeaponState",
	"EWeaponState",
	Z_Construct_UEnum_Blaster_EWeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_EWeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_EWeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Blaster_EWeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Blaster_EWeaponState()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_Blaster_EWeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
}
// ********** End Enum EWeaponState ****************************************************************

// ********** Begin Class AWeapon Function OnRep_Ammo **********************************************
struct Z_Construct_UFunction_AWeapon_OnRep_Ammo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_Ammo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_Ammo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_Ammo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_Ammo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeapon_OnRep_Ammo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_Ammo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execOnRep_Ammo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Ammo();
	P_NATIVE_END;
}
// ********** End Class AWeapon Function OnRep_Ammo ************************************************

// ********** Begin Class AWeapon Function OnRep_WeaponState ***************************************
struct Z_Construct_UFunction_AWeapon_OnRep_WeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Weapon State\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon State" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_WeaponState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_WeaponState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_WeaponState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_WeaponState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeapon_OnRep_WeaponState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_WeaponState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execOnRep_WeaponState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WeaponState();
	P_NATIVE_END;
}
// ********** End Class AWeapon Function OnRep_WeaponState *****************************************

// ********** Begin Class AWeapon Function OnSphereEndOverlap **************************************
struct Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics
{
	struct Weapon_eventOnSphereEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnSphereEndOverlap", Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::Weapon_eventOnSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::Weapon_eventOnSphereEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeapon_OnSphereEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnSphereEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execOnSphereEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AWeapon Function OnSphereEndOverlap ****************************************

// ********** Begin Class AWeapon Function OnSphereOverlap *****************************************
struct Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics
{
	struct Weapon_eventOnSphereOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Weapon_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Weapon_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnSphereOverlap", Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::Weapon_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::Weapon_eventOnSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeapon_OnSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execOnSphereOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AWeapon Function OnSphereOverlap *******************************************

// ********** Begin Class AWeapon ******************************************************************
void AWeapon::StaticRegisterNativesAWeapon()
{
	UClass* Class = AWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Ammo", &AWeapon::execOnRep_Ammo },
		{ "OnRep_WeaponState", &AWeapon::execOnRep_WeaponState },
		{ "OnSphereEndOverlap", &AWeapon::execOnSphereEndOverlap },
		{ "OnSphereOverlap", &AWeapon::execOnSphereOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeapon;
UClass* AWeapon::GetPrivateStaticClass()
{
	using TClass = AWeapon;
	if (!Z_Registration_Info_UClass_AWeapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Weapon"),
			Z_Registration_Info_UClass_AWeapon.InnerSingleton,
			StaticRegisterNativesAWeapon,
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
	return Z_Registration_Info_UClass_AWeapon.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeapon_NoRegister()
{
	return AWeapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Weapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Equip\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsCenter_MetaData[] = {
		{ "Category", "Crosshairs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Crosshair Textures\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crosshair Textures" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsLeft_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsRight_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsTop_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBottom_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Automatic Fire\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatic Fire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterOwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterOwnerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponState_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Components\n//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaSphere_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupWidget_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Weapon Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Animation\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CasingClass_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Casing\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Casing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Zoomed FOV while Aiming\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zoomed FOV while Aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagCapacity_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsCenter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsTop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsBottom;
	static void NewProp_bAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterOwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterOwnerController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CasingClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagCapacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_OnRep_Ammo, "OnRep_Ammo" }, // 2597524701
		{ &Z_Construct_UFunction_AWeapon_OnRep_WeaponState, "OnRep_WeaponState" }, // 2826376596
		{ &Z_Construct_UFunction_AWeapon_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 209261441
		{ &Z_Construct_UFunction_AWeapon_OnSphereOverlap, "OnSphereOverlap" }, // 1512855155
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, EquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSound_MetaData), NewProp_EquipSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsCenter = { "CrosshairsCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CrosshairsCenter), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairsCenter_MetaData), NewProp_CrosshairsCenter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft = { "CrosshairsLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CrosshairsLeft), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairsLeft_MetaData), NewProp_CrosshairsLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight = { "CrosshairsRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CrosshairsRight), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairsRight_MetaData), NewProp_CrosshairsRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop = { "CrosshairsTop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CrosshairsTop), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairsTop_MetaData), NewProp_CrosshairsTop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom = { "CrosshairsBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CrosshairsBottom), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairsBottom_MetaData), NewProp_CrosshairsBottom_MetaData) };
void Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic_SetBit(void* Obj)
{
	((AWeapon*)Obj)->bAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomatic_MetaData), NewProp_bAutomatic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireDelay_MetaData), NewProp_FireDelay_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponType), Z_Construct_UEnum_Blaster_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponType_MetaData), NewProp_WeaponType_MetaData) }; // 2147758921
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BlasterOwnerCharacter = { "BlasterOwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BlasterOwnerCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterOwnerCharacter_MetaData), NewProp_BlasterOwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BlasterOwnerController = { "BlasterOwnerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BlasterOwnerController), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterOwnerController_MetaData), NewProp_BlasterOwnerController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState = { "WeaponState", "OnRep_WeaponState", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponState), Z_Construct_UEnum_Blaster_EWeaponState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponState_MetaData), NewProp_WeaponState_MetaData) }; // 1739138149
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AreaSphere = { "AreaSphere", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, AreaSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaSphere_MetaData), NewProp_AreaSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_PickupWidget = { "PickupWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, PickupWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupWidget_MetaData), NewProp_PickupWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAnimation_MetaData), NewProp_FireAnimation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CasingClass = { "CasingClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CasingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACasing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CasingClass_MetaData), NewProp_CasingClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ZoomedFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomedFOV_MetaData), NewProp_ZoomedFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ZoomInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData), NewProp_ZoomInterpSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo = { "Ammo", "OnRep_Ammo", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Ammo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ammo_MetaData), NewProp_Ammo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MagCapacity = { "MagCapacity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MagCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagCapacity_MetaData), NewProp_MagCapacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_EquipSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BlasterOwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BlasterOwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AreaSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_PickupWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CasingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MagCapacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon()
{
	if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_WeaponState(TEXT("WeaponState"));
	static FName Name_Ammo(TEXT("Ammo"));
	const bool bIsValid = true
		&& Name_WeaponState == ClassReps[(int32)ENetFields_Private::WeaponState].Property->GetFName()
		&& Name_Ammo == ClassReps[(int32)ENetFields_Private::Ammo].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeapon"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
AWeapon::~AWeapon() {}
// ********** End Class AWeapon ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h__Script_Blaster_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1739138149U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 4055616714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h__Script_Blaster_1447511916(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h__Script_Blaster_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h__Script_Blaster_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
