// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Shotgun.h"

#ifdef BLASTER_Shotgun_generated_h
#error "Shotgun.generated.h already included, missing '#pragma once' in Shotgun.h"
#endif
#define BLASTER_Shotgun_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShotgun *****************************************************************
BLASTER_API UClass* Z_Construct_UClass_AShotgun_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShotgun(); \
	friend struct Z_Construct_UClass_AShotgun_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AShotgun_NoRegister(); \
public: \
	DECLARE_CLASS2(AShotgun, AHitScanWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AShotgun_NoRegister) \
	DECLARE_SERIALIZER(AShotgun)


#define FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShotgun(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShotgun(AShotgun&&) = delete; \
	AShotgun(const AShotgun&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShotgun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShotgun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShotgun) \
	NO_API virtual ~AShotgun();


#define FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h_12_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShotgun;

// ********** End Class AShotgun *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
