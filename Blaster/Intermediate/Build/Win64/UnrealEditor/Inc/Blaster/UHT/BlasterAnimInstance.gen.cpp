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
BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance();
BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BlasterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static void NewProp_bIsAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlasterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter = { "BlasterCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, BlasterCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterCharacter_MetaData), NewProp_BlasterCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating,
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
		{ Z_Construct_UClass_UBlasterAnimInstance, UBlasterAnimInstance::StaticClass, TEXT("UBlasterAnimInstance"), &Z_Registration_Info_UClass_UBlasterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlasterAnimInstance), 2818581310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h__Script_Blaster_3310021069(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
