// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MPTestingCharacter.h"

#ifdef MPTESTING_MPTestingCharacter_generated_h
#error "MPTestingCharacter.generated.h already included, missing '#pragma once' in MPTestingCharacter.h"
#endif
#define MPTESTING_MPTestingCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMPTestingCharacter ******************************************************
#define FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


MPTESTING_API UClass* Z_Construct_UClass_AMPTestingCharacter_NoRegister();

#define FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPTestingCharacter(); \
	friend struct Z_Construct_UClass_AMPTestingCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MPTESTING_API UClass* Z_Construct_UClass_AMPTestingCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMPTestingCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPTesting"), Z_Construct_UClass_AMPTestingCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMPTestingCharacter)


#define FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMPTestingCharacter(AMPTestingCharacter&&) = delete; \
	AMPTestingCharacter(const AMPTestingCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPTestingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPTestingCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMPTestingCharacter) \
	NO_API virtual ~AMPTestingCharacter();


#define FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_21_PROLOG
#define FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMPTestingCharacter;

// ********** End Class AMPTestingCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Multiplayer_Project_Source_MPTesting_MPTestingCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
