// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/HitScanWeapon.h"

#ifdef BLASTER_HitScanWeapon_generated_h
#error "HitScanWeapon.generated.h already included, missing '#pragma once' in HitScanWeapon.h"
#endif
#define BLASTER_HitScanWeapon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHitScanWeapon ***********************************************************
BLASTER_API UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitScanWeapon(); \
	friend struct Z_Construct_UClass_AHitScanWeapon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister(); \
public: \
	DECLARE_CLASS2(AHitScanWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AHitScanWeapon_NoRegister) \
	DECLARE_SERIALIZER(AHitScanWeapon)


#define FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitScanWeapon(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHitScanWeapon(AHitScanWeapon&&) = delete; \
	AHitScanWeapon(const AHitScanWeapon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitScanWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitScanWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitScanWeapon) \
	NO_API virtual ~AHitScanWeapon();


#define FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h_14_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h_17_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHitScanWeapon;

// ********** End Class AHitScanWeapon *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
