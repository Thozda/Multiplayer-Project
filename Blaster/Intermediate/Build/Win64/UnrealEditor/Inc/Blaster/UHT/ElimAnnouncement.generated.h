// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ElimAnnouncement.h"

#ifdef BLASTER_ElimAnnouncement_generated_h
#error "ElimAnnouncement.generated.h already included, missing '#pragma once' in ElimAnnouncement.h"
#endif
#define BLASTER_ElimAnnouncement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UElimAnnouncement ********************************************************
BLASTER_API UClass* Z_Construct_UClass_UElimAnnouncement_NoRegister();

#define FID_Blaster_Source_Blaster_Public_HUD_ElimAnnouncement_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElimAnnouncement(); \
	friend struct Z_Construct_UClass_UElimAnnouncement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_UElimAnnouncement_NoRegister(); \
public: \
	DECLARE_CLASS2(UElimAnnouncement, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_UElimAnnouncement_NoRegister) \
	DECLARE_SERIALIZER(UElimAnnouncement)


#define FID_Blaster_Source_Blaster_Public_HUD_ElimAnnouncement_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElimAnnouncement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UElimAnnouncement(UElimAnnouncement&&) = delete; \
	UElimAnnouncement(const UElimAnnouncement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElimAnnouncement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElimAnnouncement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElimAnnouncement) \
	NO_API virtual ~UElimAnnouncement();


#define FID_Blaster_Source_Blaster_Public_HUD_ElimAnnouncement_h_15_PROLOG
#define FID_Blaster_Source_Blaster_Public_HUD_ElimAnnouncement_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_HUD_ElimAnnouncement_h_18_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_HUD_ElimAnnouncement_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UElimAnnouncement;

// ********** End Class UElimAnnouncement **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_HUD_ElimAnnouncement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
