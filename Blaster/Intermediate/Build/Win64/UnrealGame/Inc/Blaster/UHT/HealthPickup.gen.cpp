// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pickups/HealthPickup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHealthPickup() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AHealthPickup();
BLASTER_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_APickup();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHealthPickup ************************************************************
void AHealthPickup::StaticRegisterNativesAHealthPickup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHealthPickup;
UClass* AHealthPickup::GetPrivateStaticClass()
{
	using TClass = AHealthPickup;
	if (!Z_Registration_Info_UClass_AHealthPickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HealthPickup"),
			Z_Registration_Info_UClass_AHealthPickup.InnerSingleton,
			StaticRegisterNativesAHealthPickup,
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
	return Z_Registration_Info_UClass_AHealthPickup.InnerSingleton;
}
UClass* Z_Construct_UClass_AHealthPickup_NoRegister()
{
	return AHealthPickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHealthPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickups/HealthPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/HealthPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[] = {
		{ "Category", "HealthPickup" },
		{ "ModuleRelativePath", "Public/Pickups/HealthPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealingTime_MetaData[] = {
		{ "Category", "HealthPickup" },
		{ "ModuleRelativePath", "Public/Pickups/HealthPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPickup, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAmount_MetaData), NewProp_HealAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime = { "HealingTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPickup, HealingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealingTime_MetaData), NewProp_HealingTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickup_Statics::ClassParams = {
	&AHealthPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHealthPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHealthPickup()
{
	if (!Z_Registration_Info_UClass_AHealthPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPickup.OuterSingleton, Z_Construct_UClass_AHealthPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHealthPickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickup);
AHealthPickup::~AHealthPickup() {}
// ********** End Class AHealthPickup **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPickup, AHealthPickup::StaticClass, TEXT("AHealthPickup"), &Z_Registration_Info_UClass_AHealthPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPickup), 231227019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h__Script_Blaster_3996974244(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_HealthPickup_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
