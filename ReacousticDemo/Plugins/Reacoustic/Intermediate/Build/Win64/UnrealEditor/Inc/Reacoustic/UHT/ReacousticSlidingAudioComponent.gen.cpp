// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticSlidingAudioComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSlidingAudioComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSlidingAudioComponent();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSlidingAudioComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	void UReacousticSlidingAudioComponent::StaticRegisterNativesUReacousticSlidingAudioComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSlidingAudioComponent);
	UClass* Z_Construct_UClass_UReacousticSlidingAudioComponent_NoRegister()
	{
		return UReacousticSlidingAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReacousticSlidingAudioComponent.h" },
		{ "ModuleRelativePath", "Public/ReacousticSlidingAudioComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSlidingAudioComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::ClassParams = {
		&UReacousticSlidingAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReacousticSlidingAudioComponent()
	{
		if (!Z_Registration_Info_UClass_UReacousticSlidingAudioComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSlidingAudioComponent.OuterSingleton, Z_Construct_UClass_UReacousticSlidingAudioComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSlidingAudioComponent.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticSlidingAudioComponent>()
	{
		return UReacousticSlidingAudioComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSlidingAudioComponent);
	UReacousticSlidingAudioComponent::~UReacousticSlidingAudioComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSlidingAudioComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSlidingAudioComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSlidingAudioComponent, UReacousticSlidingAudioComponent::StaticClass, TEXT("UReacousticSlidingAudioComponent"), &Z_Registration_Info_UClass_UReacousticSlidingAudioComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSlidingAudioComponent), 1911969652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSlidingAudioComponent_h_1251938275(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSlidingAudioComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSlidingAudioComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
