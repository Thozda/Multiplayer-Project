// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/BlasterCharacter.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterCharacter() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter();
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABlasterCharacter Function AimButtonPressed ******************************
struct Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics
{
	struct BlasterCharacter_eventAimButtonPressed_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventAimButtonPressed_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "AimButtonPressed", Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::BlasterCharacter_eventAimButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::BlasterCharacter_eventAimButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execAimButtonPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AimButtonPressed(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function AimButtonPressed ********************************

// ********** Begin Class ABlasterCharacter Function AimButtonReleased *****************************
struct Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics
{
	struct BlasterCharacter_eventAimButtonReleased_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventAimButtonReleased_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "AimButtonReleased", Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::BlasterCharacter_eventAimButtonReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::BlasterCharacter_eventAimButtonReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execAimButtonReleased)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AimButtonReleased(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function AimButtonReleased *******************************

// ********** Begin Class ABlasterCharacter Function CrouchButtonPressed ***************************
struct Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics
{
	struct BlasterCharacter_eventCrouchButtonPressed_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventCrouchButtonPressed_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "CrouchButtonPressed", Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::BlasterCharacter_eventCrouchButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::BlasterCharacter_eventCrouchButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execCrouchButtonPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrouchButtonPressed(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function CrouchButtonPressed *****************************

// ********** Begin Class ABlasterCharacter Function EquipButtonPressed ****************************
struct Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics
{
	struct BlasterCharacter_eventEquipButtonPressed_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventEquipButtonPressed_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "EquipButtonPressed", Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::BlasterCharacter_eventEquipButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::BlasterCharacter_eventEquipButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execEquipButtonPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipButtonPressed(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function EquipButtonPressed ******************************

// ********** Begin Class ABlasterCharacter Function FireButtonPressed *****************************
struct Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics
{
	struct BlasterCharacter_eventFireButtonPressed_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventFireButtonPressed_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "FireButtonPressed", Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::BlasterCharacter_eventFireButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::BlasterCharacter_eventFireButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execFireButtonPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireButtonPressed(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function FireButtonPressed *******************************

// ********** Begin Class ABlasterCharacter Function FireButtonReleased ****************************
struct Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics
{
	struct BlasterCharacter_eventFireButtonReleased_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventFireButtonReleased_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "FireButtonReleased", Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::BlasterCharacter_eventFireButtonReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::BlasterCharacter_eventFireButtonReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execFireButtonReleased)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireButtonReleased(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function FireButtonReleased ******************************

// ********** Begin Class ABlasterCharacter Function Look ******************************************
struct Z_Construct_UFunction_ABlasterCharacter_Look_Statics
{
	struct BlasterCharacter_eventLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_Look_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_Look_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "Look", Z_Construct_UFunction_ABlasterCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_Look_Statics::BlasterCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_Look_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_Look_Statics::BlasterCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function Look ********************************************

// ********** Begin Class ABlasterCharacter Function Move ******************************************
struct Z_Construct_UFunction_ABlasterCharacter_Move_Statics
{
	struct BlasterCharacter_eventMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Input\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlasterCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "Move", Z_Construct_UFunction_ABlasterCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_Move_Statics::BlasterCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_Move_Statics::BlasterCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function Move ********************************************

// ********** Begin Class ABlasterCharacter Function MulticastElim *********************************
static FName NAME_ABlasterCharacter_MulticastElim = FName(TEXT("MulticastElim"));
void ABlasterCharacter::MulticastElim()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_MulticastElim);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterCharacter_MulticastElim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_MulticastElim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "MulticastElim", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_MulticastElim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_MulticastElim_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterCharacter_MulticastElim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_MulticastElim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execMulticastElim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastElim_Implementation();
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function MulticastElim ***********************************

// ********** Begin Class ABlasterCharacter Function OnRep_Health **********************************
struct Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Player Health\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Health" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_Health", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execOnRep_Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health();
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function OnRep_Health ************************************

// ********** Begin Class ABlasterCharacter Function OnRep_OverlappingWeapon ***********************
struct Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics
{
	struct BlasterCharacter_eventOnRep_OverlappingWeapon_Parms
	{
		AWeapon* LastWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_OverlappingWeapon", Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::BlasterCharacter_eventOnRep_OverlappingWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::BlasterCharacter_eventOnRep_OverlappingWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execOnRep_OverlappingWeapon)
{
	P_GET_OBJECT(AWeapon,Z_Param_LastWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function OnRep_OverlappingWeapon *************************

// ********** Begin Class ABlasterCharacter Function RecieveDamage *********************************
struct Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics
{
	struct BlasterCharacter_eventRecieveDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatorController;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Damage\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventRecieveDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventRecieveDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventRecieveDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventRecieveDamage_Parms, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventRecieveDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_InstigatorController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "RecieveDamage", Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::BlasterCharacter_eventRecieveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::BlasterCharacter_eventRecieveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_RecieveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_RecieveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execRecieveDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatorController);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecieveDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatorController,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function RecieveDamage ***********************************

// ********** Begin Class ABlasterCharacter Function ServerEquipButtonPressed **********************
static FName NAME_ABlasterCharacter_ServerEquipButtonPressed = FName(TEXT("ServerEquipButtonPressed"));
void ABlasterCharacter::ServerEquipButtonPressed()
{
	UFunction* Func = FindFunctionChecked(NAME_ABlasterCharacter_ServerEquipButtonPressed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "ServerEquipButtonPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execServerEquipButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerEquipButtonPressed_Implementation();
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function ServerEquipButtonPressed ************************

// ********** Begin Class ABlasterCharacter Function UpdateDissolveMaterial ************************
struct Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics
{
	struct BlasterCharacter_eventUpdateDissolveMaterial_Parms
	{
		float DissolveValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DissolveValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue = { "DissolveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlasterCharacter_eventUpdateDissolveMaterial_Parms, DissolveValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "UpdateDissolveMaterial", Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::BlasterCharacter_eventUpdateDissolveMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::BlasterCharacter_eventUpdateDissolveMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterCharacter::execUpdateDissolveMaterial)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DissolveValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDissolveMaterial(Z_Param_DissolveValue);
	P_NATIVE_END;
}
// ********** End Class ABlasterCharacter Function UpdateDissolveMaterial **************************

// ********** Begin Class ABlasterCharacter ********************************************************
void ABlasterCharacter::StaticRegisterNativesABlasterCharacter()
{
	UClass* Class = ABlasterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AimButtonPressed", &ABlasterCharacter::execAimButtonPressed },
		{ "AimButtonReleased", &ABlasterCharacter::execAimButtonReleased },
		{ "CrouchButtonPressed", &ABlasterCharacter::execCrouchButtonPressed },
		{ "EquipButtonPressed", &ABlasterCharacter::execEquipButtonPressed },
		{ "FireButtonPressed", &ABlasterCharacter::execFireButtonPressed },
		{ "FireButtonReleased", &ABlasterCharacter::execFireButtonReleased },
		{ "Look", &ABlasterCharacter::execLook },
		{ "Move", &ABlasterCharacter::execMove },
		{ "MulticastElim", &ABlasterCharacter::execMulticastElim },
		{ "OnRep_Health", &ABlasterCharacter::execOnRep_Health },
		{ "OnRep_OverlappingWeapon", &ABlasterCharacter::execOnRep_OverlappingWeapon },
		{ "RecieveDamage", &ABlasterCharacter::execRecieveDamage },
		{ "ServerEquipButtonPressed", &ABlasterCharacter::execServerEquipButtonPressed },
		{ "UpdateDissolveMaterial", &ABlasterCharacter::execUpdateDissolveMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlasterCharacter;
UClass* ABlasterCharacter::GetPrivateStaticClass()
{
	using TClass = ABlasterCharacter;
	if (!Z_Registration_Info_UClass_ABlasterCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterCharacter"),
			Z_Registration_Info_UClass_ABlasterCharacter.InnerSingleton,
			StaticRegisterNativesABlasterCharacter,
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
	return Z_Registration_Info_UClass_ABlasterCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister()
{
	return ABlasterCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlasterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BlasterCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraThreshhold_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Combat_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Weapon\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireWeaponMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimDelay_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveTimeline_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveCurve_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dynamic Instance that can be changed at runtime\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic Instance that can be changed at runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Material instance set in blueprint used by dynamic instance\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material instance set in blueprint used by dynamic instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotEffect_MetaData[] = {
		{ "Category", "BlasterCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//ElimBot\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ElimBot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotComponent_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotSound_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Score\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Score" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraThreshhold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Combat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireWeaponMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterPlayerController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElimDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDissolveMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed, "AimButtonPressed" }, // 4211990407
		{ &Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased, "AimButtonReleased" }, // 292021356
		{ &Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed, "CrouchButtonPressed" }, // 644599290
		{ &Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed, "EquipButtonPressed" }, // 3762841454
		{ &Z_Construct_UFunction_ABlasterCharacter_FireButtonPressed, "FireButtonPressed" }, // 3733087656
		{ &Z_Construct_UFunction_ABlasterCharacter_FireButtonReleased, "FireButtonReleased" }, // 1337240573
		{ &Z_Construct_UFunction_ABlasterCharacter_Look, "Look" }, // 2014398258
		{ &Z_Construct_UFunction_ABlasterCharacter_Move, "Move" }, // 38782147
		{ &Z_Construct_UFunction_ABlasterCharacter_MulticastElim, "MulticastElim" }, // 399752557
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_Health, "OnRep_Health" }, // 1061480851
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 15218718
		{ &Z_Construct_UFunction_ABlasterCharacter_RecieveDamage, "RecieveDamage" }, // 1679188559
		{ &Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 397432195
		{ &Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial, "UpdateDissolveMaterial" }, // 1431097689
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction = { "EquipAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, EquipAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipAction_MetaData), NewProp_EquipAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAction_MetaData), NewProp_AimAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraThreshhold = { "CameraThreshhold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CameraThreshhold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraThreshhold_MetaData), NewProp_CameraThreshhold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverheadWidget_MetaData), NewProp_OverheadWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Combat_MetaData), NewProp_Combat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingWeapon_MetaData), NewProp_OverlappingWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMontage = { "FireWeaponMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FireWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireWeaponMontage_MetaData), NewProp_FireWeaponMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactMontage_MetaData), NewProp_HitReactMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimMontage = { "ElimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimMontage_MetaData), NewProp_ElimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterPlayerController = { "BlasterPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, BlasterPlayerController), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterPlayerController_MetaData), NewProp_BlasterPlayerController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDelay = { "ElimDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimDelay_MetaData), NewProp_ElimDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline = { "DissolveTimeline", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DissolveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveTimeline_MetaData), NewProp_DissolveTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve = { "DissolveCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DissolveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveCurve_MetaData), NewProp_DissolveCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance = { "DynamicDissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DynamicDissolveMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicDissolveMaterialInstance_MetaData), NewProp_DynamicDissolveMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveMaterialInstance = { "DissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, DissolveMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterialInstance_MetaData), NewProp_DissolveMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotEffect = { "ElimBotEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimBotEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimBotEffect_MetaData), NewProp_ElimBotEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotComponent = { "ElimBotComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimBotComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimBotComponent_MetaData), NewProp_ElimBotComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotSound = { "ElimBotSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, ElimBotSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElimBotSound_MetaData), NewProp_ElimBotSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterPlayerState = { "BlasterPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, BlasterPlayerState), Z_Construct_UClass_ABlasterPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterPlayerState_MetaData), NewProp_BlasterPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraThreshhold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimBotSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_BlasterPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABlasterCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister, (int32)VTABLE_OFFSET(ABlasterCharacter, IInteractWithCrosshairsInterface), false },  // 287330286
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams = {
	&ABlasterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterCharacter()
{
	if (!Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton, Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ABlasterCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));
	static FName Name_Health(TEXT("Health"));
	const bool bIsValid = true
		&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterCharacter);
ABlasterCharacter::~ABlasterCharacter() {}
// ********** End Class ABlasterCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterCharacter, ABlasterCharacter::StaticClass, TEXT("ABlasterCharacter"), &Z_Registration_Info_UClass_ABlasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterCharacter), 2577507148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h__Script_Blaster_3083046117(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
