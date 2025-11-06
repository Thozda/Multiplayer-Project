// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MPTestingGameMode.h"

#ifdef MPTESTING_MPTestingGameMode_generated_h
#error "MPTestingGameMode.generated.h already included, missing '#pragma once' in MPTestingGameMode.h"
#endif
#define MPTESTING_MPTestingGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMPTestingGameMode *******************************************************
MPTESTING_API UClass* Z_Construct_UClass_AMPTestingGameMode_NoRegister();

#define FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPTestingGameMode(); \
	friend struct Z_Construct_UClass_AMPTestingGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MPTESTING_API UClass* Z_Construct_UClass_AMPTestingGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMPTestingGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPTesting"), Z_Construct_UClass_AMPTestingGameMode_NoRegister) \
	DECLARE_SERIALIZER(AMPTestingGameMode)


#define FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMPTestingGameMode(AMPTestingGameMode&&) = delete; \
	AMPTestingGameMode(const AMPTestingGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPTestingGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPTestingGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMPTestingGameMode) \
	NO_API virtual ~AMPTestingGameMode();


#define FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h_12_PROLOG
#define FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMPTestingGameMode;

// ********** End Class AMPTestingGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Multiplayer_Project_Source_MPTesting_MPTestingGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
