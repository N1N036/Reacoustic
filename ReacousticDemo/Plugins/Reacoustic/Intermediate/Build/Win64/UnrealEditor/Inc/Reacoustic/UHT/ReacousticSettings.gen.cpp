// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticProjectSettings();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	void UReacousticProjectSettings::StaticRegisterNativesUReacousticProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticProjectSettings);
	UClass* Z_Construct_UClass_UReacousticProjectSettings_NoRegister()
	{
		return UReacousticProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoEnableGenerateHitEvents_MetaData[];
#endif
		static void NewProp_AutoEnableGenerateHitEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoEnableGenerateHitEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAndDropAssetSetsMeshAssociation_MetaData[];
#endif
		static void NewProp_DragAndDropAssetSetsMeshAssociation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DragAndDropAssetSetsMeshAssociation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReacousticComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReacousticComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticProjectSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Reacoustic" },
		{ "IncludePath", "ReacousticSettings.h" },
		{ "ModuleRelativePath", "Public/ReacousticSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_AutoEnableGenerateHitEvents_MetaData[] = {
		{ "Category", "ReacousticProjectSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If there's a Reacoustic component correctly set up, it should enable generate hit events to the static mesh.\n\x09 *There's no parent static mesh, all static meshes of the actor will generate hit events.\n\x09 * If the component is childed to a specific static mesh component in the actor, it will listen to that static mesh only.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If there's a Reacoustic component correctly set up, it should enable generate hit events to the static mesh.\nThere's no parent static mesh, all static meshes of the actor will generate hit events.\nIf the component is childed to a specific static mesh component in the actor, it will listen to that static mesh only." },
#endif
	};
#endif
	void Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_AutoEnableGenerateHitEvents_SetBit(void* Obj)
	{
		((UReacousticProjectSettings*)Obj)->AutoEnableGenerateHitEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_AutoEnableGenerateHitEvents = { "AutoEnableGenerateHitEvents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReacousticProjectSettings), &Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_AutoEnableGenerateHitEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_AutoEnableGenerateHitEvents_MetaData), Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_AutoEnableGenerateHitEvents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_DragAndDropAssetSetsMeshAssociation_MetaData[] = {
		{ "Category", "ReacousticProjectSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When drag and dropping a reacoustic sound onto an actor, should it automatically set the static mesh association?\n\x09 *Otherwise it will add it to the actor instance in the level.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When drag and dropping a reacoustic sound onto an actor, should it automatically set the static mesh association?\nOtherwise it will add it to the actor instance in the level." },
#endif
	};
#endif
	void Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_DragAndDropAssetSetsMeshAssociation_SetBit(void* Obj)
	{
		((UReacousticProjectSettings*)Obj)->DragAndDropAssetSetsMeshAssociation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_DragAndDropAssetSetsMeshAssociation = { "DragAndDropAssetSetsMeshAssociation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReacousticProjectSettings), &Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_DragAndDropAssetSetsMeshAssociation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_DragAndDropAssetSetsMeshAssociation_MetaData), Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_DragAndDropAssetSetsMeshAssociation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_ReacousticComponent_MetaData[] = {
		{ "AllowedClasses", "UReacousticComponent" },
		{ "Category", "ReacousticProjectSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override this if you want to add aditional logic to a child blueprint of ReacousticComponent */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override this if you want to add aditional logic to a child blueprint of ReacousticComponent" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_ReacousticComponent = { "ReacousticComponent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticProjectSettings, ReacousticComponent), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_ReacousticComponent_MetaData), Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_ReacousticComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_AutoEnableGenerateHitEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_DragAndDropAssetSetsMeshAssociation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticProjectSettings_Statics::NewProp_ReacousticComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticProjectSettings_Statics::ClassParams = {
		&UReacousticProjectSettings::StaticClass,
		"Reacoustic",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReacousticProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticProjectSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticProjectSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UReacousticProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticProjectSettings.OuterSingleton, Z_Construct_UClass_UReacousticProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticProjectSettings.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticProjectSettings>()
	{
		return UReacousticProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticProjectSettings);
	UReacousticProjectSettings::~UReacousticProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticProjectSettings, UReacousticProjectSettings::StaticClass, TEXT("UReacousticProjectSettings"), &Z_Registration_Info_UClass_UReacousticProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticProjectSettings), 757309471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSettings_h_3733245716(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
