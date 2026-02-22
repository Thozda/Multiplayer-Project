// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LagCompensationComponent.h"

#ifdef BLASTER_LagCompensationComponent_generated_h
#error "LagCompensationComponent.generated.h already included, missing '#pragma once' in LagCompensationComponent.h"
#endif
#define BLASTER_LagCompensationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ABlasterCharacter;
class AWeapon;
struct FVector_NetQuantize100;
struct FVector_NetQuantize;

// ********** Begin ScriptStruct FBoxInformation ***************************************************
#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoxInformation_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


struct FBoxInformation;
// ********** End ScriptStruct FBoxInformation *****************************************************

// ********** Begin ScriptStruct FFramePackage *****************************************************
#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFramePackage_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


struct FFramePackage;
// ********** End ScriptStruct FFramePackage *******************************************************

// ********** Begin ScriptStruct FServerSideRewindResult *******************************************
#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


struct FServerSideRewindResult;
// ********** End ScriptStruct FServerSideRewindResult *********************************************

// ********** Begin ScriptStruct FShotgunServerSideRewindResult ************************************
#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics; \
	BLASTER_API static class UScriptStruct* StaticStruct();


struct FShotgunServerSideRewindResult;
// ********** End ScriptStruct FShotgunServerSideRewindResult **************************************

// ********** Begin Class ULagCompensationComponent ************************************************
#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShotgunServerScoreRequest_Implementation(TArray<ABlasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, const float HitTime, AWeapon* DamageCauser); \
	virtual void ProjectileServerScoreRequest_Implementation(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitialVelocity, const float HitTime); \
	virtual void ServerScoreRequest_Implementation(ABlasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, const float HitTime, AWeapon* DamageCauser); \
	DECLARE_FUNCTION(execShotgunServerScoreRequest); \
	DECLARE_FUNCTION(execProjectileServerScoreRequest); \
	DECLARE_FUNCTION(execServerScoreRequest);


#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_CALLBACK_WRAPPERS
BLASTER_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister();

#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULagCompensationComponent(); \
	friend struct Z_Construct_UClass_ULagCompensationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLASTER_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULagCompensationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), Z_Construct_UClass_ULagCompensationComponent_NoRegister) \
	DECLARE_SERIALIZER(ULagCompensationComponent)


#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULagCompensationComponent(ULagCompensationComponent&&) = delete; \
	ULagCompensationComponent(const ULagCompensationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULagCompensationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULagCompensationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULagCompensationComponent) \
	NO_API virtual ~ULagCompensationComponent();


#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_66_PROLOG
#define FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_CALLBACK_WRAPPERS \
	FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULagCompensationComponent;

// ********** End Class ULagCompensationComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Components_LagCompensationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
