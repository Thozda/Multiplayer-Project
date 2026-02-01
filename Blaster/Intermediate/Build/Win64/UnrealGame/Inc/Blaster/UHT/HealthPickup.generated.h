// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/HealthPickup.h"

#ifdef BLASTER_HealthPickup_generated_h
#error "HealthPickup.generated.h already included, missing '#pragma once' in HealthPickup.h"
#endif
#define BLASTER_HealthPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHealthPickup ************************************************************
BLASTER_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(AHealthPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AHealthPickup_NoRegister) \
	DECLARE_SERIALIZER(AHealthPickup)


#define FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHealthPickup(AHealthPickup&&) = delete; \
	AHealthPickup(const AHealthPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPickup) \
	NO_API virtual ~AHealthPickup();


#define FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h_13_PROLOG
#define FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h_16_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHealthPickup;

// ********** End Class AHealthPickup **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
