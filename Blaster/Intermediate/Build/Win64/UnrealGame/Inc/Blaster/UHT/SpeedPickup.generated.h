// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/SpeedPickup.h"

#ifdef BLASTER_SpeedPickup_generated_h
#error "SpeedPickup.generated.h already included, missing '#pragma once' in SpeedPickup.h"
#endif
#define BLASTER_SpeedPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASpeedPickup *************************************************************
BLASTER_API UClass* Z_Construct_UClass_ASpeedPickup_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Pickups_SpeedPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeedPickup(); \
	friend struct Z_Construct_UClass_ASpeedPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ASpeedPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpeedPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ASpeedPickup_NoRegister) \
	DECLARE_SERIALIZER(ASpeedPickup)


#define FID_Blaster_Source_Blaster_Public_Pickups_SpeedPickup_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeedPickup(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpeedPickup(ASpeedPickup&&) = delete; \
	ASpeedPickup(const ASpeedPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpeedPickup) \
	NO_API virtual ~ASpeedPickup();


#define FID_Blaster_Source_Blaster_Public_Pickups_SpeedPickup_h_12_PROLOG
#define FID_Blaster_Source_Blaster_Public_Pickups_SpeedPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Pickups_SpeedPickup_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Pickups_SpeedPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpeedPickup;

// ********** End Class ASpeedPickup ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Pickups_SpeedPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
