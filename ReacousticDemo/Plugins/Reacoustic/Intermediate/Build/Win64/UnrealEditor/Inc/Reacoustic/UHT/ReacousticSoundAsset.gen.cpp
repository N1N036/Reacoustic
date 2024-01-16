// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticSoundAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticSoundAsset() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAsset();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	void UReacousticSoundAsset::StaticRegisterNativesUReacousticSoundAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticSoundAsset);
	UClass* Z_Construct_UClass_UReacousticSoundAsset_NoRegister()
	{
		return UReacousticSoundAsset::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticSoundAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingRollingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SlidingRollingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound_Attenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_Concurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound_Concurrency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_Db_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Gain_Db;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedScalar_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSpeedScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseLength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ImpulseLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchShift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseWeightDependentPitch_MetaData[];
#endif
		static void NewProp_UseWeightDependentPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseWeightDependentPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightPitchFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightPitchFactor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimestampHistory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimestampHistory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimestampHistory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticSoundAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnsetNRT,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Reacoustic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An audio asset that utilizes Onset NRT analysis to select and playback specific transients in real-time. */" },
#endif
		{ "DisplayName", "Reacoustic Sound" },
		{ "IncludePath", "ReacousticSoundAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
		{ "ShortToolTip", "An auto analyzed sound clip for impact sound playback." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An audio asset that utilizes Onset NRT analysis to select and playback specific transients in real-time." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_SlidingRollingSound_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The sound to play when the object is sliding or rolling */" },
#endif
		{ "DisplayName", "SlidingRollingSound" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound to play when the object is sliding or rolling" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_SlidingRollingSound = { "SlidingRollingSound", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, SlidingRollingSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_SlidingRollingSound_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_SlidingRollingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Attenuation_MetaData[] = {
		{ "Category", "Basic setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The attenuation settings for the impact sound */" },
#endif
		{ "DisplayName", "Sound_Attenuation" },
		{ "MakeStructureDefaultValue", "/Script/Engine.SoundAttenuation'/Game/ThirdPartyContent/BallisticsVFX/SFX/Attentuations/ImpactsAttenuation.ImpactsAttenuation'" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The attenuation settings for the impact sound" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Attenuation = { "Sound_Attenuation", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, Sound_Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Attenuation_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Attenuation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Concurrency_MetaData[] = {
		{ "Category", "Basic setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The sound concurrency settings for the impact sound */" },
#endif
		{ "DisplayName", "Sound_Concurrency" },
		{ "MakeStructureDefaultValue", "None" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound concurrency settings for the impact sound" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Concurrency = { "Sound_Concurrency", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, Sound_Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Concurrency_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Concurrency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Gain_Db_MetaData[] = {
		{ "Category", "Dynamic Behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The gain in decibels of the impact sound */" },
#endif
		{ "DisplayName", "Gain_Db" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gain in decibels of the impact sound" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Gain_Db = { "Gain_Db", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, Gain_Db), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Gain_Db_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Gain_Db_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_MaxSpeedScalar_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How fast the object is expected to hit things in M/s\n\x09 *eg: a thrown ball would be 20 M/s. A baseball thrown by a world class pitcher would be 40 M/s*/" },
#endif
		{ "DisplayName", "MaxSpeedScalar" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the object is expected to hit things in M/s\neg: a thrown ball would be 20 M/s. A baseball thrown by a world class pitcher would be 40 M/s" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_MaxSpeedScalar = { "MaxSpeedScalar", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, MaxSpeedScalar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_MaxSpeedScalar_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_MaxSpeedScalar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_ImpulseLength_MetaData[] = {
		{ "Category", "Temporal behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The length of the impulse for the impact effect */" },
#endif
		{ "DisplayName", "ImpulseLength" },
		{ "MakeStructureDefaultValue", "0.600000" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of the impulse for the impact effect" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_ImpulseLength = { "ImpulseLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, ImpulseLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_ImpulseLength_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_ImpulseLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_PitchShift_MetaData[] = {
		{ "Category", "Spectral behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The pitch shift in semitones for the impact sound */" },
#endif
		{ "DisplayName", "Semitone pitch shift" },
		{ "MakeStructureDefaultValue", "0.0" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The pitch shift in semitones for the impact sound" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_PitchShift = { "PitchShift", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, PitchShift), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_PitchShift_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_PitchShift_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_UseWeightDependentPitch_MetaData[] = {
		{ "Category", "Spectral behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use weight-dependent pitch for the impact sound */" },
#endif
		{ "DisplayName", "Use weight-dependent pitch" },
		{ "MakeStructureDefaultValue", "false" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use weight-dependent pitch for the impact sound" },
#endif
	};
#endif
	void Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_UseWeightDependentPitch_SetBit(void* Obj)
	{
		((UReacousticSoundAsset*)Obj)->UseWeightDependentPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_UseWeightDependentPitch = { "UseWeightDependentPitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReacousticSoundAsset), &Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_UseWeightDependentPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_UseWeightDependentPitch_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_UseWeightDependentPitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_DefaultWeight_MetaData[] = {
		{ "Category", "Spectral behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default weight for weight-dependent pitch for the impact sound */" },
#endif
		{ "DisplayName", "Default weight" },
		{ "EditCondition", "UseWeightDependentPitch" },
		{ "MakeStructureDefaultValue", "0.0" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default weight for weight-dependent pitch for the impact sound" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_DefaultWeight = { "DefaultWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, DefaultWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_DefaultWeight_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_DefaultWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_WeightPitchFactor_MetaData[] = {
		{ "Category", "Spectral behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The pitch factor for weight-dependent pitch for the impact sound */" },
#endif
		{ "DisplayName", "Weight pitch factor" },
		{ "EditCondition", "UseWeightDependentPitch" },
		{ "MakeStructureDefaultValue", "0.0" },
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The pitch factor for weight-dependent pitch for the impact sound" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_WeightPitchFactor = { "WeightPitchFactor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, WeightPitchFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_WeightPitchFactor_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_WeightPitchFactor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_TimestampHistory_Inner = { "TimestampHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_TimestampHistory_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ReacousticSoundAssets are persistent stateful assets to prevent similar transients from triggering per asset.*/" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReacousticSoundAssets are persistent stateful assets to prevent similar transients from triggering per asset." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_TimestampHistory = { "TimestampHistory", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticSoundAsset, TimestampHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_TimestampHistory_MetaData), Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_TimestampHistory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticSoundAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_SlidingRollingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Sound_Concurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_Gain_Db,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_MaxSpeedScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_ImpulseLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_PitchShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_UseWeightDependentPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_DefaultWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_WeightPitchFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_TimestampHistory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticSoundAsset_Statics::NewProp_TimestampHistory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticSoundAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticSoundAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticSoundAsset_Statics::ClassParams = {
		&UReacousticSoundAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReacousticSoundAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticSoundAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticSoundAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticSoundAsset()
	{
		if (!Z_Registration_Info_UClass_UReacousticSoundAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticSoundAsset.OuterSingleton, Z_Construct_UClass_UReacousticSoundAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticSoundAsset.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticSoundAsset>()
	{
		return UReacousticSoundAsset::StaticClass();
	}
	UReacousticSoundAsset::UReacousticSoundAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticSoundAsset);
	UReacousticSoundAsset::~UReacousticSoundAsset() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticSoundAsset, UReacousticSoundAsset::StaticClass, TEXT("UReacousticSoundAsset"), &Z_Registration_Info_UClass_UReacousticSoundAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticSoundAsset), 2698934566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundAsset_h_937336539(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSoundAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
