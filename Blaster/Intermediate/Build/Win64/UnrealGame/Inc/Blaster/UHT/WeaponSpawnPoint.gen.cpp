// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/WeaponSpawnPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponSpawnPoint() {}

// ********** Begin Cross Module References ********************************************************
BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BLASTER_API UClass* Z_Construct_UClass_AWeaponSpawnPoint();
BLASTER_API UClass* Z_Construct_UClass_AWeaponSpawnPoint_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeaponSpawnPoint Function StartSpawnWeaponTimer *************************
struct Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics
{
	struct WeaponSpawnPoint_eventStartSpawnWeaponTimer_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponSpawnPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponSpawnPoint_eventStartSpawnWeaponTimer_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponSpawnPoint, nullptr, "StartSpawnWeaponTimer", Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::WeaponSpawnPoint_eventStartSpawnWeaponTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::WeaponSpawnPoint_eventStartSpawnWeaponTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponSpawnPoint::execStartSpawnWeaponTimer)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSpawnWeaponTimer(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class AWeaponSpawnPoint Function StartSpawnWeaponTimer ***************************

// ********** Begin Class AWeaponSpawnPoint ********************************************************
void AWeaponSpawnPoint::StaticRegisterNativesAWeaponSpawnPoint()
{
	UClass* Class = AWeaponSpawnPoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartSpawnWeaponTimer", &AWeaponSpawnPoint::execStartSpawnWeaponTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeaponSpawnPoint;
UClass* AWeaponSpawnPoint::GetPrivateStaticClass()
{
	using TClass = AWeaponSpawnPoint;
	if (!Z_Registration_Info_UClass_AWeaponSpawnPoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponSpawnPoint"),
			Z_Registration_Info_UClass_AWeaponSpawnPoint.InnerSingleton,
			StaticRegisterNativesAWeaponSpawnPoint,
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
	return Z_Registration_Info_UClass_AWeaponSpawnPoint.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeaponSpawnPoint_NoRegister()
{
	return AWeaponSpawnPoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeaponSpawnPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponSpawnPoint.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClasses_MetaData[] = {
		{ "Category", "WeaponSpawnPoint" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnWeaponTimeMin_MetaData[] = {
		{ "Category", "WeaponSpawnPoint" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponSpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnWeaponTimeMax_MetaData[] = {
		{ "Category", "WeaponSpawnPoint" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponSpawnPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnWeaponTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnWeaponTimeMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponSpawnPoint_StartSpawnWeaponTimer, "StartSpawnWeaponTimer" }, // 4015954803
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponSpawnPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_WeaponClasses_Inner = { "WeaponClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_WeaponClasses = { "WeaponClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponSpawnPoint, WeaponClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClasses_MetaData), NewProp_WeaponClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_SpawnedWeapon = { "SpawnedWeapon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponSpawnPoint, SpawnedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedWeapon_MetaData), NewProp_SpawnedWeapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_SpawnWeaponTimeMin = { "SpawnWeaponTimeMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponSpawnPoint, SpawnWeaponTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnWeaponTimeMin_MetaData), NewProp_SpawnWeaponTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_SpawnWeaponTimeMax = { "SpawnWeaponTimeMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponSpawnPoint, SpawnWeaponTimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnWeaponTimeMax_MetaData), NewProp_SpawnWeaponTimeMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponSpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_WeaponClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_WeaponClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_SpawnedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_SpawnWeaponTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSpawnPoint_Statics::NewProp_SpawnWeaponTimeMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSpawnPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponSpawnPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSpawnPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponSpawnPoint_Statics::ClassParams = {
	&AWeaponSpawnPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponSpawnPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSpawnPoint_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponSpawnPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponSpawnPoint()
{
	if (!Z_Registration_Info_UClass_AWeaponSpawnPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponSpawnPoint.OuterSingleton, Z_Construct_UClass_AWeaponSpawnPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponSpawnPoint.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponSpawnPoint);
AWeaponSpawnPoint::~AWeaponSpawnPoint() {}
// ********** End Class AWeaponSpawnPoint **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h__Script_Blaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponSpawnPoint, AWeaponSpawnPoint::StaticClass, TEXT("AWeaponSpawnPoint"), &Z_Registration_Info_UClass_AWeaponSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponSpawnPoint), 3786399540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h__Script_Blaster_3559348258(TEXT("/Script/Blaster"),
	Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h__Script_Blaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Source_Blaster_Public_Weapon_WeaponSpawnPoint_h__Script_Blaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
