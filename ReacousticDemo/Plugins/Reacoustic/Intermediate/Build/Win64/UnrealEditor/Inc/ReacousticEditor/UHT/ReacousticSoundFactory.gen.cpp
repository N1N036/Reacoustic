// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/ReacousticSoundFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSoundFactory() {}
// Cross Module References
	REACOUSTICEDITOR_API UClass* Z_Construct_UClass_UReacousticSoundFactory();
	REACOUSTICEDITOR_API UClass* Z_Construct_UClass_UReacousticSoundFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ReacousticEditor();
// End Cross Module References
	void UReacousticSoundFactory::StaticRegisterNativesUReacousticSoundFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSoundFactory);
	UClass* Z_Construct_UClass_UReacousticSoundFactory_NoRegister()
	{
		return UReacousticSoundFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSoundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSoundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ReacousticEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReacousticSoundFactory.h" },
		{ "ModuleRelativePath", "Public/ReacousticSoundFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSoundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSoundFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSoundFactory_Statics::ClassParams = {
		&UReacousticSoundFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSoundFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReacousticSoundFactory()
	{
		if (!Z_Registration_Info_UClass_UReacousticSoundFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSoundFactory.OuterSingleton, Z_Construct_UClass_UReacousticSoundFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSoundFactory.OuterSingleton;
	}
	template<> REACOUSTICEDITOR_API UClass* StaticClass<UReacousticSoundFactory>()
	{
		return UReacousticSoundFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSoundFactory);
	UReacousticSoundFactory::~UReacousticSoundFactory() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSoundFactory, UReacousticSoundFactory::StaticClass, TEXT("UReacousticSoundFactory"), &Z_Registration_Info_UClass_UReacousticSoundFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSoundFactory), 133560442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundFactory_h_3758300491(TEXT("/Script/ReacousticEditor"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
