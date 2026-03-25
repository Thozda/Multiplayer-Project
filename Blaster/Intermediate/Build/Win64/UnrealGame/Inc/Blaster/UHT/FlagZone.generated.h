// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureTheFlag/FlagZone.h"

#ifdef BLASTER_FlagZone_generated_h
#error "FlagZone.generated.h already included, missing '#pragma once' in FlagZone.h"
#endif
#define BLASTER_FlagZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AFlagZone ****************************************************************
#define FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxOverlap);


BLASTER_API UClass* Z_Construct_UClass_AFlagZone_NoRegister();

#define FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlagZone(); \
	friend struct Z_Construct_UClass_AFlagZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_AFlagZone_NoRegister(); \
public: \
	DECLARE_CLASS2(AFlagZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_AFlagZone_NoRegister) \
	DECLARE_SERIALIZER(AFlagZone)


#define FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFlagZone(AFlagZone&&) = delete; \
	AFlagZone(const AFlagZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlagZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlagZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlagZone) \
	NO_API virtual ~AFlagZone();


#define FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_12_PROLOG
#define FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFlagZone;

// ********** End Class AFlagZone ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_CaptureTheFlag_FlagZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
