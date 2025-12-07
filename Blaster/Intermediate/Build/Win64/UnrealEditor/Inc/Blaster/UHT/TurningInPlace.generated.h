// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterTypes/TurningInPlace.h"

#ifdef BLASTER_TurningInPlace_generated_h
#error "TurningInPlace.generated.h already included, missing '#pragma once' in TurningInPlace.h"
#endif
#define BLASTER_TurningInPlace_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_BlasterTypes_TurningInPlace_h

// ********** Begin Enum ETurningInPlace ***********************************************************
#define FOREACH_ENUM_ETURNINGINPLACE(op) \
	op(ETurningInPlace::ETIP_Left) \
	op(ETurningInPlace::ETIP_Right) \
	op(ETurningInPlace::ETIP_NotTurning) \
	op(ETurningInPlace::ETIP_Max) 

enum class ETurningInPlace : uint8;
template<> struct TIsUEnumClass<ETurningInPlace> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<ETurningInPlace>();
// ********** End Enum ETurningInPlace *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
