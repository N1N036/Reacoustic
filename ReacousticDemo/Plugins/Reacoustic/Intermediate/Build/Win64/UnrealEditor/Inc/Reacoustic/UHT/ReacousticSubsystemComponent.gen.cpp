// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticSubsystemComponent.h"
#include "ReacousticSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSubsystemComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSubsystem_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSubsystemComponent();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSubsystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	void UReacousticSubsystemComponent::StaticRegisterNativesUReacousticSubsystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSubsystemComponent);
	UClass* Z_Construct_UClass_UReacousticSubsystemComponent_NoRegister()
	{
		return UReacousticSubsystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSubsystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSubsystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSubsystemComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Reacoustic" },
		{ "IncludePath", "ReacousticSubsystemComponent.h" },
		{ "ModuleRelativePath", "Public/ReacousticSubsystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSubsystemComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReacousticSubsystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticSubsystemComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSubsystemComponent, Owner), Z_Construct_UClass_UReacousticSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystemComponent_Statics::NewProp_Owner_MetaData), Z_Construct_UClass_UReacousticSubsystemComponent_Statics::NewProp_Owner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticSubsystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSubsystemComponent_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSubsystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSubsystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSubsystemComponent_Statics::ClassParams = {
		&UReacousticSubsystemComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReacousticSubsystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystemComponent_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSubsystemComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticSubsystemComponent()
	{
		if (!Z_Registration_Info_UClass_UReacousticSubsystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSubsystemComponent.OuterSingleton, Z_Construct_UClass_UReacousticSubsystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSubsystemComponent.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticSubsystemComponent>()
	{
		return UReacousticSubsystemComponent::StaticClass();
	}
	UReacousticSubsystemComponent::UReacousticSubsystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSubsystemComponent);
	UReacousticSubsystemComponent::~UReacousticSubsystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSubsystemComponent, UReacousticSubsystemComponent::StaticClass, TEXT("UReacousticSubsystemComponent"), &Z_Registration_Info_UClass_UReacousticSubsystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSubsystemComponent), 2194775303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystemComponent_h_2940600760(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
