// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InteractWithCrosshairsInterface.h"

#ifdef BLASTER_InteractWithCrosshairsInterface_generated_h
#error "InteractWithCrosshairsInterface.generated.h already included, missing '#pragma once' in InteractWithCrosshairsInterface.h"
#endif
#define BLASTER_InteractWithCrosshairsInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInteractWithCrosshairsInterface *************************************
BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLASTER_API UInteractWithCrosshairsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractWithCrosshairsInterface(UInteractWithCrosshairsInterface&&) = delete; \
	UInteractWithCrosshairsInterface(const UInteractWithCrosshairsInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLASTER_API, UInteractWithCrosshairsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractWithCrosshairsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractWithCrosshairsInterface) \
	virtual ~UInteractWithCrosshairsInterface() = default;


#define FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractWithCrosshairsInterface(); \
	friend struct Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractWithCrosshairsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister) \
	DECLARE_SERIALIZER(UInteractWithCrosshairsInterface)


#define FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractWithCrosshairsInterface() {} \
public: \
	typedef UInteractWithCrosshairsInterface UClassType; \
	typedef IInteractWithCrosshairsInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_10_PROLOG
#define FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractWithCrosshairsInterface;

// ********** End Interface UInteractWithCrosshairsInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
