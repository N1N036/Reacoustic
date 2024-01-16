// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticSubsystem.h"
#include "ReacousticDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticComponent_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticProjectSettings_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAsset_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAssociationMap_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSubsystem();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSubsystem_NoRegister();
	REACOUSTIC_API UScriptStruct* Z_Construct_UScriptStruct_FImpactValueToTimestampResult();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	DEFINE_FUNCTION(UReacousticSubsystem::execPopulateWorldWithBPReacousticComponents)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateWorldWithBPReacousticComponents(Z_Param_ComponentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticSubsystem::execGetTimeStampWithStrenght)
	{
		P_GET_OBJECT(UReacousticSoundAsset,Z_Param_SoundAsset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImpactValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FImpactValueToTimestampResult*)Z_Param__Result=P_THIS->GetTimeStampWithStrenght(Z_Param_SoundAsset,Z_Param_ImpactValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticSubsystem::execAddBPReacousticComponentToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_OBJECT(UReacousticSoundAsset,Z_Param_MeshSoundAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBPReacousticComponentToActor(Z_Param_Actor,Z_Param_ComponentClass,Z_Param_MeshSoundAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticSubsystem::execGetCompatibleActorsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetCompatibleActorsOfClass(Z_Param_ClassType);
		P_NATIVE_END;
	}
	void UReacousticSubsystem::StaticRegisterNativesUReacousticSubsystem()
	{
		UClass* Class = UReacousticSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBPReacousticComponentToActor", &UReacousticSubsystem::execAddBPReacousticComponentToActor },
			{ "GetCompatibleActorsOfClass", &UReacousticSubsystem::execGetCompatibleActorsOfClass },
			{ "GetTimeStampWithStrenght", &UReacousticSubsystem::execGetTimeStampWithStrenght },
			{ "PopulateWorldWithBPReacousticComponents", &UReacousticSubsystem::execPopulateWorldWithBPReacousticComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics
	{
		struct ReacousticSubsystem_eventAddBPReacousticComponentToActor_Parms
		{
			AActor* Actor;
			TSubclassOf<UReacousticComponent>  ComponentClass;
			UReacousticSoundAsset* MeshSoundAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshSoundAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventAddBPReacousticComponentToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventAddBPReacousticComponentToActor_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UReacousticComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::NewProp_MeshSoundAsset = { "MeshSoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventAddBPReacousticComponentToActor_Parms, MeshSoundAsset), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::NewProp_MeshSoundAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ReacousticSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A BP_Reacoustic component will be added to the physics actor if conditions are met.\n\x09 *\x09@Actor The actor to add the component to.\n\x09 *\x09@ComponentClass The reacoustic blueprint component to add.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A BP_Reacoustic component will be added to the physics actor if conditions are met.\n    @Actor The actor to add the component to.\n    @ComponentClass The reacoustic blueprint component to add." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticSubsystem, nullptr, "AddBPReacousticComponentToActor", nullptr, nullptr, Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::ReacousticSubsystem_eventAddBPReacousticComponentToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::ReacousticSubsystem_eventAddBPReacousticComponentToActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics
	{
		struct ReacousticSubsystem_eventGetCompatibleActorsOfClass_Parms
		{
			UClass* ClassType;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventGetCompatibleActorsOfClass_Parms, ClassType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventGetCompatibleActorsOfClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::NewProp_ClassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns all actors in the level of a given class that have Physics and GenerateHitEvents enabled. This is a slow operation, and should not be called often during runtime.\n\x09 *\x09@ClassType Which class to look for in the world.\n\x09 *\x09@return An array of actor pointers that potentially meet the conditions to be registered by Reacoustic.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all actors in the level of a given class that have Physics and GenerateHitEvents enabled. This is a slow operation, and should not be called often during runtime.\n    @ClassType Which class to look for in the world.\n    @return An array of actor pointers that potentially meet the conditions to be registered by Reacoustic." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticSubsystem, nullptr, "GetCompatibleActorsOfClass", nullptr, nullptr, Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::ReacousticSubsystem_eventGetCompatibleActorsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::ReacousticSubsystem_eventGetCompatibleActorsOfClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics
	{
		struct ReacousticSubsystem_eventGetTimeStampWithStrenght_Parms
		{
			UReacousticSoundAsset* SoundAsset;
			float ImpactValue;
			FImpactValueToTimestampResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundAsset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventGetTimeStampWithStrenght_Parms, SoundAsset), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::NewProp_ImpactValue = { "ImpactValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventGetTimeStampWithStrenght_Parms, ImpactValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventGetTimeStampWithStrenght_Parms, ReturnValue), Z_Construct_UScriptStruct_FImpactValueToTimestampResult, METADATA_PARAMS(0, nullptr) }; // 3503844956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::NewProp_SoundAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::NewProp_ImpactValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::Function_MetaDataParams[] = {
		{ "Category", "ReacousticSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the matching timestamp and strength for a given normalized physics impact value.\n\x09 *This function needs to be in the subsystem so that the it can be used in game and in editor.*/" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the matching timestamp and strength for a given normalized physics impact value.\nThis function needs to be in the subsystem so that the it can be used in game and in editor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticSubsystem, nullptr, "GetTimeStampWithStrenght", nullptr, nullptr, Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::ReacousticSubsystem_eventGetTimeStampWithStrenght_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::ReacousticSubsystem_eventGetTimeStampWithStrenght_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics
	{
		struct ReacousticSubsystem_eventPopulateWorldWithBPReacousticComponents_Parms
		{
			TSubclassOf<UReacousticComponent>  ComponentClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticSubsystem_eventPopulateWorldWithBPReacousticComponents_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UReacousticComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::NewProp_ComponentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReacousticSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticSubsystem, nullptr, "PopulateWorldWithBPReacousticComponents", nullptr, nullptr, Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::ReacousticSubsystem_eventPopulateWorldWithBPReacousticComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::ReacousticSubsystem_eventPopulateWorldWithBPReacousticComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSubsystem);
	UClass* Z_Construct_UClass_UReacousticSubsystem_NoRegister()
	{
		return UReacousticSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReacousticSoundAssociationMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReacousticSoundAssociationMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReacousticSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReacousticSubsystem_AddBPReacousticComponentToActor, "AddBPReacousticComponentToActor" }, // 1795598050
		{ &Z_Construct_UFunction_UReacousticSubsystem_GetCompatibleActorsOfClass, "GetCompatibleActorsOfClass" }, // 3947602779
		{ &Z_Construct_UFunction_UReacousticSubsystem_GetTimeStampWithStrenght, "GetTimeStampWithStrenght" }, // 3740328114
		{ &Z_Construct_UFunction_UReacousticSubsystem_PopulateWorldWithBPReacousticComponents, "PopulateWorldWithBPReacousticComponents" }, // 1869693008
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReacousticSubsystem.h" },
		{ "ModuleRelativePath", "Public/ReacousticSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_ReacousticSoundAssociationMap_MetaData[] = {
		{ "Category", "ReacousticSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Reacoustic Sound Data Reference Map.*/" },
#endif
		{ "DisplayName", "Sound Data Asset Reference Map" },
		{ "ModuleRelativePath", "Public/ReacousticSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Reacoustic Sound Data Reference Map." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_ReacousticSoundAssociationMap = { "ReacousticSoundAssociationMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSubsystem, ReacousticSoundAssociationMap), Z_Construct_UClass_UReacousticSoundAssociationMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_ReacousticSoundAssociationMap_MetaData), Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_ReacousticSoundAssociationMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_Settings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The internal reference of the global reacoustic settings.*/" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The internal reference of the global reacoustic settings." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSubsystem, Settings), Z_Construct_UClass_UReacousticProjectSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_Settings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_ReacousticSoundAssociationMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSubsystem_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSubsystem_Statics::ClassParams = {
		&UReacousticSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReacousticSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticSubsystem()
	{
		if (!Z_Registration_Info_UClass_UReacousticSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSubsystem.OuterSingleton, Z_Construct_UClass_UReacousticSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSubsystem.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticSubsystem>()
	{
		return UReacousticSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSubsystem);
	UReacousticSubsystem::~UReacousticSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSubsystem, UReacousticSubsystem::StaticClass, TEXT("UReacousticSubsystem"), &Z_Registration_Info_UClass_UReacousticSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSubsystem), 2473668118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_1512464760(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
