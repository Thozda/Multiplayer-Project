// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pickups/ShieldPickup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShieldPickup() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_APickup();
BLASTER_API UClass* Z_Construct_UClass_AShieldPickup();
BLASTER_API UClass* Z_Construct_UClass_AShieldPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShieldPickup ************************************************************
void AShieldPickup::StaticRegisterNativesAShieldPickup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShieldPickup;
UClass* AShieldPickup::GetPrivateStaticClass()
{
	using TClass = AShieldPickup;
	if (!Z_Registration_Info_UClass_AShieldPickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShieldPickup"),
			Z_Registration_Info_UClass_AShieldPickup.InnerSingleton,
			StaticRegisterNativesAShieldPickup,
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
	return Z_Registration_Info_UClass_AShieldPickup.InnerSingleton;
}
UClass* Z_Construct_UClass_AShieldPickup_NoRegister()
{
	return AShieldPickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShieldPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickups/ShieldPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/ShieldPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldReplenishAmount_MetaData[] = {
		{ "Category", "ShieldPickup" },
		{ "ModuleRelativePath", "Public/Pickups/ShieldPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldReplenishTime_MetaData[] = {
		{ "Category", "ShieldPickup" },
		{ "ModuleRelativePath", "Public/Pickups/ShieldPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldReplenishAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldReplenishTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishAmount = { "ShieldReplenishAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldPickup, ShieldReplenishAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldReplenishAmount_MetaData), NewProp_ShieldReplenishAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishTime = { "ShieldReplenishTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldPickup, ShieldReplenishTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldReplenishTime_MetaData), NewProp_ShieldReplenishTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShieldPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldPickup_Statics::ClassParams = {
	&AShieldPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShieldPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AShieldPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShieldPickup()
{
	if (!Z_Registration_Info_UClass_AShieldPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldPickup.OuterSingleton, Z_Construct_UClass_AShieldPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShieldPickup.OuterSingleton;
}
AShieldPickup::AShieldPickup() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldPickup);
AShieldPickup::~AShieldPickup() {}
// ********** End Class AShieldPickup **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_ShieldPickup_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShieldPickup, AShieldPickup::StaticClass, TEXT("AShieldPickup"), &Z_Registration_Info_UClass_AShieldPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldPickup), 4070198012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_ShieldPickup_h__Script_Blaster_638948839(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_ShieldPickup_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Pickups_ShieldPickup_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
