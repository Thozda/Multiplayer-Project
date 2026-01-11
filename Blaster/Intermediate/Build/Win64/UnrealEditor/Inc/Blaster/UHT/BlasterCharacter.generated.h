// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BlasterCharacter.h"

#ifdef BLASTER_BlasterCharacter_generated_h
#error "BlasterCharacter.generated.h already included, missing '#pragma once' in BlasterCharacter.h"
#endif
#define BLASTER_BlasterCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class AWeapon;
class UDamageType;
struct FInputActionValue;

// ********** Begin Class ABlasterCharacter ********************************************************
#define FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastElim_Implementation(); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execRecieveDamage); \
	DECLARE_FUNCTION(execReloadButtonPressed); \
	DECLARE_FUNCTION(execFireButtonReleased); \
	DECLARE_FUNCTION(execFireButtonPressed); \
	DECLARE_FUNCTION(execAimButtonReleased); \
	DECLARE_FUNCTION(execAimButtonPressed); \
	DECLARE_FUNCTION(execCrouchButtonPressed); \
	DECLARE_FUNCTION(execEquipButtonPressed); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execMulticastElim);


#define FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_CALLBACK_WRAPPERS
BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ABlasterCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABlasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABlasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDisableGameplay=NETFIELD_REP_START, \
		OverlappingWeapon, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlasterCharacter(ABlasterCharacter&&) = delete; \
	ABlasterCharacter(const ABlasterCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlasterCharacter) \
	NO_API virtual ~ABlasterCharacter();


#define FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_25_PROLOG
#define FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_CALLBACK_WRAPPERS \
	FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlasterCharacter;

// ********** End Class ABlasterCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Character_BlasterCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
