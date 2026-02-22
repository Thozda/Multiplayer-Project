// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/Shotgun.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShotgun() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AHitScanWeapon();
BLASTER_API UClass* Z_Construct_UClass_AShotgun();
BLASTER_API UClass* Z_Construct_UClass_AShotgun_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShotgun *****************************************************************
void AShotgun::StaticRegisterNativesAShotgun()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShotgun;
UClass* AShotgun::GetPrivateStaticClass()
{
	using TClass = AShotgun;
	if (!Z_Registration_Info_UClass_AShotgun.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Shotgun"),
			Z_Registration_Info_UClass_AShotgun.InnerSingleton,
			StaticRegisterNativesAShotgun,
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
	return Z_Registration_Info_UClass_AShotgun.InnerSingleton;
}
UClass* Z_Construct_UClass_AShotgun_NoRegister()
{
	return AShotgun::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShotgun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/Shotgun.h" },
		{ "ModuleRelativePath", "Public/Weapon/Shotgun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPellets_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Public/Weapon/Shotgun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPellets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_NumberOfPellets = { "NumberOfPellets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShotgun, NumberOfPellets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPellets_MetaData), NewProp_NumberOfPellets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotgun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_NumberOfPellets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShotgun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHitScanWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgun_Statics::ClassParams = {
	&AShotgun::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShotgun_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams), Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShotgun()
{
	if (!Z_Registration_Info_UClass_AShotgun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotgun.OuterSingleton, Z_Construct_UClass_AShotgun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShotgun.OuterSingleton;
}
AShotgun::AShotgun() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgun);
AShotgun::~AShotgun() {}
// ********** End Class AShotgun *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShotgun, AShotgun::StaticClass, TEXT("AShotgun"), &Z_Registration_Info_UClass_AShotgun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgun), 2866100122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h__Script_Blaster_3518336013(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Shotgun_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
