// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/Pickup.h"

#ifdef BLASTER_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define BLASTER_Pickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class APickup ******************************************************************
#define FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereOverlap);


BLASTER_API UClass* Z_Construct_UClass_APickup_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_APickup_NoRegister(); \
public: \
	DECLARE_CLASS2(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_APickup_NoRegister) \
	DECLARE_SERIALIZER(APickup)


#define FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APickup(APickup&&) = delete; \
	APickup(const APickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_14_PROLOG
#define FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_17_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APickup;

// ********** End Class APickup ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Pickups_Pickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
