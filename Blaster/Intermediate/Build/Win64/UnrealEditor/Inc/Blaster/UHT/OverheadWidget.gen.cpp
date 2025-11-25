// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUD/OverheadWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOverheadWidget() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_UOverheadWidget();
BLASTER_API UClass* Z_Construct_UClass_UOverheadWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOverheadWidget Function ShowPlayerName **********************************
struct Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics
{
	struct OverheadWidget_eventShowPlayerName_Parms
	{
		APawn* InPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/OverheadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverheadWidget_eventShowPlayerName_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::NewProp_InPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOverheadWidget, nullptr, "ShowPlayerName", Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::OverheadWidget_eventShowPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::OverheadWidget_eventShowPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverheadWidget_ShowPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverheadWidget_ShowPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOverheadWidget::execShowPlayerName)
{
	P_GET_OBJECT(APawn,Z_Param_InPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPlayerName(Z_Param_InPawn);
	P_NATIVE_END;
}
// ********** End Class UOverheadWidget Function ShowPlayerName ************************************

// ********** Begin Class UOverheadWidget Function ShowPlayerNetRole *******************************
struct Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics
{
	struct OverheadWidget_eventShowPlayerNetRole_Parms
	{
		APawn* InPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/OverheadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverheadWidget_eventShowPlayerNetRole_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::NewProp_InPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOverheadWidget, nullptr, "ShowPlayerNetRole", Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::OverheadWidget_eventShowPlayerNetRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::OverheadWidget_eventShowPlayerNetRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOverheadWidget::execShowPlayerNetRole)
{
	P_GET_OBJECT(APawn,Z_Param_InPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPlayerNetRole(Z_Param_InPawn);
	P_NATIVE_END;
}
// ********** End Class UOverheadWidget Function ShowPlayerNetRole *********************************

// ********** Begin Class UOverheadWidget **********************************************************
void UOverheadWidget::StaticRegisterNativesUOverheadWidget()
{
	UClass* Class = UOverheadWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowPlayerName", &UOverheadWidget::execShowPlayerName },
		{ "ShowPlayerNetRole", &UOverheadWidget::execShowPlayerNetRole },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOverheadWidget;
UClass* UOverheadWidget::GetPrivateStaticClass()
{
	using TClass = UOverheadWidget;
	if (!Z_Registration_Info_UClass_UOverheadWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OverheadWidget"),
			Z_Registration_Info_UClass_UOverheadWidget.InnerSingleton,
			StaticRegisterNativesUOverheadWidget,
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
	return Z_Registration_Info_UClass_UOverheadWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UOverheadWidget_NoRegister()
{
	return UOverheadWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOverheadWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/OverheadWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/OverheadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/OverheadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverheadWidget_ShowPlayerName, "ShowPlayerName" }, // 2613670628
		{ &Z_Construct_UFunction_UOverheadWidget_ShowPlayerNetRole, "ShowPlayerNetRole" }, // 2382297899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverheadWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOverheadWidget_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverheadWidget, DisplayText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayText_MetaData), NewProp_DisplayText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverheadWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverheadWidget_Statics::NewProp_DisplayText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOverheadWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverheadWidget_Statics::ClassParams = {
	&UOverheadWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOverheadWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverheadWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverheadWidget()
{
	if (!Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton, Z_Construct_UClass_UOverheadWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton;
}
UOverheadWidget::UOverheadWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverheadWidget);
UOverheadWidget::~UOverheadWidget() {}
// ********** End Class UOverheadWidget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_OverheadWidget_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverheadWidget, UOverheadWidget::StaticClass, TEXT("UOverheadWidget"), &Z_Registration_Info_UClass_UOverheadWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverheadWidget), 4070574905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_OverheadWidget_h__Script_Blaster_2127587700(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_OverheadWidget_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_OverheadWidget_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
