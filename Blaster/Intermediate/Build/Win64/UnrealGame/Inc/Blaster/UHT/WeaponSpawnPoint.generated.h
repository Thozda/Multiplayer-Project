// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponSpawnPoint.h"

#ifdef BLASTER_WeaponSpawnPoint_generated_h
#error "WeaponSpawnPoint.generated.h already included, missing '#pragma once' in WeaponSpawnPoint.h"
#endif
#define BLASTER_WeaponSpawnPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class AWeaponSpawnPoint ********************************************************
#define FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartSpawnWeaponTimer);


BLASTER_API UClass* Z_Construct_UClass_AWeaponSpawnPoint_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponSpawnPoint(); \
	friend struct Z_Construct_UClass_AWeaponSpawnPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AWeaponSpawnPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeaponSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AWeaponSpawnPoint_NoRegister) \
	DECLARE_SERIALIZER(AWeaponSpawnPoint)


#define FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeaponSpawnPoint(AWeaponSpawnPoint&&) = delete; \
	AWeaponSpawnPoint(const AWeaponSpawnPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponSpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponSpawnPoint) \
	NO_API virtual ~AWeaponSpawnPoint();


#define FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_11_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_14_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeaponSpawnPoint;

// ********** End Class AWeaponSpawnPoint **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
