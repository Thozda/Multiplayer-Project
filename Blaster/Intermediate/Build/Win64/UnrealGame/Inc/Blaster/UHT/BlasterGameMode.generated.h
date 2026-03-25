// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/BlasterGameMode.h"

#ifdef BLASTER_BlasterGameMode_generated_h
#error "BlasterGameMode.generated.h already included, missing '#pragma once' in BlasterGameMode.h"
#endif
#define BLASTER_BlasterGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABlasterGameMode *********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();

#define FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterGameMode(); \
	friend struct Z_Construct_UClass_ABlasterGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlasterGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ABlasterGameMode_NoRegister) \
	DECLARE_SERIALIZER(ABlasterGameMode)


#define FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlasterGameMode(ABlasterGameMode&&) = delete; \
	ABlasterGameMode(const ABlasterGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlasterGameMode) \
	NO_API virtual ~ABlasterGameMode();


#define FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h_22_PROLOG
#define FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlasterGameMode;

// ********** End Class ABlasterGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_GameMode_BlasterGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
