// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BuffComponent.h"

#ifdef BLASTER_BuffComponent_generated_h
#error "BuffComponent.generated.h already included, missing '#pragma once' in BuffComponent.h"
#endif
#define BLASTER_BuffComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBuffComponent ***********************************************************
#define FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastJumpBuff_Implementation(float JumpVelocity); \
	virtual void MulticastSpeedBuff_Implementation(float BaseSpeed, float CrouchSpeed); \
	DECLARE_FUNCTION(execMulticastJumpBuff); \
	DECLARE_FUNCTION(execMulticastSpeedBuff);


#define FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_CALLBACK_WRAPPERS
BLASTER_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuffComponent(); \
	friend struct Z_Construct_UClass_UBuffComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuffComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_UBuffComponent_NoRegister) \
	DECLARE_SERIALIZER(UBuffComponent)


#define FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuffComponent(UBuffComponent&&) = delete; \
	UBuffComponent(const UBuffComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuffComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuffComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuffComponent) \
	NO_API virtual ~UBuffComponent();


#define FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_9_PROLOG
#define FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_CALLBACK_WRAPPERS \
	FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuffComponent;

// ********** End Class UBuffComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Components_BuffComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
