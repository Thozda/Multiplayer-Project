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
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
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

// ********** Begin Class ABlasterCharacter ********************************************************
void ABlasterCharacter::StaticRegisterNativesABlasterCharacter()
{
	UClass* Class = ABlasterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AimButtonPressed", &ABlasterCharacter::execAimButtonPressed },
		{ "AimButtonReleased", &ABlasterCharacter::execAimButtonReleased },
		{ "CrouchButtonPressed", &ABlasterCharacter::execCrouchButtonPressed },
		{ "EquipButtonPressed", &ABlasterCharacter::execEquipButtonPressed },
		{ "Look", &ABlasterCharacter::execLook },
		{ "Move", &ABlasterCharacter::execMove },
		{ "OnRep_OverlappingWeapon", &ABlasterCharacter::execOnRep_OverlappingWeapon },
		{ "ServerEquipButtonPressed", &ABlasterCharacter::execServerEquipButtonPressed },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Components\n//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BlasterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Combat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterCharacter_AimButtonPressed, "AimButtonPressed" }, // 4211990407
		{ &Z_Construct_UFunction_ABlasterCharacter_AimButtonReleased, "AimButtonReleased" }, // 292021356
		{ &Z_Construct_UFunction_ABlasterCharacter_CrouchButtonPressed, "CrouchButtonPressed" }, // 644599290
		{ &Z_Construct_UFunction_ABlasterCharacter_EquipButtonPressed, "EquipButtonPressed" }, // 3762841454
		{ &Z_Construct_UFunction_ABlasterCharacter_Look, "Look" }, // 2014398258
		{ &Z_Construct_UFunction_ABlasterCharacter_Move, "Move" }, // 38782147
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 15218718
		{ &Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 397432195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverheadWidget_MetaData), NewProp_OverheadWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Combat_MetaData), NewProp_Combat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingWeapon_MetaData), NewProp_OverlappingWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_EquipAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_AimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Combat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams = {
	&ABlasterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers),
	0,
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
	const bool bIsValid = true
		&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName();
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
		{ Z_Construct_UClass_ABlasterCharacter, ABlasterCharacter::StaticClass, TEXT("ABlasterCharacter"), &Z_Registration_Info_UClass_ABlasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterCharacter), 3370824351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h__Script_Blaster_1413523699(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
