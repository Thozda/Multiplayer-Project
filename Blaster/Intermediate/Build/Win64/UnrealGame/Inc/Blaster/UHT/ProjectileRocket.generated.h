// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/ProjectileRocket.h"

#ifdef BLASTER_ProjectileRocket_generated_h
#error "ProjectileRocket.generated.h already included, missing '#pragma once' in ProjectileRocket.h"
#endif
#define BLASTER_ProjectileRocket_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectileRocket ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AProjectileRocket_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileRocket(); \
	friend struct Z_Construct_UClass_AProjectileRocket_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AProjectileRocket_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileRocket, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AProjectileRocket_NoRegister) \
	DECLARE_SERIALIZER(AProjectileRocket)


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileRocket(AProjectileRocket&&) = delete; \
	AProjectileRocket(const AProjectileRocket&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileRocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileRocket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileRocket) \
	NO_API virtual ~AProjectileRocket();


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h_16_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h_19_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileRocket;

// ********** End Class AProjectileRocket **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
