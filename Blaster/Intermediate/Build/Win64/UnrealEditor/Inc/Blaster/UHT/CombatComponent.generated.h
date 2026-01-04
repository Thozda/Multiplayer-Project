// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CombatComponent.h"

#ifdef BLASTER_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define BLASTER_CombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVector_NetQuantize;

// ********** Begin Class UCombatComponent *********************************************************
#define FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerHitTarget_Implementation(FVector_NetQuantize const& Target); \
	virtual void ServerSetAiming_Implementation(bool bIsAiming); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerHitTarget); \
	DECLARE_FUNCTION(execServerSetAiming); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon);


#define FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_CALLBACK_WRAPPERS
BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_UCombatComponent_NoRegister) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitTarget=NETFIELD_REP_START, \
		bAiming, \
		EquippedWeapon, \
		NETFIELD_REP_END=EquippedWeapon	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatComponent(UCombatComponent&&) = delete; \
	UCombatComponent(const UCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_17_PROLOG
#define FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_CALLBACK_WRAPPERS \
	FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatComponent;

// ********** End Class UCombatComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Components_CombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
