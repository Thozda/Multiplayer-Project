// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPTesting_init() {}
	MPTESTING_API UFunction* Z_Construct_UDelegateFunction_MPTesting_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MPTesting;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MPTesting()
	{
		if (!Z_Registration_Info_UPackage__Script_MPTesting.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MPTesting_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MPTesting",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0B6343F6,
				0x19A3CCBB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MPTesting.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MPTesting.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MPTesting(Z_Construct_UPackage__Script_MPTesting, TEXT("/Script/MPTesting"), Z_Registration_Info_UPackage__Script_MPTesting, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0B6343F6, 0x19A3CCBB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
