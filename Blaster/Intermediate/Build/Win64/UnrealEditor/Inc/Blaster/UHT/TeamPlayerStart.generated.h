// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStart/TeamPlayerStart.h"

#ifdef BLASTER_TeamPlayerStart_generated_h
#error "TeamPlayerStart.generated.h already included, missing '#pragma once' in TeamPlayerStart.h"
#endif
#define BLASTER_TeamPlayerStart_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATeamPlayerStart *********************************************************
BLASTER_API UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister();

#define FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeamPlayerStart(); \
	friend struct Z_Construct_UClass_ATeamPlayerStart_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister(); \
public: \
	DECLARE_CLASS2(ATeamPlayerStart, APlayerStart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ATeamPlayerStart_NoRegister) \
	DECLARE_SERIALIZER(ATeamPlayerStart)


#define FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeamPlayerStart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATeamPlayerStart(ATeamPlayerStart&&) = delete; \
	ATeamPlayerStart(const ATeamPlayerStart&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamPlayerStart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamPlayerStart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeamPlayerStart) \
	NO_API virtual ~ATeamPlayerStart();


#define FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h_13_PROLOG
#define FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h_16_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATeamPlayerStart;

// ********** End Class ATeamPlayerStart ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_PlayerStart_TeamPlayerStart_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
