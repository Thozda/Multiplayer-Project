// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/BlasterAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance();
BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister();
BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ETurningInPlace();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlasterAnimInstance *****************************************************
void UBlasterAnimInstance::StaticRegisterNativesUBlasterAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBlasterAnimInstance;
UClass* UBlasterAnimInstance::GetPrivateStaticClass()
{
	using TClass = UBlasterAnimInstance;
	if (!Z_Registration_Info_UClass_UBlasterAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterAnimInstance"),
			Z_Registration_Info_UClass_UBlasterAnimInstance.InnerSingleton,
			StaticRegisterNativesUBlasterAnimInstance,
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
	return Z_Registration_Info_UClass_UBlasterAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister()
{
	return UBlasterAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlasterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/BlasterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningInPlace_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Floats\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Floats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AO_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AO_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//bools\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bools" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocallyControlled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateRootBone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bElimmed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandTransform_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Transforms\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transforms" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TurningInPlace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TurningInPlace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Pitch;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static void NewProp_bIsAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
	static void NewProp_bWeaponEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponEquipped;
	static void NewProp_bIsCrouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
	static void NewProp_bAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
	static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
	static void NewProp_bRotateRootBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateRootBone;
	static void NewProp_bElimmed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bElimmed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlasterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_RightHandRotation = { "RightHandRotation", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, RightHandRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandRotation_MetaData), NewProp_RightHandRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace = { "TurningInPlace", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, TurningInPlace), Z_Construct_UEnum_Blaster_ETurningInPlace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningInPlace_MetaData), NewProp_TurningInPlace_MetaData) }; // 1231018714
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter = { "BlasterCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, BlasterCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterCharacter_MetaData), NewProp_BlasterCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, YawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawOffset_MetaData), NewProp_YawOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, Lean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lean_MetaData), NewProp_Lean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Yaw = { "AO_Yaw", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, AO_Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AO_Yaw_MetaData), NewProp_AO_Yaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Pitch = { "AO_Pitch", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, AO_Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AO_Pitch_MetaData), NewProp_AO_Pitch_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsAccelerating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAccelerating_MetaData), NewProp_bIsAccelerating_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bWeaponEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped = { "bWeaponEquipped", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponEquipped_MetaData), NewProp_bWeaponEquipped_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsCrouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouched_MetaData), NewProp_bIsCrouched_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAiming_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAiming_MetaData), NewProp_bAiming_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsLocallyControlled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocallyControlled_MetaData), NewProp_bIsLocallyControlled_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bRotateRootBone_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bRotateRootBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bRotateRootBone = { "bRotateRootBone", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bRotateRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateRootBone_MetaData), NewProp_bRotateRootBone_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bElimmed_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bElimmed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bElimmed = { "bElimmed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bElimmed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bElimmed_MetaData), NewProp_bElimmed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_LeftHandTransform = { "LeftHandTransform", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, LeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandTransform_MetaData), NewProp_LeftHandTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_RightHandRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_TurningInPlace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_YawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Lean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_AO_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsCrouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsLocallyControlled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bRotateRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bElimmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_LeftHandTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlasterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlasterAnimInstance_Statics::ClassParams = {
	&UBlasterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlasterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlasterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton, Z_Construct_UClass_UBlasterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton;
}
UBlasterAnimInstance::UBlasterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlasterAnimInstance);
UBlasterAnimInstance::~UBlasterAnimInstance() {}
// ********** End Class UBlasterAnimInstance *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlasterAnimInstance, UBlasterAnimInstance::StaticClass, TEXT("UBlasterAnimInstance"), &Z_Registration_Info_UClass_UBlasterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlasterAnimInstance), 1915455536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h__Script_Blaster_1392749398(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
