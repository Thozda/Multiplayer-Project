// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/CharacterOverlay.h"

#ifdef BLASTER_CharacterOverlay_generated_h
#error "CharacterOverlay.generated.h already included, missing '#pragma once' in CharacterOverlay.h"
#endif
#define BLASTER_CharacterOverlay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCharacterOverlay ********************************************************
BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();

#define FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterOverlay(); \
	friend struct Z_Construct_UClass_UCharacterOverlay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_UCharacterOverlay_NoRegister) \
	DECLARE_SERIALIZER(UCharacterOverlay)


#define FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterOverlay(UCharacterOverlay&&) = delete; \
	UCharacterOverlay(const UCharacterOverlay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterOverlay) \
	NO_API virtual ~UCharacterOverlay();


#define FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h_16_PROLOG
#define FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h_19_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterOverlay;

// ********** End Class UCharacterOverlay **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
