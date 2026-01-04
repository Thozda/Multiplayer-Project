// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/InteractWithCrosshairsInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractWithCrosshairsInterface() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface();
BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractWithCrosshairsInterface *************************************
void UInteractWithCrosshairsInterface::StaticRegisterNativesUInteractWithCrosshairsInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractWithCrosshairsInterface;
UClass* UInteractWithCrosshairsInterface::GetPrivateStaticClass()
{
	using TClass = UInteractWithCrosshairsInterface;
	if (!Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractWithCrosshairsInterface"),
			Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.InnerSingleton,
			StaticRegisterNativesUInteractWithCrosshairsInterface,
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
	return Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister()
{
	return UInteractWithCrosshairsInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractWithCrosshairsInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractWithCrosshairsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::ClassParams = {
	&UInteractWithCrosshairsInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface()
{
	if (!Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.OuterSingleton, Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.OuterSingleton;
}
UInteractWithCrosshairsInterface::UInteractWithCrosshairsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractWithCrosshairsInterface);
// ********** End Interface UInteractWithCrosshairsInterface ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractWithCrosshairsInterface, UInteractWithCrosshairsInterface::StaticClass, TEXT("UInteractWithCrosshairsInterface"), &Z_Registration_Info_UClass_UInteractWithCrosshairsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractWithCrosshairsInterface), 287330286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h__Script_Blaster_1563452943(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Interfaces_InteractWithCrosshairsInterface_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
