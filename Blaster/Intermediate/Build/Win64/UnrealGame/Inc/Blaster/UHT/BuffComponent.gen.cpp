// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/BuffComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBuffComponent() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UBuffComponent();
BLASTER_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBuffComponent Function MulticastJumpBuff ********************************
struct BuffComponent_eventMulticastJumpBuff_Parms
{
	float JumpVelocity;
};
static FName NAME_UBuffComponent_MulticastJumpBuff = FName(TEXT("MulticastJumpBuff"));
void UBuffComponent::MulticastJumpBuff(float JumpVelocity)
{
	BuffComponent_eventMulticastJumpBuff_Parms Parms;
	Parms.JumpVelocity=JumpVelocity;
	UFunction* Func = FindFunctionChecked(NAME_UBuffComponent_MulticastJumpBuff);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/BuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffComponent_eventMulticastJumpBuff_Parms, JumpVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::NewProp_JumpVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuffComponent, nullptr, "MulticastJumpBuff", Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::PropPointers), sizeof(BuffComponent_eventMulticastJumpBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BuffComponent_eventMulticastJumpBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffComponent::execMulticastJumpBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_JumpVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastJumpBuff_Implementation(Z_Param_JumpVelocity);
	P_NATIVE_END;
}
// ********** End Class UBuffComponent Function MulticastJumpBuff **********************************

// ********** Begin Class UBuffComponent Function MulticastSpeedBuff *******************************
struct BuffComponent_eventMulticastSpeedBuff_Parms
{
	float BaseSpeed;
	float CrouchSpeed;
};
static FName NAME_UBuffComponent_MulticastSpeedBuff = FName(TEXT("MulticastSpeedBuff"));
void UBuffComponent::MulticastSpeedBuff(float BaseSpeed, float CrouchSpeed)
{
	BuffComponent_eventMulticastSpeedBuff_Parms Parms;
	Parms.BaseSpeed=BaseSpeed;
	Parms.CrouchSpeed=CrouchSpeed;
	UFunction* Func = FindFunctionChecked(NAME_UBuffComponent_MulticastSpeedBuff);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/BuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffComponent_eventMulticastSpeedBuff_Parms, BaseSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffComponent_eventMulticastSpeedBuff_Parms, CrouchSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_CrouchSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuffComponent, nullptr, "MulticastSpeedBuff", Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers), sizeof(BuffComponent_eventMulticastSpeedBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BuffComponent_eventMulticastSpeedBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffComponent::execMulticastSpeedBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CrouchSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSpeedBuff_Implementation(Z_Param_BaseSpeed,Z_Param_CrouchSpeed);
	P_NATIVE_END;
}
// ********** End Class UBuffComponent Function MulticastSpeedBuff *********************************

// ********** Begin Class UBuffComponent ***********************************************************
void UBuffComponent::StaticRegisterNativesUBuffComponent()
{
	UClass* Class = UBuffComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastJumpBuff", &UBuffComponent::execMulticastJumpBuff },
		{ "MulticastSpeedBuff", &UBuffComponent::execMulticastSpeedBuff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuffComponent;
UClass* UBuffComponent::GetPrivateStaticClass()
{
	using TClass = UBuffComponent;
	if (!Z_Registration_Info_UClass_UBuffComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BuffComponent"),
			Z_Registration_Info_UClass_UBuffComponent.InnerSingleton,
			StaticRegisterNativesUBuffComponent,
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
	return Z_Registration_Info_UClass_UBuffComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuffComponent_NoRegister()
{
	return UBuffComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuffComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/BuffComponent.h" },
		{ "ModuleRelativePath", "Public/Components/BuffComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/BuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff, "MulticastJumpBuff" }, // 1658830744
		{ &Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff, "MulticastSpeedBuff" }, // 3559946306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuffComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffComponent_Statics::ClassParams = {
	&UBuffComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBuffComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuffComponent()
{
	if (!Z_Registration_Info_UClass_UBuffComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffComponent.OuterSingleton, Z_Construct_UClass_UBuffComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuffComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuffComponent);
UBuffComponent::~UBuffComponent() {}
// ********** End Class UBuffComponent *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuffComponent, UBuffComponent::StaticClass, TEXT("UBuffComponent"), &Z_Registration_Info_UClass_UBuffComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffComponent), 2282602324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h__Script_Blaster_4153132699(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
