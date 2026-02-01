// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerState/BlasterPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterPlayerState() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABlasterPlayerState Function OnRep_Defeats *******************************
struct Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerState/BlasterPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerState, nullptr, "OnRep_Defeats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlasterPlayerState::execOnRep_Defeats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Defeats();
	P_NATIVE_END;
}
// ********** End Class ABlasterPlayerState Function OnRep_Defeats *********************************

// ********** Begin Class ABlasterPlayerState ******************************************************
void ABlasterPlayerState::StaticRegisterNativesABlasterPlayerState()
{
	UClass* Class = ABlasterPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Defeats", &ABlasterPlayerState::execOnRep_Defeats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlasterPlayerState;
UClass* ABlasterPlayerState::GetPrivateStaticClass()
{
	using TClass = ABlasterPlayerState;
	if (!Z_Registration_Info_UClass_ABlasterPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterPlayerState"),
			Z_Registration_Info_UClass_ABlasterPlayerState.InnerSingleton,
			StaticRegisterNativesABlasterPlayerState,
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
	return Z_Registration_Info_UClass_ABlasterPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister()
{
	return ABlasterPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlasterPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/BlasterPlayerState.h" },
		{ "ModuleRelativePath", "Public/PlayerState/BlasterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerState/BlasterPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerState/BlasterPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defeats_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerState/BlasterPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Defeats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterPlayerState_OnRep_Defeats, "OnRep_Defeats" }, // 81546775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Defeats = { "Defeats", "OnRep_Defeats", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerState, Defeats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defeats_MetaData), NewProp_Defeats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerState_Statics::NewProp_Defeats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams = {
	&ABlasterPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterPlayerState()
{
	if (!Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton, Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ABlasterPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Defeats(TEXT("Defeats"));
	const bool bIsValid = true
		&& Name_Defeats == ClassReps[(int32)ENetFields_Private::Defeats].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterPlayerState"));
}
#endif
ABlasterPlayerState::ABlasterPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerState);
ABlasterPlayerState::~ABlasterPlayerState() {}
// ********** End Class ABlasterPlayerState ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerState, ABlasterPlayerState::StaticClass, TEXT("ABlasterPlayerState"), &Z_Registration_Info_UClass_ABlasterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerState), 274312576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h__Script_Blaster_231320407(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
