// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSettingCollection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameSettingCollection() {}

// ********** Begin Cross Module References ********************************************************
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting_NoRegister();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollection();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollection_NoRegister();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollectionPage();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollectionPage_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameSettingCollection ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameSettingCollection;
UClass* UGameSettingCollection::GetPrivateStaticClass()
{
	using TClass = UGameSettingCollection;
	if (!Z_Registration_Info_UClass_UGameSettingCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameSettingCollection"),
			Z_Registration_Info_UClass_UGameSettingCollection.InnerSingleton,
			StaticRegisterNativesUGameSettingCollection,
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
	return Z_Registration_Info_UClass_UGameSettingCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameSettingCollection_NoRegister()
{
	return UGameSettingCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameSettingCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------\n// UGameSettingCollection\n//--------------------------------------\n" },
#endif
		{ "IncludePath", "GameSettingCollection.h" },
		{ "ModuleRelativePath", "Public/GameSettingCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameSettingCollection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The settings owned by this collection. */" },
#endif
		{ "ModuleRelativePath", "Public/GameSettingCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The settings owned by this collection." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGameSettingCollection constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGameSettingCollection constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameSettingCollection_Statics

// ********** Begin Class UGameSettingCollection Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSettingCollection, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollection_Statics::PropPointers) < 2048);
// ********** End Class UGameSettingCollection Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UGameSettingCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSetting,
	(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingCollection_Statics::ClassParams = {
	&UGameSettingCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameSettingCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollection_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSettingCollection_Statics::Class_MetaDataParams)
};
void UGameSettingCollection::StaticRegisterNativesUGameSettingCollection()
{
}
UClass* Z_Construct_UClass_UGameSettingCollection()
{
	if (!Z_Registration_Info_UClass_UGameSettingCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingCollection.OuterSingleton, Z_Construct_UClass_UGameSettingCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSettingCollection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameSettingCollection);
UGameSettingCollection::~UGameSettingCollection() {}
// ********** End Class UGameSettingCollection *****************************************************

// ********** Begin Class UGameSettingCollectionPage ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameSettingCollectionPage;
UClass* UGameSettingCollectionPage::GetPrivateStaticClass()
{
	using TClass = UGameSettingCollectionPage;
	if (!Z_Registration_Info_UClass_UGameSettingCollectionPage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameSettingCollectionPage"),
			Z_Registration_Info_UClass_UGameSettingCollectionPage.InnerSingleton,
			StaticRegisterNativesUGameSettingCollectionPage,
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
	return Z_Registration_Info_UClass_UGameSettingCollectionPage.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameSettingCollectionPage_NoRegister()
{
	return UGameSettingCollectionPage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameSettingCollectionPage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------\n// UGameSettingCollectionPage\n//--------------------------------------\n" },
#endif
		{ "IncludePath", "GameSettingCollection.h" },
		{ "ModuleRelativePath", "Public/GameSettingCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameSettingCollectionPage" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGameSettingCollectionPage constinit property declarations ***************
// ********** End Class UGameSettingCollectionPage constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingCollectionPage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameSettingCollectionPage_Statics
UObject* (*const Z_Construct_UClass_UGameSettingCollectionPage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingCollection,
	(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollectionPage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingCollectionPage_Statics::ClassParams = {
	&UGameSettingCollectionPage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollectionPage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSettingCollectionPage_Statics::Class_MetaDataParams)
};
void UGameSettingCollectionPage::StaticRegisterNativesUGameSettingCollectionPage()
{
}
UClass* Z_Construct_UClass_UGameSettingCollectionPage()
{
	if (!Z_Registration_Info_UClass_UGameSettingCollectionPage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingCollectionPage.OuterSingleton, Z_Construct_UClass_UGameSettingCollectionPage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSettingCollectionPage.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameSettingCollectionPage);
UGameSettingCollectionPage::~UGameSettingCollectionPage() {}
// ********** End Class UGameSettingCollectionPage *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingCollection_h__Script_GameSettings_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingCollection, UGameSettingCollection::StaticClass, TEXT("UGameSettingCollection"), &Z_Registration_Info_UClass_UGameSettingCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingCollection), 2390481454U) },
		{ Z_Construct_UClass_UGameSettingCollectionPage, UGameSettingCollectionPage::StaticClass, TEXT("UGameSettingCollectionPage"), &Z_Registration_Info_UClass_UGameSettingCollectionPage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingCollectionPage), 3731219911U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingCollection_h__Script_GameSettings_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingCollection_h__Script_GameSettings_1418862912{
	TEXT("/Script/GameSettings"),
	Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingCollection_h__Script_GameSettings_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_spiro_Documents_Unreal_Projects_Ecifircas_Plugins_GameSettings_Source_Public_GameSettingCollection_h__Script_GameSettings_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
