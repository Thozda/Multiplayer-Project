// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/RocketMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRocketMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent();
BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URocketMovementComponent *************************************************
void URocketMovementComponent::StaticRegisterNativesURocketMovementComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URocketMovementComponent;
UClass* URocketMovementComponent::GetPrivateStaticClass()
{
	using TClass = URocketMovementComponent;
	if (!Z_Registration_Info_UClass_URocketMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RocketMovementComponent"),
			Z_Registration_Info_UClass_URocketMovementComponent.InnerSingleton,
			StaticRegisterNativesURocketMovementComponent,
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
	return Z_Registration_Info_UClass_URocketMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister()
{
	return URocketMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URocketMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/RocketMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/RocketMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URocketMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URocketMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URocketMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URocketMovementComponent_Statics::ClassParams = {
	&URocketMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URocketMovementComponent()
{
	if (!Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton, Z_Construct_UClass_URocketMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton;
}
URocketMovementComponent::URocketMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URocketMovementComponent);
URocketMovementComponent::~URocketMovementComponent() {}
// ********** End Class URocketMovementComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URocketMovementComponent, URocketMovementComponent::StaticClass, TEXT("URocketMovementComponent"), &Z_Registration_Info_UClass_URocketMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URocketMovementComponent), 2413065104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h__Script_Blaster_2438504675(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_RocketMovementComponent_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
