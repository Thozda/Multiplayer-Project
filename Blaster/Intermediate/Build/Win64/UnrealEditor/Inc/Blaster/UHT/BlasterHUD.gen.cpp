// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUD/BlasterHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlasterHUD() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD();
BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
BLASTER_API UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHUDPackage *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHUDPackage;
class UScriptStruct* FHUDPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHUDPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHUDPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUDPackage, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("HUDPackage"));
	}
	return Z_Registration_Info_UScriptStruct_FHUDPackage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHUDPackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HUD/BlasterHUD.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUDPackage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUDPackage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	nullptr,
	&NewStructOps,
	"HUDPackage",
	nullptr,
	0,
	sizeof(FHUDPackage),
	alignof(FHUDPackage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage()
{
	if (!Z_Registration_Info_UScriptStruct_FHUDPackage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHUDPackage.InnerSingleton, Z_Construct_UScriptStruct_FHUDPackage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHUDPackage.InnerSingleton;
}
// ********** End ScriptStruct FHUDPackage *********************************************************

// ********** Begin Class ABlasterHUD **************************************************************
void ABlasterHUD::StaticRegisterNativesABlasterHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlasterHUD;
UClass* ABlasterHUD::GetPrivateStaticClass()
{
	using TClass = ABlasterHUD;
	if (!Z_Registration_Info_UClass_ABlasterHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlasterHUD"),
			Z_Registration_Info_UClass_ABlasterHUD.InnerSingleton,
			StaticRegisterNativesABlasterHUD,
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
	return Z_Registration_Info_UClass_ABlasterHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlasterHUD_NoRegister()
{
	return ABlasterHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlasterHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/BlasterHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/BlasterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlayClass_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/BlasterHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairSpreadMax_MetaData[] = {
		{ "Category", "BlasterHUD" },
		{ "ModuleRelativePath", "Public/HUD/BlasterHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterOverlayClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairSpreadMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass = { "CharacterOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CharacterOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOverlayClass_MetaData), NewProp_CharacterOverlayClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOverlay_MetaData), NewProp_CharacterOverlay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax = { "CrosshairSpreadMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterHUD, CrosshairSpreadMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairSpreadMax_MetaData), NewProp_CrosshairSpreadMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CharacterOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterHUD_Statics::NewProp_CrosshairSpreadMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterHUD_Statics::ClassParams = {
	&ABlasterHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlasterHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterHUD()
{
	if (!Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton, Z_Construct_UClass_ABlasterHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterHUD.OuterSingleton;
}
ABlasterHUD::ABlasterHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterHUD);
ABlasterHUD::~ABlasterHUD() {}
// ********** End Class ABlasterHUD ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h__Script_Blaster_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHUDPackage::StaticStruct, Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps, TEXT("HUDPackage"), &Z_Registration_Info_UScriptStruct_FHUDPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHUDPackage), 3572198540U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterHUD, ABlasterHUD::StaticClass, TEXT("ABlasterHUD"), &Z_Registration_Info_UClass_ABlasterHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterHUD), 2637766526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h__Script_Blaster_2249498830(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h__Script_Blaster_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h__Script_Blaster_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_HUD_BlasterHUD_h__Script_Blaster_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
