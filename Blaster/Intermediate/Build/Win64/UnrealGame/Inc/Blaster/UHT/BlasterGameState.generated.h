// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/BlasterGameState.h"

#ifdef BLASTER_BlasterGameState_generated_h
#error "BlasterGameState.generated.h already included, missing '#pragma once' in BlasterGameState.h"
#endif
#define BLASTER_BlasterGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABlasterGameState ********************************************************
#define FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_BlueTeamScore); \
	DECLARE_FUNCTION(execOnRep_PurpleTeamScore);


BLASTER_API UClass* Z_Construct_UClass_ABlasterGameState_NoRegister();

#define FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterGameState(); \
	friend struct Z_Construct_UClass_ABlasterGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ABlasterGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlasterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ABlasterGameState_NoRegister) \
	DECLARE_SERIALIZER(ABlasterGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopScoringPlayers=NETFIELD_REP_START, \
		PurpleTeamScore, \
		BlueTeamScore, \
		NETFIELD_REP_END=BlueTeamScore	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlasterGameState(ABlasterGameState&&) = delete; \
	ABlasterGameState(const ABlasterGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterGameState) \
	NO_API virtual ~ABlasterGameState();


#define FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_14_PROLOG
#define FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlasterGameState;

// ********** End Class ABlasterGameState **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_GameState_BlasterGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
