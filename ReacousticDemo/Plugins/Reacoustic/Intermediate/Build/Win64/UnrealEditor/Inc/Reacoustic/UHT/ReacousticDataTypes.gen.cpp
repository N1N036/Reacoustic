// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticDataTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAsset_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAssociationMap();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAssociationMap_NoRegister();
	REACOUSTIC_API UScriptStruct* Z_Construct_UScriptStruct_FImpactValueToTimestampResult();
	REACOUSTIC_API UScriptStruct* Z_Construct_UScriptStruct_FMeshToAudioMapEntry();
	REACOUSTIC_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry;
class UScriptStruct* FMeshToAudioMapEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshToAudioMapEntry, (UObject*)Z_Construct_UPackage__Script_Reacoustic(), TEXT("MeshToAudioMapEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry.OuterSingleton;
}
template<> REACOUSTIC_API UScriptStruct* StaticStruct<FMeshToAudioMapEntry>()
{
	return FMeshToAudioMapEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReacousticSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReacousticSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshToAudioMapEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh To Audio Map" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshToAudioMapEntry, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_Mesh_MetaData), Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_ReacousticSound_MetaData[] = {
		{ "Category", "Mesh To Audio Map" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_ReacousticSound = { "ReacousticSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshToAudioMapEntry, ReacousticSound), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_ReacousticSound_MetaData), Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_ReacousticSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewProp_ReacousticSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
		nullptr,
		&NewStructOps,
		"MeshToAudioMapEntry",
		Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::PropPointers),
		sizeof(FMeshToAudioMapEntry),
		alignof(FMeshToAudioMapEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMeshToAudioMapEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry.InnerSingleton, Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry;
class UScriptStruct* FPhysicalMaterialToAudioMapEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry, (UObject*)Z_Construct_UPackage__Script_Reacoustic(), TEXT("PhysicalMaterialToAudioMapEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry.OuterSingleton;
}
template<> REACOUSTIC_API UScriptStruct* StaticStruct<FPhysicalMaterialToAudioMapEntry>()
{
	return FPhysicalMaterialToAudioMapEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReacousticSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReacousticSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalMaterialToAudioMapEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "EPhysicalSurface To Audio Map" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialToAudioMapEntry, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_SurfaceType_MetaData), Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_SurfaceType_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_ReacousticSound_MetaData[] = {
		{ "Category", "EPhysicalSurface To Audio Map" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_ReacousticSound = { "ReacousticSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialToAudioMapEntry, ReacousticSound), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_ReacousticSound_MetaData), Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_ReacousticSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_SurfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewProp_ReacousticSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
		nullptr,
		&NewStructOps,
		"PhysicalMaterialToAudioMapEntry",
		Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::PropPointers),
		sizeof(FPhysicalMaterialToAudioMapEntry),
		alignof(FPhysicalMaterialToAudioMapEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult;
class UScriptStruct* FImpactValueToTimestampResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactValueToTimestampResult, (UObject*)Z_Construct_UPackage__Script_Reacoustic(), TEXT("ImpactValueToTimestampResult"));
	}
	return Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult.OuterSingleton;
}
template<> REACOUSTIC_API UScriptStruct* StaticStruct<FImpactValueToTimestampResult>()
{
	return FImpactValueToTimestampResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedOnsetStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedOnsetStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnsetStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OnsetStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactValueToTimestampResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "ImpactValueToTimestampResult" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactValueToTimestampResult, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_Timestamp_MetaData), Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_Timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_NormalizedOnsetStrength_MetaData[] = {
		{ "Category", "ImpactValueToTimestampResult" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_NormalizedOnsetStrength = { "NormalizedOnsetStrength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactValueToTimestampResult, NormalizedOnsetStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_NormalizedOnsetStrength_MetaData), Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_NormalizedOnsetStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_OnsetStrength_MetaData[] = {
		{ "Category", "ImpactValueToTimestampResult" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_OnsetStrength = { "OnsetStrength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImpactValueToTimestampResult, OnsetStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_OnsetStrength_MetaData), Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_OnsetStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_NormalizedOnsetStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewProp_OnsetStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
		nullptr,
		&NewStructOps,
		"ImpactValueToTimestampResult",
		Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::PropPointers),
		sizeof(FImpactValueToTimestampResult),
		alignof(FImpactValueToTimestampResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FImpactValueToTimestampResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult.InnerSingleton, Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult.InnerSingleton;
	}
	void UReacousticSoundAssociationMap::StaticRegisterNativesUReacousticSoundAssociationMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSoundAssociationMap);
	UClass* Z_Construct_UClass_UReacousticSoundAssociationMap_NoRegister()
	{
		return UReacousticSoundAssociationMap::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSoundAssociationMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshMapEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMapEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshMapEntries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalMaterialMapEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMapEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterialMapEntries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The map with all references to quickly be able to access the right audio data.\n" },
#endif
		{ "IncludePath", "ReacousticDataTypes.h" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The map with all references to quickly be able to access the right audio data." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_MeshMapEntries_Inner = { "MeshMapEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshToAudioMapEntry, METADATA_PARAMS(0, nullptr) }; // 2728234845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_MeshMapEntries_MetaData[] = {
		{ "Category", "MeshToAudioMap" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_MeshMapEntries = { "MeshMapEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAssociationMap, MeshMapEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_MeshMapEntries_MetaData), Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_MeshMapEntries_MetaData) }; // 2728234845
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_PhysicalMaterialMapEntries_Inner = { "PhysicalMaterialMapEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry, METADATA_PARAMS(0, nullptr) }; // 4082942788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_PhysicalMaterialMapEntries_MetaData[] = {
		{ "Category", "MaterialToAudioMap" },
		{ "ModuleRelativePath", "Public/ReacousticDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_PhysicalMaterialMapEntries = { "PhysicalMaterialMapEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAssociationMap, PhysicalMaterialMapEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_PhysicalMaterialMapEntries_MetaData), Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_PhysicalMaterialMapEntries_MetaData) }; // 4082942788
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_MeshMapEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_MeshMapEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_PhysicalMaterialMapEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::NewProp_PhysicalMaterialMapEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSoundAssociationMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::ClassParams = {
		&UReacousticSoundAssociationMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticSoundAssociationMap()
	{
		if (!Z_Registration_Info_UClass_UReacousticSoundAssociationMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSoundAssociationMap.OuterSingleton, Z_Construct_UClass_UReacousticSoundAssociationMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSoundAssociationMap.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticSoundAssociationMap>()
	{
		return UReacousticSoundAssociationMap::StaticClass();
	}
	UReacousticSoundAssociationMap::UReacousticSoundAssociationMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSoundAssociationMap);
	UReacousticSoundAssociationMap::~UReacousticSoundAssociationMap() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FMeshToAudioMapEntry::StaticStruct, Z_Construct_UScriptStruct_FMeshToAudioMapEntry_Statics::NewStructOps, TEXT("MeshToAudioMapEntry"), &Z_Registration_Info_UScriptStruct_MeshToAudioMapEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshToAudioMapEntry), 2728234845U) },
		{ FPhysicalMaterialToAudioMapEntry::StaticStruct, Z_Construct_UScriptStruct_FPhysicalMaterialToAudioMapEntry_Statics::NewStructOps, TEXT("PhysicalMaterialToAudioMapEntry"), &Z_Registration_Info_UScriptStruct_PhysicalMaterialToAudioMapEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalMaterialToAudioMapEntry), 4082942788U) },
		{ FImpactValueToTimestampResult::StaticStruct, Z_Construct_UScriptStruct_FImpactValueToTimestampResult_Statics::NewStructOps, TEXT("ImpactValueToTimestampResult"), &Z_Registration_Info_UScriptStruct_ImpactValueToTimestampResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImpactValueToTimestampResult), 3503844956U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSoundAssociationMap, UReacousticSoundAssociationMap::StaticClass, TEXT("UReacousticSoundAssociationMap"), &Z_Registration_Info_UClass_UReacousticSoundAssociationMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSoundAssociationMap), 232434949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_955038812(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticDataTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
