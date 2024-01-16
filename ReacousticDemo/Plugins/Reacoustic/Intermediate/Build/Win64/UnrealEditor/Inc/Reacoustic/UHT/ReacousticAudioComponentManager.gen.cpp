// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticAudioComponentManager.h"
#include "ReacousticSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticAudioComponentManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticAudioComponentManager();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticAudioComponentManager_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSubsystemComponent();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	void UReacousticAudioComponentManager::StaticRegisterNativesUReacousticAudioComponentManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticAudioComponentManager);
	UClass* Z_Construct_UClass_UReacousticAudioComponentManager_NoRegister()
	{
		return UReacousticAudioComponentManager::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticAudioComponentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableAudioComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAudioComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableAudioComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAudioComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAudioComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAudioComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticAudioComponentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReacousticSubsystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticAudioComponentManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticAudioComponentManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReacousticAudioComponentManager.h" },
		{ "ModuleRelativePath", "Public/ReacousticAudioComponentManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_AvailableAudioComponents_Inner = { "AvailableAudioComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_AvailableAudioComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pool of AudioComponent instances.\n\x09 *  We pre populate the pool at initialization, and keep the pool size fixed during runtime.\n\x09 *  This means that the array can contain with nullptrs, always check each element before using. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReacousticAudioComponentManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pool of AudioComponent instances.\nWe pre populate the pool at initialization, and keep the pool size fixed during runtime.\nThis means that the array can contain with nullptrs, always check each element before using." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_AvailableAudioComponents = { "AvailableAudioComponents", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticAudioComponentManager, AvailableAudioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_AvailableAudioComponents_MetaData), Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_AvailableAudioComponents_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_ActiveAudioComponents_Inner = { "ActiveAudioComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_ActiveAudioComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of AudioComponent instances that are currently playing. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReacousticAudioComponentManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of AudioComponent instances that are currently playing." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_ActiveAudioComponents = { "ActiveAudioComponents", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticAudioComponentManager, ActiveAudioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_ActiveAudioComponents_MetaData), Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_ActiveAudioComponents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticAudioComponentManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_AvailableAudioComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_AvailableAudioComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_ActiveAudioComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticAudioComponentManager_Statics::NewProp_ActiveAudioComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticAudioComponentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticAudioComponentManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticAudioComponentManager_Statics::ClassParams = {
		&UReacousticAudioComponentManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReacousticAudioComponentManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticAudioComponentManager_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticAudioComponentManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticAudioComponentManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticAudioComponentManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticAudioComponentManager()
	{
		if (!Z_Registration_Info_UClass_UReacousticAudioComponentManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticAudioComponentManager.OuterSingleton, Z_Construct_UClass_UReacousticAudioComponentManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticAudioComponentManager.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticAudioComponentManager>()
	{
		return UReacousticAudioComponentManager::StaticClass();
	}
	UReacousticAudioComponentManager::UReacousticAudioComponentManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticAudioComponentManager);
	UReacousticAudioComponentManager::~UReacousticAudioComponentManager() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticAudioComponentManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticAudioComponentManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticAudioComponentManager, UReacousticAudioComponentManager::StaticClass, TEXT("UReacousticAudioComponentManager"), &Z_Registration_Info_UClass_UReacousticAudioComponentManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticAudioComponentManager), 1787027194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticAudioComponentManager_h_3256623251(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticAudioComponentManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticAudioComponentManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
