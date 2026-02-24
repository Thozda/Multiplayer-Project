// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUD/ReturnToMainMenu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeReturnToMainMenu() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_UReturnToMainMenu();
BLASTER_API UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReturnToMainMenu Function OnDestroySession ******************************
struct Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics
{
	struct ReturnToMainMenu_eventOnDestroySession_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((ReturnToMainMenu_eventOnDestroySession_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReturnToMainMenu_eventOnDestroySession_Parms), &Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "OnDestroySession", Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::ReturnToMainMenu_eventOnDestroySession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::ReturnToMainMenu_eventOnDestroySession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnToMainMenu::execOnDestroySession)
{
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDestroySession(Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UReturnToMainMenu Function OnDestroySession ********************************

// ********** Begin Class UReturnToMainMenu Function OnPlayerLeftGame ******************************
struct Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "OnPlayerLeftGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnToMainMenu::execOnPlayerLeftGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerLeftGame();
	P_NATIVE_END;
}
// ********** End Class UReturnToMainMenu Function OnPlayerLeftGame ********************************

// ********** Begin Class UReturnToMainMenu Function ReturnButtonClicked ***************************
struct Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReturnToMainMenu, nullptr, "ReturnButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnToMainMenu::execReturnButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UReturnToMainMenu Function ReturnButtonClicked *****************************

// ********** Begin Class UReturnToMainMenu ********************************************************
void UReturnToMainMenu::StaticRegisterNativesUReturnToMainMenu()
{
	UClass* Class = UReturnToMainMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDestroySession", &UReturnToMainMenu::execOnDestroySession },
		{ "OnPlayerLeftGame", &UReturnToMainMenu::execOnPlayerLeftGame },
		{ "ReturnButtonClicked", &UReturnToMainMenu::execReturnButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UReturnToMainMenu;
UClass* UReturnToMainMenu::GetPrivateStaticClass()
{
	using TClass = UReturnToMainMenu;
	if (!Z_Registration_Info_UClass_UReturnToMainMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ReturnToMainMenu"),
			Z_Registration_Info_UClass_UReturnToMainMenu.InnerSingleton,
			StaticRegisterNativesUReturnToMainMenu,
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
	return Z_Registration_Info_UClass_UReturnToMainMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister()
{
	return UReturnToMainMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReturnToMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/ReturnToMainMenu.h" },
		{ "ModuleRelativePath", "Public/HUD/ReturnToMainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD/ReturnToMainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplayerSessionsSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD/ReturnToMainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ReturnToMainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplayerSessionsSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReturnToMainMenu_OnDestroySession, "OnDestroySession" }, // 4072571948
		{ &Z_Construct_UFunction_UReturnToMainMenu_OnPlayerLeftGame, "OnPlayerLeftGame" }, // 3114097956
		{ &Z_Construct_UFunction_UReturnToMainMenu_ReturnButtonClicked, "ReturnButtonClicked" }, // 2612914651
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReturnToMainMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiplayerSessionsSubsystem = { "MultiplayerSessionsSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, MultiplayerSessionsSubsystem), Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplayerSessionsSubsystem_MetaData), NewProp_MultiplayerSessionsSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton = { "ReturnButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToMainMenu, ReturnButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnButton_MetaData), NewProp_ReturnButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_MultiplayerSessionsSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToMainMenu_Statics::NewProp_ReturnButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReturnToMainMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReturnToMainMenu_Statics::ClassParams = {
	&UReturnToMainMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UReturnToMainMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReturnToMainMenu()
{
	if (!Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton, Z_Construct_UClass_UReturnToMainMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReturnToMainMenu.OuterSingleton;
}
UReturnToMainMenu::UReturnToMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReturnToMainMenu);
UReturnToMainMenu::~UReturnToMainMenu() {}
// ********** End Class UReturnToMainMenu **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReturnToMainMenu, UReturnToMainMenu::StaticClass, TEXT("UReturnToMainMenu"), &Z_Registration_Info_UClass_UReturnToMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReturnToMainMenu), 3633231485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h__Script_Blaster_2408252923(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
