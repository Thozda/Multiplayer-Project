// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/AmmoPickup.h"

#ifdef BLASTER_AmmoPickup_generated_h
#error "AmmoPickup.generated.h already included, missing '#pragma once' in AmmoPickup.h"
#endif
#define BLASTER_AmmoPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAmmoPickup **************************************************************
BLASTER_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Pickups_AmmoPickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(AAmmoPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AAmmoPickup_NoRegister) \
	DECLARE_SERIALIZER(AAmmoPickup)


#define FID_Blaster_Source_Blaster_Public_Pickups_AmmoPickup_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoPickup(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAmmoPickup(AAmmoPickup&&) = delete; \
	AAmmoPickup(const AAmmoPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoPickup) \
	NO_API virtual ~AAmmoPickup();


#define FID_Blaster_Source_Blaster_Public_Pickups_AmmoPickup_h_13_PROLOG
#define FID_Blaster_Source_Blaster_Public_Pickups_AmmoPickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Pickups_AmmoPickup_h_16_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Pickups_AmmoPickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAmmoPickup;

// ********** End Class AAmmoPickup ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Pickups_AmmoPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
