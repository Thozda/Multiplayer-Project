// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/BlasterHUD.h"

#ifdef BLASTER_BlasterHUD_generated_h
#error "BlasterHUD.generated.h already included, missing '#pragma once' in BlasterHUD.h"
#endif
#define BLASTER_BlasterHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UElimAnnouncement;

// ********** Begin ScriptStruct FHUDPackage *******************************************************
#define FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHUDPackage_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


struct FHUDPackage;
// ********** End ScriptStruct FHUDPackage *********************************************************

// ********** Begin Class ABlasterHUD **************************************************************
#define FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execElimAnnouncementTimerFinished);


BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();

#define FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterHUD(); \
	friend struct Z_Construct_UClass_ABlasterHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlasterHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ABlasterHUD_NoRegister) \
	DECLARE_SERIALIZER(ABlasterHUD)


#define FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlasterHUD(ABlasterHUD&&) = delete; \
	ABlasterHUD(const ABlasterHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterHUD) \
	NO_API virtual ~ABlasterHUD();


#define FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_32_PROLOG
#define FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_35_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlasterHUD;

// ********** End Class ABlasterHUD ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
