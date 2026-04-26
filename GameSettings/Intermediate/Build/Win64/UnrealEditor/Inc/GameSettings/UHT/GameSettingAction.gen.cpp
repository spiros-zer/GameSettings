// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSettingAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameSettingAction() {}

// ********** Begin Cross Module References ********************************************************
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingAction();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameSettingAction *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameSettingAction;
UClass* UGameSettingAction::GetPrivateStaticClass()
{
	using TClass = UGameSettingAction;
	if (!Z_Registration_Info_UClass_UGameSettingAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameSettingAction"),
			Z_Registration_Info_UClass_UGameSettingAction.InnerSingleton,
			StaticRegisterNativesUGameSettingAction,
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
	return Z_Registration_Info_UClass_UGameSettingAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameSettingAction_NoRegister()
{
	return UGameSettingAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameSettingAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameSettingAction.h" },
		{ "ModuleRelativePath", "Public/GameSettingAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGameSettingAction constinit property declarations ***********************
// ********** End Class UGameSettingAction constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameSettingAction_Statics
UObject* (*const Z_Construct_UClass_UGameSettingAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingAction_Statics::ClassParams = {
	&UGameSettingAction::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSettingAction_Statics::Class_MetaDataParams)
};
void UGameSettingAction::StaticRegisterNativesUGameSettingAction()
{
}
UClass* Z_Construct_UClass_UGameSettingAction()
{
	if (!Z_Registration_Info_UClass_UGameSettingAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingAction.OuterSingleton, Z_Construct_UClass_UGameSettingAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSettingAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameSettingAction);
UGameSettingAction::~UGameSettingAction() {}
// ********** End Class UGameSettingAction *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingAction_h__Script_GameSettings_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingAction, UGameSettingAction::StaticClass, TEXT("UGameSettingAction"), &Z_Registration_Info_UClass_UGameSettingAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingAction), 1001679210U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingAction_h__Script_GameSettings_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingAction_h__Script_GameSettings_3989940426{
	TEXT("/Script/GameSettings"),
	Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingAction_h__Script_GameSettings_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingAction_h__Script_GameSettings_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
