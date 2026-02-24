// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ReturnToMainMenu.h"

#ifdef BLASTER_ReturnToMainMenu_generated_h
#error "ReturnToMainMenu.generated.h already included, missing '#pragma once' in ReturnToMainMenu.h"
#endif
#define BLASTER_ReturnToMainMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReturnToMainMenu ********************************************************
#define FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReturnButtonClicked); \
	DECLARE_FUNCTION(execOnPlayerLeftGame); \
	DECLARE_FUNCTION(execOnDestroySession);


BLASTER_API UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister();

#define FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReturnToMainMenu(); \
	friend struct Z_Construct_UClass_UReturnToMainMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(UReturnToMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_UReturnToMainMenu_NoRegister) \
	DECLARE_SERIALIZER(UReturnToMainMenu)


#define FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReturnToMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReturnToMainMenu(UReturnToMainMenu&&) = delete; \
	UReturnToMainMenu(const UReturnToMainMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReturnToMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReturnToMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReturnToMainMenu) \
	NO_API virtual ~UReturnToMainMenu();


#define FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_16_PROLOG
#define FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_19_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReturnToMainMenu;

// ********** End Class UReturnToMainMenu **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_HUD_ReturnToMainMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
