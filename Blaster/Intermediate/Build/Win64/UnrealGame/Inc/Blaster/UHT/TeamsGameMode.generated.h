// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/TeamsGameMode.h"

#ifdef BLASTER_TeamsGameMode_generated_h
#error "TeamsGameMode.generated.h already included, missing '#pragma once' in TeamsGameMode.h"
#endif
#define BLASTER_TeamsGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATeamsGameMode ***********************************************************
BLASTER_API UClass* Z_Construct_UClass_ATeamsGameMode_NoRegister();

#define FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeamsGameMode(); \
	friend struct Z_Construct_UClass_ATeamsGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ATeamsGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATeamsGameMode, ABlasterGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ATeamsGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATeamsGameMode)


#define FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATeamsGameMode(ATeamsGameMode&&) = delete; \
	ATeamsGameMode(const ATeamsGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamsGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamsGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeamsGameMode) \
	NO_API virtual ~ATeamsGameMode();


#define FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h_12_PROLOG
#define FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATeamsGameMode;

// ********** End Class ATeamsGameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_GameMode_TeamsGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
