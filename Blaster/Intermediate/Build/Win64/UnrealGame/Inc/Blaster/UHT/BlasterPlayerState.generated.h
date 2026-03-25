// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/BlasterPlayerState.h"

#ifdef BLASTER_BlasterPlayerState_generated_h
#error "BlasterPlayerState.generated.h already included, missing '#pragma once' in BlasterPlayerState.h"
#endif
#define BLASTER_BlasterPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABlasterPlayerState ******************************************************
#define FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execOnRep_Defeats);


BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();

#define FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerState(); \
	friend struct Z_Construct_UClass_ABlasterPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlasterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ABlasterPlayerState_NoRegister) \
	DECLARE_SERIALIZER(ABlasterPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Defeats=NETFIELD_REP_START, \
		Team, \
		NETFIELD_REP_END=Team	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlasterPlayerState(ABlasterPlayerState&&) = delete; \
	ABlasterPlayerState(const ABlasterPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerState) \
	NO_API virtual ~ABlasterPlayerState();


#define FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_15_PROLOG
#define FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlasterPlayerState;

// ********** End Class ABlasterPlayerState ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_PlayerState_BlasterPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
