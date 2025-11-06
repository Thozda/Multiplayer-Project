// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MPTestingPlayerController.h"

#ifdef MPTESTING_MPTestingPlayerController_generated_h
#error "MPTestingPlayerController.generated.h already included, missing '#pragma once' in MPTestingPlayerController.h"
#endif
#define MPTESTING_MPTestingPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMPTestingPlayerController ***********************************************
MPTESTING_API UClass* Z_Construct_UClass_AMPTestingPlayerController_NoRegister();

#define FID_Multiplayer_Project_Source_MPTesting_MPTestingPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPTestingPlayerController(); \
	friend struct Z_Construct_UClass_AMPTestingPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MPTESTING_API UClass* Z_Construct_UClass_AMPTestingPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMPTestingPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPTesting"), Z_Construct_UClass_AMPTestingPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMPTestingPlayerController)


#define FID_Multiplayer_Project_Source_MPTesting_MPTestingPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPTestingPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMPTestingPlayerController(AMPTestingPlayerController&&) = delete; \
	AMPTestingPlayerController(const AMPTestingPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPTestingPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPTestingPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPTestingPlayerController) \
	NO_API virtual ~AMPTestingPlayerController();


#define FID_Multiplayer_Project_Source_MPTesting_MPTestingPlayerController_h_16_PROLOG
#define FID_Multiplayer_Project_Source_MPTesting_MPTestingPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Multiplayer_Project_Source_MPTesting_MPTestingPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Multiplayer_Project_Source_MPTesting_MPTestingPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMPTestingPlayerController;

// ********** End Class AMPTestingPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Multiplayer_Project_Source_MPTesting_MPTestingPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
