// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponTypes.h"

#ifdef BLASTER_WeaponTypes_generated_h
#error "WeaponTypes.generated.h already included, missing '#pragma once' in WeaponTypes.h"
#endif
#define BLASTER_WeaponTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Source_Blaster_Public_Weapon_WeaponTypes_h

// ********** Begin Enum EWeaponType ***************************************************************
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_AssaultRifle) \
	op(EWeaponType::EWT_RocketLauncher) \
	op(EWeaponType::EWT_Pistol) \
	op(EWeaponType::EWT_SubmachineGun) \
	op(EWeaponType::EWT_Shotgun) \
	op(EWeaponType::EWT_SniperRifle) \
	op(EWeaponType::EWT_GrenadeLauncher) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<EWeaponType>();
// ********** End Enum EWeaponType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
