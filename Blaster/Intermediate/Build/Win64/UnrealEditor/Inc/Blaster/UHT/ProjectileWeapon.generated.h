// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/ProjectileWeapon.h"

#ifdef BLASTER_ProjectileWeapon_generated_h
#error "ProjectileWeapon.generated.h already included, missing '#pragma once' in ProjectileWeapon.h"
#endif
#define BLASTER_ProjectileWeapon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectileWeapon ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileWeapon(); \
	friend struct Z_Construct_UClass_AProjectileWeapon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AProjectileWeapon_NoRegister) \
	DECLARE_SERIALIZER(AProjectileWeapon)


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileWeapon_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileWeapon(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileWeapon(AProjectileWeapon&&) = delete; \
	AProjectileWeapon(const AProjectileWeapon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileWeapon) \
	NO_API virtual ~AProjectileWeapon();


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileWeapon_h_14_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileWeapon_h_17_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileWeapon;

// ********** End Class AProjectileWeapon **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_ProjectileWeapon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
