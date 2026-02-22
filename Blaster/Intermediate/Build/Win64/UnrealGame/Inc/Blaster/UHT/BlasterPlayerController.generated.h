// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/BlasterPlayerController.h"

#ifdef BLASTER_BlasterPlayerController_generated_h
#error "BlasterPlayerController.generated.h already included, missing '#pragma once' in BlasterPlayerController.h"
#endif
#define BLASTER_BlasterPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FHighPingDelegate *****************************************************
#define FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_9_DELEGATE \
BLASTER_API void FHighPingDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighPingDelegate, bool bPingTooHigh);


// ********** End Delegate FHighPingDelegate *******************************************************

// ********** Begin Class ABlasterPlayerController *************************************************
#define FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerReportPingStatus_Implementation(bool bHighPing); \
	virtual void ClientJoinMidGame_Implementation(FName StateOfMatch, float Warmup, float Match, float Cooldown, float Stating); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerRecievedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
	DECLARE_FUNCTION(execServerReportPingStatus); \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execClientJoinMidGame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime);


#define FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_CALLBACK_WRAPPERS
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();

#define FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerController(); \
	friend struct Z_Construct_UClass_ABlasterPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlasterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ABlasterPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ABlasterPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlasterPlayerController(ABlasterPlayerController&&) = delete; \
	ABlasterPlayerController(const ABlasterPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerController) \
	NO_API virtual ~ABlasterPlayerController();


#define FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_18_PROLOG
#define FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_CALLBACK_WRAPPERS \
	FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlasterPlayerController;

// ********** End Class ABlasterPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
