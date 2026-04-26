// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Misc/GameSettingPressAnyKey.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameSettingPressAnyKey() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingPressAnyKey();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingPressAnyKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameSettingPressAnyKey **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameSettingPressAnyKey;
UClass* UGameSettingPressAnyKey::GetPrivateStaticClass()
{
	using TClass = UGameSettingPressAnyKey;
	if (!Z_Registration_Info_UClass_UGameSettingPressAnyKey.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameSettingPressAnyKey"),
			Z_Registration_Info_UClass_UGameSettingPressAnyKey.InnerSingleton,
			StaticRegisterNativesUGameSettingPressAnyKey,
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
	return Z_Registration_Info_UClass_UGameSettingPressAnyKey.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameSettingPressAnyKey_NoRegister()
{
	return UGameSettingPressAnyKey::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameSettingPressAnyKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Misc/GameSettingPressAnyKey.h" },
		{ "ModuleRelativePath", "Public/Widgets/Misc/GameSettingPressAnyKey.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGameSettingPressAnyKey constinit property declarations ******************
// ********** End Class UGameSettingPressAnyKey constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingPressAnyKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameSettingPressAnyKey_Statics
UObject* (*const Z_Construct_UClass_UGameSettingPressAnyKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPressAnyKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingPressAnyKey_Statics::ClassParams = {
	&UGameSettingPressAnyKey::StaticClass,
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
	0x00A810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPressAnyKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSettingPressAnyKey_Statics::Class_MetaDataParams)
};
void UGameSettingPressAnyKey::StaticRegisterNativesUGameSettingPressAnyKey()
{
}
UClass* Z_Construct_UClass_UGameSettingPressAnyKey()
{
	if (!Z_Registration_Info_UClass_UGameSettingPressAnyKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingPressAnyKey.OuterSingleton, Z_Construct_UClass_UGameSettingPressAnyKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSettingPressAnyKey.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameSettingPressAnyKey);
UGameSettingPressAnyKey::~UGameSettingPressAnyKey() {}
// ********** End Class UGameSettingPressAnyKey ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_Widgets_Misc_GameSettingPressAnyKey_h__Script_GameSettings_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingPressAnyKey, UGameSettingPressAnyKey::StaticClass, TEXT("UGameSettingPressAnyKey"), &Z_Registration_Info_UClass_UGameSettingPressAnyKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingPressAnyKey), 3591741925U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_Widgets_Misc_GameSettingPressAnyKey_h__Script_GameSettings_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_Widgets_Misc_GameSettingPressAnyKey_h__Script_GameSettings_3610923244{
	TEXT("/Script/GameSettings"),
	Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_Widgets_Misc_GameSettingPressAnyKey_h__Script_GameSettings_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_Widgets_Misc_GameSettingPressAnyKey_h__Script_GameSettings_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
