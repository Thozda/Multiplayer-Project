// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyGameMode.h"

#ifdef MENUSYSTEM_LobbyGameMode_generated_h
#error "LobbyGameMode.generated.h already included, missing '#pragma once' in LobbyGameMode.h"
#endif
#define MENUSYSTEM_LobbyGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALobbyGameMode ***********************************************************
MENUSYSTEM_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();

#define FID_MenuSystem_Source_MenuSystem_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGameMode(); \
	friend struct Z_Construct_UClass_ALobbyGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MENUSYSTEM_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MenuSystem"), Z_Construct_UClass_ALobbyGameMode_NoRegister) \
	DECLARE_SERIALIZER(ALobbyGameMode)


#define FID_MenuSystem_Source_MenuSystem_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyGameMode(ALobbyGameMode&&) = delete; \
	ALobbyGameMode(const ALobbyGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGameMode) \
	NO_API virtual ~ALobbyGameMode();


#define FID_MenuSystem_Source_MenuSystem_LobbyGameMode_h_12_PROLOG
#define FID_MenuSystem_Source_MenuSystem_LobbyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Source_MenuSystem_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_MenuSystem_Source_MenuSystem_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyGameMode;

// ********** End Class ALobbyGameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MenuSystem_Source_MenuSystem_LobbyGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
