// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/RocketMovementComponent.h"

#ifdef BLASTER_RocketMovementComponent_generated_h
#error "RocketMovementComponent.generated.h already included, missing '#pragma once' in RocketMovementComponent.h"
#endif
#define BLASTER_RocketMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URocketMovementComponent *************************************************
BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURocketMovementComponent(); \
	friend struct Z_Construct_UClass_URocketMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URocketMovementComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_URocketMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(URocketMovementComponent)


#define FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URocketMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URocketMovementComponent(URocketMovementComponent&&) = delete; \
	URocketMovementComponent(const URocketMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URocketMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URocketMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URocketMovementComponent) \
	NO_API virtual ~URocketMovementComponent();


#define FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h_12_PROLOG
#define FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URocketMovementComponent;

// ********** End Class URocketMovementComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
