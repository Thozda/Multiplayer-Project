// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUD/CharacterOverlay.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterOverlay() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay();
BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterOverlay ********************************************************
void UCharacterOverlay::StaticRegisterNativesUCharacterOverlay()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterOverlay;
UClass* UCharacterOverlay::GetPrivateStaticClass()
{
	using TClass = UCharacterOverlay;
	if (!Z_Registration_Info_UClass_UCharacterOverlay.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterOverlay"),
			Z_Registration_Info_UClass_UCharacterOverlay.InnerSingleton,
			StaticRegisterNativesUCharacterOverlay,
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
	return Z_Registration_Info_UClass_UCharacterOverlay.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister()
{
	return UCharacterOverlay::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/CharacterOverlay.h" },
		{ "ModuleRelativePath", "Public/HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefeatsAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CharacterOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmoAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CharacterOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefeatsAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedAmmoAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthText_MetaData), NewProp_HealthText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmount = { "ScoreAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, ScoreAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreAmount_MetaData), NewProp_ScoreAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatsAmount = { "DefeatsAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, DefeatsAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefeatsAmount_MetaData), NewProp_DefeatsAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmount = { "WeaponAmmoAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, WeaponAmmoAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmoAmount_MetaData), NewProp_WeaponAmmoAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmount = { "CarriedAmmoAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterOverlay, CarriedAmmoAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedAmmoAmount_MetaData), NewProp_CarriedAmmoAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatsAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams = {
	&UCharacterOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterOverlay()
{
	if (!Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton, Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton;
}
UCharacterOverlay::UCharacterOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterOverlay);
UCharacterOverlay::~UCharacterOverlay() {}
// ********** End Class UCharacterOverlay **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterOverlay, UCharacterOverlay::StaticClass, TEXT("UCharacterOverlay"), &Z_Registration_Info_UClass_UCharacterOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterOverlay), 2118687378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h__Script_Blaster_3977783367(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_CharacterOverlay_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
