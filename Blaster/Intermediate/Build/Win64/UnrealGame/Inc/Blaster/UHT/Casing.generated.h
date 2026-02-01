// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Casing.h"

#ifdef BLASTER_Casing_generated_h
#error "Casing.generated.h already included, missing '#pragma once' in Casing.h"
#endif
#define BLASTER_Casing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACasing ******************************************************************
#define FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


BLASTER_API UClass* Z_Construct_UClass_ACasing_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasing(); \
	friend struct Z_Construct_UClass_ACasing_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ACasing_NoRegister(); \
public: \
	DECLARE_CLASS2(ACasing, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ACasing_NoRegister) \
	DECLARE_SERIALIZER(ACasing)


#define FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACasing(ACasing&&) = delete; \
	ACasing(const ACasing&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACasing) \
	NO_API virtual ~ACasing();


#define FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_11_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_14_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_Casing_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACasing;

// ********** End Class ACasing ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_Casing_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
