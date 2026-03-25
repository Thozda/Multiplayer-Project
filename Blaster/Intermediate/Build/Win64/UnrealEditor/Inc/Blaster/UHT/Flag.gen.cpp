// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/Flag.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFlag() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AFlag();
BLASTER_API UClass* Z_Construct_UClass_AFlag_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeapon();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFlag ********************************************************************
void AFlag::StaticRegisterNativesAFlag()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFlag;
UClass* AFlag::GetPrivateStaticClass()
{
	using TClass = AFlag;
	if (!Z_Registration_Info_UClass_AFlag.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Flag"),
			Z_Registration_Info_UClass_AFlag.InnerSingleton,
			StaticRegisterNativesAFlag,
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
	return Z_Registration_Info_UClass_AFlag.InnerSingleton;
}
UClass* Z_Construct_UClass_AFlag_NoRegister()
{
	return AFlag::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/Flag.h" },
		{ "ModuleRelativePath", "Public/Weapon/Flag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagMesh_MetaData[] = {
		{ "Category", "Flag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Flag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagMeshClass_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Weapon/Flag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FlagMeshClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh = { "FlagMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlag, FlagMesh), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagMesh_MetaData), NewProp_FlagMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlag_Statics::NewProp_FlagMeshClass = { "FlagMeshClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlag, FlagMeshClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagMeshClass_MetaData), NewProp_FlagMeshClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlag_Statics::NewProp_FlagMeshClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlag_Statics::ClassParams = {
	&AFlag::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFlag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlag()
{
	if (!Z_Registration_Info_UClass_AFlag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlag.OuterSingleton, Z_Construct_UClass_AFlag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlag.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlag);
AFlag::~AFlag() {}
// ********** End Class AFlag **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Flag_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlag, AFlag::StaticClass, TEXT("AFlag"), &Z_Registration_Info_UClass_AFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlag), 3813876045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Flag_h__Script_Blaster_654359495(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Flag_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_Flag_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
