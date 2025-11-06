// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MenuSystemGameMode.h"

#ifdef MENUSYSTEM_MenuSystemGameMode_generated_h
#error "MenuSystemGameMode.generated.h already included, missing '#pragma once' in MenuSystemGameMode.h"
#endif
#define MENUSYSTEM_MenuSystemGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMenuSystemGameMode ******************************************************
MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemGameMode_NoRegister();

#define FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenuSystemGameMode(); \
	friend struct Z_Construct_UClass_AMenuSystemGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMenuSystemGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MenuSystem"), Z_Construct_UClass_AMenuSystemGameMode_NoRegister) \
	DECLARE_SERIALIZER(AMenuSystemGameMode)


#define FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMenuSystemGameMode(AMenuSystemGameMode&&) = delete; \
	AMenuSystemGameMode(const AMenuSystemGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuSystemGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuSystemGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMenuSystemGameMode) \
	NO_API virtual ~AMenuSystemGameMode();


#define FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_12_PROLOG
#define FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMenuSystemGameMode;

// ********** End Class AMenuSystemGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MenuSystem_Source_MenuSystem_MenuSystemGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
