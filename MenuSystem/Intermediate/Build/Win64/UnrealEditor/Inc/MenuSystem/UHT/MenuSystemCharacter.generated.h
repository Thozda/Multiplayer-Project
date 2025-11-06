// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MenuSystemCharacter.h"

#ifdef MENUSYSTEM_MenuSystemCharacter_generated_h
#error "MenuSystemCharacter.generated.h already included, missing '#pragma once' in MenuSystemCharacter.h"
#endif
#define MENUSYSTEM_MenuSystemCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMenuSystemCharacter *****************************************************
#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemCharacter_NoRegister();

#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenuSystemCharacter(); \
	friend struct Z_Construct_UClass_AMenuSystemCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MENUSYSTEM_API UClass* Z_Construct_UClass_AMenuSystemCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMenuSystemCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MenuSystem"), Z_Construct_UClass_AMenuSystemCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMenuSystemCharacter)


#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMenuSystemCharacter(AMenuSystemCharacter&&) = delete; \
	AMenuSystemCharacter(const AMenuSystemCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuSystemCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMenuSystemCharacter) \
	NO_API virtual ~AMenuSystemCharacter();


#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_22_PROLOG
#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMenuSystemCharacter;

// ********** End Class AMenuSystemCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
