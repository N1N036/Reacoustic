// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/ReacousticSoundAssociationSetterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSoundAssociationSetterFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REACOUSTICEDITOR_API UClass* Z_Construct_UClass_UReacousticSoundAssociationSetterFactory();
	REACOUSTICEDITOR_API UClass* Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_ReacousticEditor();
// End Cross Module References
	DEFINE_FUNCTION(UReacousticSoundAssociationSetterFactory::execTryApplyToActor)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryApplyToActor(Z_Param_Object,Z_Param_Actor);
		P_NATIVE_END;
	}
	void UReacousticSoundAssociationSetterFactory::StaticRegisterNativesUReacousticSoundAssociationSetterFactory()
	{
		UClass* Class = UReacousticSoundAssociationSetterFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryApplyToActor", &UReacousticSoundAssociationSetterFactory::execTryApplyToActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics
	{
		struct ReacousticSoundAssociationSetterFactory_eventTryApplyToActor_Parms
		{
			UObject* Object;
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSoundAssociationSetterFactory_eventTryApplyToActor_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSoundAssociationSetterFactory_eventTryApplyToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReacousticSoundAssociationSetterFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticSoundAssociationSetterFactory, nullptr, "TryApplyToActor", nullptr, nullptr, Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::ReacousticSoundAssociationSetterFactory_eventTryApplyToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::ReacousticSoundAssociationSetterFactory_eventTryApplyToActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSoundAssociationSetterFactory);
	UClass* Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_NoRegister()
	{
		return UReacousticSoundAssociationSetterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ReacousticEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReacousticSoundAssociationSetterFactory_TryApplyToActor, "TryApplyToActor" }, // 2686349860
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ReacousticSoundAssociationSetterFactory.h" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAssociationSetterFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSoundAssociationSetterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::ClassParams = {
		&UReacousticSoundAssociationSetterFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001030ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReacousticSoundAssociationSetterFactory()
	{
		if (!Z_Registration_Info_UClass_UReacousticSoundAssociationSetterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSoundAssociationSetterFactory.OuterSingleton, Z_Construct_UClass_UReacousticSoundAssociationSetterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSoundAssociationSetterFactory.OuterSingleton;
	}
	template<> REACOUSTICEDITOR_API UClass* StaticClass<UReacousticSoundAssociationSetterFactory>()
	{
		return UReacousticSoundAssociationSetterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSoundAssociationSetterFactory);
	UReacousticSoundAssociationSetterFactory::~UReacousticSoundAssociationSetterFactory() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundAssociationSetterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundAssociationSetterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSoundAssociationSetterFactory, UReacousticSoundAssociationSetterFactory::StaticClass, TEXT("UReacousticSoundAssociationSetterFactory"), &Z_Registration_Info_UClass_UReacousticSoundAssociationSetterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSoundAssociationSetterFactory), 3008412771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundAssociationSetterFactory_h_708008311(TEXT("/Script/ReacousticEditor"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundAssociationSetterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Editor_Public_ReacousticSoundAssociationSetterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
