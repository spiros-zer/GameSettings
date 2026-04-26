// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettings_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	GAMESETTINGS_API UFunction* Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameSettings;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameSettings()
	{
		if (!Z_Registration_Info_UPackage__Script_GameSettings.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/GameSettings",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xB2CA557B,
			0x26465116,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameSettings.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_GameSettings.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameSettings(Z_Construct_UPackage__Script_GameSettings, TEXT("/Script/GameSettings"), Z_Registration_Info_UPackage__Script_GameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB2CA557B, 0x26465116));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
