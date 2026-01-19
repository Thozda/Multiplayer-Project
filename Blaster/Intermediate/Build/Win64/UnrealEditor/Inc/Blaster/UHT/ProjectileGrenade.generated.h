// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/ProjectileGrenade.h"

#ifdef BLASTER_ProjectileGrenade_generated_h
#error "ProjectileGrenade.generated.h already included, missing '#pragma once' in ProjectileGrenade.h"
#endif
#define BLASTER_ProjectileGrenade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHitResult;

// ********** Begin Class AProjectileGrenade *******************************************************
#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBounce);


BLASTER_API UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileGrenade(); \
	friend struct Z_Construct_UClass_AProjectileGrenade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileGrenade, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AProjectileGrenade_NoRegister) \
	DECLARE_SERIALIZER(AProjectileGrenade)


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileGrenade(AProjectileGrenade&&) = delete; \
	AProjectileGrenade(const AProjectileGrenade&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileGrenade) \
	NO_API virtual ~AProjectileGrenade();


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_12_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileGrenade;

// ********** End Class AProjectileGrenade *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_ProjectileGrenade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
