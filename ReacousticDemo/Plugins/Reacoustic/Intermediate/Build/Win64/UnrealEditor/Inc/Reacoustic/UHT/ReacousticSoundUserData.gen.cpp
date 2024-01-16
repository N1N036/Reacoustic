// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticSoundUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSoundUserData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAsset_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundUserData();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundUserData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	void UReacousticSoundUserData::StaticRegisterNativesUReacousticSoundUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSoundUserData);
	UClass* Z_Construct_UClass_UReacousticSoundUserData_NoRegister()
	{
		return UReacousticSoundUserData::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSoundUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReacousticSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReacousticSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSoundUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundUserData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundUserData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ReacousticSoundUserData.h" },
		{ "ModuleRelativePath", "Public/ReacousticSoundUserData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundUserData_Statics::NewProp_ReacousticSound_MetaData[] = {
		{ "Category", "Reacoustic" },
		{ "ModuleRelativePath", "Public/ReacousticSoundUserData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticSoundUserData_Statics::NewProp_ReacousticSound = { "ReacousticSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundUserData, ReacousticSound), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundUserData_Statics::NewProp_ReacousticSound_MetaData), Z_Construct_UClass_UReacousticSoundUserData_Statics::NewProp_ReacousticSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticSoundUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundUserData_Statics::NewProp_ReacousticSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSoundUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSoundUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSoundUserData_Statics::ClassParams = {
		&UReacousticSoundUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReacousticSoundUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSoundUserData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundUserData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticSoundUserData()
	{
		if (!Z_Registration_Info_UClass_UReacousticSoundUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSoundUserData.OuterSingleton, Z_Construct_UClass_UReacousticSoundUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSoundUserData.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticSoundUserData>()
	{
		return UReacousticSoundUserData::StaticClass();
	}
	UReacousticSoundUserData::UReacousticSoundUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSoundUserData);
	UReacousticSoundUserData::~UReacousticSoundUserData() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSoundUserData, UReacousticSoundUserData::StaticClass, TEXT("UReacousticSoundUserData"), &Z_Registration_Info_UClass_UReacousticSoundUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSoundUserData), 2016123378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundUserData_h_1614429338(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
