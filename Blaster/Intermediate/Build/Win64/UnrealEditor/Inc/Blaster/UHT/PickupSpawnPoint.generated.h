// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/PickupSpawnPoint.h"

#ifdef BLASTER_PickupSpawnPoint_generated_h
#error "PickupSpawnPoint.generated.h already included, missing '#pragma once' in PickupSpawnPoint.h"
#endif
#define BLASTER_PickupSpawnPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class APickupSpawnPoint ********************************************************
#define FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartSpawnPickupTimer);


BLASTER_API UClass* Z_Construct_UClass_APickupSpawnPoint_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupSpawnPoint(); \
	friend struct Z_Construct_UClass_APickupSpawnPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_APickupSpawnPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(APickupSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_APickupSpawnPoint_NoRegister) \
	DECLARE_SERIALIZER(APickupSpawnPoint)


#define FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APickupSpawnPoint(APickupSpawnPoint&&) = delete; \
	APickupSpawnPoint(const APickupSpawnPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupSpawnPoint) \
	NO_API virtual ~APickupSpawnPoint();


#define FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_11_PROLOG
#define FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_14_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APickupSpawnPoint;

// ********** End Class APickupSpawnPoint **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Pickups_PickupSpawnPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
