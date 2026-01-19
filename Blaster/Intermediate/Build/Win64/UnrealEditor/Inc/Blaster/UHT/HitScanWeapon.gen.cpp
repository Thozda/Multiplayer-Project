// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/HitScanWeapon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitScanWeapon() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AHitScanWeapon();
BLASTER_API UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeapon();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHitScanWeapon ***********************************************************
void AHitScanWeapon::StaticRegisterNativesAHitScanWeapon()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHitScanWeapon;
UClass* AHitScanWeapon::GetPrivateStaticClass()
{
	using TClass = AHitScanWeapon;
	if (!Z_Registration_Info_UClass_AHitScanWeapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitScanWeapon"),
			Z_Registration_Info_UClass_AHitScanWeapon.InnerSingleton,
			StaticRegisterNativesAHitScanWeapon,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AHitScanWeapon.InnerSingleton;
}
UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister()
{
	return AHitScanWeapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHitScanWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/HitScanWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSphere_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseScatter_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticles_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/HitScanWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static void NewProp_bUseScatter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScatter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitScanWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticles_MetaData), NewProp_ImpactParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, HitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSound_MetaData), NewProp_HitSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, DistanceToSphere), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToSphere_MetaData), NewProp_DistanceToSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
void Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter_SetBit(void* Obj)
{
	((AHitScanWeapon*)Obj)->bUseScatter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter = { "bUseScatter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitScanWeapon), &Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseScatter_MetaData), NewProp_bUseScatter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticles = { "BeamParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, BeamParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamParticles_MetaData), NewProp_BeamParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlash_MetaData), NewProp_MuzzleFlash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_HitSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_DistanceToSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_FireSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams = {
	&AHitScanWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHitScanWeapon()
{
	if (!Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton, Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton;
}
AHitScanWeapon::AHitScanWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHitScanWeapon);
AHitScanWeapon::~AHitScanWeapon() {}
// ********** End Class AHitScanWeapon *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHitScanWeapon, AHitScanWeapon::StaticClass, TEXT("AHitScanWeapon"), &Z_Registration_Info_UClass_AHitScanWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitScanWeapon), 2477768345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h__Script_Blaster_758359209(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_HitScanWeapon_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
