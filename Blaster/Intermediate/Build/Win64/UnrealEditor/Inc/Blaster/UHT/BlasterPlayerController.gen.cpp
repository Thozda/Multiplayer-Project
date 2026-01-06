// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerController/BlasterPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterPlayerController() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController();
BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABlasterPlayerController *************************************************
void ABlasterPlayerController::StaticRegisterNativesABlasterPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlasterPlayerController;
UClass* ABlasterPlayerController::GetPrivateStaticClass()
{
	using TClass = ABlasterPlayerController;
	if (!Z_Registration_Info_UClass_ABlasterPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterPlayerController"),
			Z_Registration_Info_UClass_ABlasterPlayerController.InnerSingleton,
			StaticRegisterNativesABlasterPlayerController,
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
	return Z_Registration_Info_UClass_ABlasterPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister()
{
	return ABlasterPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlasterPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BlasterPlayerController.h" },
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerController/BlasterPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD = { "BlasterHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterPlayerController, BlasterHUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterHUD_MetaData), NewProp_BlasterHUD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams = {
	&ABlasterPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterPlayerController()
{
	if (!Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton, Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton;
}
ABlasterPlayerController::ABlasterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerController);
ABlasterPlayerController::~ABlasterPlayerController() {}
// ********** End Class ABlasterPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerController, ABlasterPlayerController::StaticClass, TEXT("ABlasterPlayerController"), &Z_Registration_Info_UClass_ABlasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerController), 1155166645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_14948457(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_PlayerController_BlasterPlayerController_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
