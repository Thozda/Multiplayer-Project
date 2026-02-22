// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Weapon.h"

#ifdef BLASTER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define BLASTER_Weapon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AWeapon ******************************************************************
#define FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientAddAmmo_Implementation(int32 AmmoToAdd); \
	virtual void ClientUpdateAmmo_Implementation(int32 ServerAmmo); \
	DECLARE_FUNCTION(execClientAddAmmo); \
	DECLARE_FUNCTION(execClientUpdateAmmo); \
	DECLARE_FUNCTION(execOnRep_WeaponState); \
	DECLARE_FUNCTION(execOnPingTooHigh); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_CALLBACK_WRAPPERS
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AWeapon_NoRegister) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bUseServerSideRewind=NETFIELD_REP_START, \
		WeaponState, \
		NETFIELD_REP_END=WeaponState	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeapon(AWeapon&&) = delete; \
	AWeapon(const AWeapon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_41_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_CALLBACK_WRAPPERS \
	FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeapon;

// ********** End Class AWeapon ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_Weapon_h

// ********** Begin Enum EWeaponState **************************************************************
#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::EWS_Initial) \
	op(EWeaponState::EWS_Equipped) \
	op(EWeaponState::EWS_EquippedSecondary) \
	op(EWeaponState::EWS_Dropped) 

enum class EWeaponState : uint8;
template<> struct TIsUEnumClass<EWeaponState> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<EWeaponState>();
// ********** End Enum EWeaponState ****************************************************************

// ********** Begin Enum EFireType *****************************************************************
#define FOREACH_ENUM_EFIRETYPE(op) \
	op(EFireType::EFT_HitScan) \
	op(EFireType::EFT_Projectile) \
	op(EFireType::EFT_Shotgun) 

enum class EFireType : uint8;
template<> struct TIsUEnumClass<EFireType> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<EFireType>();
// ********** End Enum EFireType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
