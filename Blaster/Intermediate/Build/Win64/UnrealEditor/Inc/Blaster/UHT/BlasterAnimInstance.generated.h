// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BlasterAnimInstance.h"

#ifdef BLASTER_BlasterAnimInstance_generated_h
#error "BlasterAnimInstance.generated.h already included, missing '#pragma once' in BlasterAnimInstance.h"
#endif
#define BLASTER_BlasterAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlasterAnimInstance *****************************************************
BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlasterAnimInstance(); \
	friend struct Z_Construct_UClass_UBlasterAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlasterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_UBlasterAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UBlasterAnimInstance)


#define FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlasterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlasterAnimInstance(UBlasterAnimInstance&&) = delete; \
	UBlasterAnimInstance(const UBlasterAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlasterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlasterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlasterAnimInstance) \
	NO_API virtual ~UBlasterAnimInstance();


#define FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h_13_PROLOG
#define FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlasterAnimInstance;

// ********** End Class UBlasterAnimInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Character_BlasterAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
