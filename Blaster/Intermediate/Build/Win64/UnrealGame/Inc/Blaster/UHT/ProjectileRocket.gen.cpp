// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/ProjectileRocket.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectileRocket() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AProjectile();
BLASTER_API UClass* Z_Construct_UClass_AProjectileRocket();
BLASTER_API UClass* Z_Construct_UClass_AProjectileRocket_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectileRocket ********************************************************
void AProjectileRocket::StaticRegisterNativesAProjectileRocket()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectileRocket;
UClass* AProjectileRocket::GetPrivateStaticClass()
{
	using TClass = AProjectileRocket;
	if (!Z_Registration_Info_UClass_AProjectileRocket.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectileRocket"),
			Z_Registration_Info_UClass_AProjectileRocket.InnerSingleton,
			StaticRegisterNativesAProjectileRocket,
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
	return Z_Registration_Info_UClass_AProjectileRocket.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectileRocket_NoRegister()
{
	return AProjectileRocket::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectileRocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/ProjectileRocket.h" },
		{ "ModuleRelativePath", "Public/Weapon/ProjectileRocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLoop_MetaData[] = {
		{ "Category", "ProjectileRocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//FX\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/ProjectileRocket.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLoopComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/ProjectileRocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLoopAttenuation_MetaData[] = {
		{ "Category", "ProjectileRocket" },
		{ "ModuleRelativePath", "Public/Weapon/ProjectileRocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketMovementComponent_MetaData[] = {
		{ "Category", "ProjectileRocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Components\n//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/ProjectileRocket.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileLoop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileLoopComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileLoopAttenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketMovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileRocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoop = { "ProjectileLoop", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileRocket, ProjectileLoop), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLoop_MetaData), NewProp_ProjectileLoop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopComponent = { "ProjectileLoopComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileRocket, ProjectileLoopComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLoopComponent_MetaData), NewProp_ProjectileLoopComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopAttenuation = { "ProjectileLoopAttenuation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileRocket, ProjectileLoopAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLoopAttenuation_MetaData), NewProp_ProjectileLoopAttenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_RocketMovementComponent = { "RocketMovementComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileRocket, RocketMovementComponent), Z_Construct_UClass_URocketMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketMovementComponent_MetaData), NewProp_RocketMovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileRocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_RocketMovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileRocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileRocket_Statics::ClassParams = {
	&AProjectileRocket::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectileRocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileRocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileRocket()
{
	if (!Z_Registration_Info_UClass_AProjectileRocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileRocket.OuterSingleton, Z_Construct_UClass_AProjectileRocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileRocket.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileRocket);
AProjectileRocket::~AProjectileRocket() {}
// ********** End Class AProjectileRocket **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileRocket, AProjectileRocket::StaticClass, TEXT("AProjectileRocket"), &Z_Registration_Info_UClass_AProjectileRocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileRocket), 2729347533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h__Script_Blaster_653618669(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_ProjectileRocket_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
