// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/ProjectileBullet.h"

#ifdef BLASTER_ProjectileBullet_generated_h
#error "ProjectileBullet.generated.h already included, missing '#pragma once' in ProjectileBullet.h"
#endif
#define BLASTER_ProjectileBullet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectileBullet ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileBullet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBullet(); \
	friend struct Z_Construct_UClass_AProjectileBullet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileBullet, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AProjectileBullet_NoRegister) \
	DECLARE_SERIALIZER(AProjectileBullet)


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileBullet_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileBullet(AProjectileBullet&&) = delete; \
	AProjectileBullet(const AProjectileBullet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBullet) \
	NO_API virtual ~AProjectileBullet();


#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileBullet_h_12_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_ProjectileBullet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileBullet_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_ProjectileBullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileBullet;

// ********** End Class AProjectileBullet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_ProjectileBullet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
