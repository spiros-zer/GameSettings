// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSettingValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameSettingValue() {}

// ********** Begin Cross Module References ********************************************************
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValue();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameSettingValue ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameSettingValue;
UClass* UGameSettingValue::GetPrivateStaticClass()
{
	using TClass = UGameSettingValue;
	if (!Z_Registration_Info_UClass_UGameSettingValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameSettingValue"),
			Z_Registration_Info_UClass_UGameSettingValue.InnerSingleton,
			StaticRegisterNativesUGameSettingValue,
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
	return Z_Registration_Info_UClass_UGameSettingValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameSettingValue_NoRegister()
{
	return UGameSettingValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameSettingValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The base class for all settings that are conceptually a value, that can be \n * changed, and thus reset or restored to their initial value.\n */" },
#endif
		{ "IncludePath", "GameSettingValue.h" },
		{ "ModuleRelativePath", "Public/GameSettingValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base class for all settings that are conceptually a value, that can be\nchanged, and thus reset or restored to their initial value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGameSettingValue constinit property declarations ************************
// ********** End Class UGameSettingValue constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameSettingValue_Statics
UObject* (*const Z_Construct_UClass_UGameSettingValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingValue_Statics::ClassParams = {
	&UGameSettingValue::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSettingValue_Statics::Class_MetaDataParams)
};
void UGameSettingValue::StaticRegisterNativesUGameSettingValue()
{
}
UClass* Z_Construct_UClass_UGameSettingValue()
{
	if (!Z_Registration_Info_UClass_UGameSettingValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingValue.OuterSingleton, Z_Construct_UClass_UGameSettingValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSettingValue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameSettingValue);
UGameSettingValue::~UGameSettingValue() {}
// ********** End Class UGameSettingValue **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingValue_h__Script_GameSettings_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingValue, UGameSettingValue::StaticClass, TEXT("UGameSettingValue"), &Z_Registration_Info_UClass_UGameSettingValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingValue), 1731564765U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingValue_h__Script_GameSettings_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingValue_h__Script_GameSettings_3807932025{
	TEXT("/Script/GameSettings"),
	Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingValue_h__Script_GameSettings_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingValue_h__Script_GameSettings_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
