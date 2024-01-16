// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReacousticComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "ReacousticDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReacousticComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticComponent();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticComponent_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAsset_NoRegister();
	REACOUSTIC_API UClass* Z_Construct_UClass_UReacousticSoundAssociationMap_NoRegister();
	REACOUSTIC_API UScriptStruct* Z_Construct_UScriptStruct_FImpactValueToTimestampResult();
	UPackage* Z_Construct_UPackage__Script_Reacoustic();
// End Cross Module References
	DEFINE_FUNCTION(UReacousticComponent::execCalculateImpactValue)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NormalImpulse);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UReacousticComponent::CalculateImpactValue(Z_Param_Out_NormalImpulse,Z_Param_HitComponent,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execReturnTimeStampWithStrenght)
	{
		P_GET_OBJECT(UReacousticSoundAsset,Z_Param_SoundAsset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImpactValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FImpactValueToTimestampResult*)Z_Param__Result=P_THIS->ReturnTimeStampWithStrenght(Z_Param_SoundAsset,Z_Param_ImpactValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execTransferData)
	{
		P_GET_OBJECT(UReacousticSoundAsset,Z_Param_SoundDataAsset);
		P_GET_OBJECT(UReacousticSoundAssociationMap,Z_Param_ReferenceMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransferData(Z_Param_SoundDataAsset,Z_Param_ReferenceMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execReturnDeltaLocationDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->ReturnDeltaLocationDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execReturnDeltaTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->ReturnDeltaTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execGetOwnerMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetOwnerMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentHit_Implementation(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execTriggerManualHit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerManualHit_Implementation(Z_Param_HitStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execInitialize)
	{
		P_GET_OBJECT(USoundBase,Z_Param_SoundBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize_Implementation(Z_Param_SoundBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReacousticComponent::execHandleOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnComponentHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	struct ReacousticComponent_eventInitialize_Parms
	{
		USoundBase* SoundBase;
	};
	struct ReacousticComponent_eventOnComponentHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
	struct ReacousticComponent_eventTriggerManualHit_Parms
	{
		float HitStrength;
	};
	static FName NAME_UReacousticComponent_Initialize = FName(TEXT("Initialize"));
	void UReacousticComponent::Initialize(USoundBase* SoundBase)
	{
		ReacousticComponent_eventInitialize_Parms Parms;
		Parms.SoundBase=SoundBase;
		ProcessEvent(FindFunctionChecked(NAME_UReacousticComponent_Initialize),&Parms);
	}
	static FName NAME_UReacousticComponent_OnComponentHit = FName(TEXT("OnComponentHit"));
	void UReacousticComponent::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit)
	{
		ReacousticComponent_eventOnComponentHit_Parms Parms;
		Parms.HitComp=HitComp;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.NormalImpulse=NormalImpulse;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_UReacousticComponent_OnComponentHit),&Parms);
	}
	static FName NAME_UReacousticComponent_TriggerManualHit = FName(TEXT("TriggerManualHit"));
	void UReacousticComponent::TriggerManualHit(float HitStrength)
	{
		ReacousticComponent_eventTriggerManualHit_Parms Parms;
		Parms.HitStrength=HitStrength;
		ProcessEvent(FindFunctionChecked(NAME_UReacousticComponent_TriggerManualHit),&Parms);
	}
	void UReacousticComponent::StaticRegisterNativesUReacousticComponent()
	{
		UClass* Class = UReacousticComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateImpactValue", &UReacousticComponent::execCalculateImpactValue },
			{ "GetOwnerMeshComponent", &UReacousticComponent::execGetOwnerMeshComponent },
			{ "HandleOnComponentHit", &UReacousticComponent::execHandleOnComponentHit },
			{ "Initialize", &UReacousticComponent::execInitialize },
			{ "OnComponentHit", &UReacousticComponent::execOnComponentHit },
			{ "ReturnDeltaLocationDistance", &UReacousticComponent::execReturnDeltaLocationDistance },
			{ "ReturnDeltaTime", &UReacousticComponent::execReturnDeltaTime },
			{ "ReturnTimeStampWithStrenght", &UReacousticComponent::execReturnTimeStampWithStrenght },
			{ "TransferData", &UReacousticComponent::execTransferData },
			{ "TriggerManualHit", &UReacousticComponent::execTriggerManualHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics
	{
		struct ReacousticComponent_eventCalculateImpactValue_Parms
		{
			FVector NormalImpulse;
			const UPrimitiveComponent* HitComponent;
			const AActor* OtherActor;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_NormalImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventCalculateImpactValue_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_NormalImpulse_MetaData), Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_NormalImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventCalculateImpactValue_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_HitComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventCalculateImpactValue_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_OtherActor_MetaData), Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_OtherActor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventCalculateImpactValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reacoustic" },
		{ "DisplayName", "Get Scaled Impact Value" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "CalculateImpactValue", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::ReacousticComponent_eventCalculateImpactValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::ReacousticComponent_eventCalculateImpactValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics
	{
		struct ReacousticComponent_eventGetOwnerMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventGetOwnerMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Reacoustic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the MeshComponent of the owner. */" },
#endif
		{ "DisplayName", "Get Owner StaticMeshComponent" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the MeshComponent of the owner." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "GetOwnerMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::ReacousticComponent_eventGetOwnerMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::ReacousticComponent_eventGetOwnerMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics
	{
		struct ReacousticComponent_eventHandleOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventHandleOnComponentHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_HitComp_MetaData), Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_HitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventHandleOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventHandleOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventHandleOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventHandleOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Callback function for the OnHit event delegate of a physics enabled static mesh component.\n\x09 *\x09@HitComp The component that was hit.\n\x09 *\x09@OtherActor The other actor that was hit by the component.\n\x09 *\x09@OtherComp\x09The other actor's root component.\n\x09 *\x09@NormalImpulse\x09The normal impulse of the hit.\n\x09 *\x09@Hit A FHitResult struct of the hit.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback function for the OnHit event delegate of a physics enabled static mesh component.\n    @HitComp The component that was hit.\n    @OtherActor The other actor that was hit by the component.\n    @OtherComp      The other actor's root component.\n    @NormalImpulse  The normal impulse of the hit.\n    @Hit A FHitResult struct of the hit." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "HandleOnComponentHit", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::ReacousticComponent_eventHandleOnComponentHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::ReacousticComponent_eventHandleOnComponentHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_Initialize_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::NewProp_SoundBase = { "SoundBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventInitialize_Parms, SoundBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::NewProp_SoundBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Initialize" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::PropPointers), sizeof(ReacousticComponent_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(ReacousticComponent_eventInitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventOnComponentHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_HitComp_MetaData), Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_HitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "OnComponentHit", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::PropPointers), sizeof(ReacousticComponent_eventOnComponentHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(ReacousticComponent_eventOnComponentHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics
	{
		struct ReacousticComponent_eventReturnDeltaLocationDistance_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventReturnDeltaLocationDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the location interval between hits */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the location interval between hits" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "ReturnDeltaLocationDistance", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::ReacousticComponent_eventReturnDeltaLocationDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::ReacousticComponent_eventReturnDeltaLocationDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics
	{
		struct ReacousticComponent_eventReturnDeltaTime_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventReturnDeltaTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the time interval between hits */" },
#endif
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the time interval between hits" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "ReturnDeltaTime", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::ReacousticComponent_eventReturnDeltaTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::ReacousticComponent_eventReturnDeltaTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics
	{
		struct ReacousticComponent_eventReturnTimeStampWithStrenght_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventReturnTimeStampWithStrenght_Parms, SoundAsset), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::NewProp_ImpactValue = { "ImpactValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventReturnTimeStampWithStrenght_Parms, ImpactValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventReturnTimeStampWithStrenght_Parms, ReturnValue), Z_Construct_UScriptStruct_FImpactValueToTimestampResult, METADATA_PARAMS(0, nullptr) }; // 3503844956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::NewProp_SoundAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::NewProp_ImpactValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "ReturnTimeStampWithStrenght", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::ReacousticComponent_eventReturnTimeStampWithStrenght_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::ReacousticComponent_eventReturnTimeStampWithStrenght_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_TransferData_Statics
	{
		struct ReacousticComponent_eventTransferData_Parms
		{
			UReacousticSoundAsset* SoundDataAsset;
			UReacousticSoundAssociationMap* ReferenceMap;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundDataAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::NewProp_SoundDataAsset = { "SoundDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventTransferData_Parms, SoundDataAsset), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::NewProp_ReferenceMap = { "ReferenceMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventTransferData_Parms, ReferenceMap), Z_Construct_UClass_UReacousticSoundAssociationMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::NewProp_SoundDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::NewProp_ReferenceMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "TransferData", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::ReacousticComponent_eventTransferData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::ReacousticComponent_eventTransferData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_TransferData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_TransferData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::NewProp_HitStrength = { "HitStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReacousticComponent_eventTriggerManualHit_Parms, HitStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::NewProp_HitStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Trigger manual hit" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReacousticComponent, nullptr, "TriggerManualHit", nullptr, nullptr, Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::PropPointers), sizeof(ReacousticComponent_eventTriggerManualHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(ReacousticComponent_eventTriggerManualHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReacousticComponent_TriggerManualHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReacousticComponent_TriggerManualHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReacousticComponent);
	UClass* Z_Construct_UClass_UReacousticComponent_NoRegister()
	{
		return UReacousticComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReacousticComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReacousticSoundAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReacousticSoundAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSoundAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceSoundAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LatestMatchingElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestMatchingElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LatestMatchingElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReacousticComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Reacoustic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReacousticComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReacousticComponent_CalculateImpactValue, "CalculateImpactValue" }, // 823538238
		{ &Z_Construct_UFunction_UReacousticComponent_GetOwnerMeshComponent, "GetOwnerMeshComponent" }, // 3589741113
		{ &Z_Construct_UFunction_UReacousticComponent_HandleOnComponentHit, "HandleOnComponentHit" }, // 3964957805
		{ &Z_Construct_UFunction_UReacousticComponent_Initialize, "Initialize" }, // 2814988914
		{ &Z_Construct_UFunction_UReacousticComponent_OnComponentHit, "OnComponentHit" }, // 1792678444
		{ &Z_Construct_UFunction_UReacousticComponent_ReturnDeltaLocationDistance, "ReturnDeltaLocationDistance" }, // 2744430681
		{ &Z_Construct_UFunction_UReacousticComponent_ReturnDeltaTime, "ReturnDeltaTime" }, // 109279351
		{ &Z_Construct_UFunction_UReacousticComponent_ReturnTimeStampWithStrenght, "ReturnTimeStampWithStrenght" }, // 1287012748
		{ &Z_Construct_UFunction_UReacousticComponent_TransferData, "TransferData" }, // 1123150213
		{ &Z_Construct_UFunction_UReacousticComponent_TriggerManualHit, "TriggerManualHit" }, // 1557051020
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Reacoustic" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ReacousticComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ReacousticSoundAsset_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set this parameter to override the mesh associated Reacoustic Sound.*/" },
#endif
		{ "DisplayName", "Override Reacoustic Sound" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this parameter to override the mesh associated Reacoustic Sound." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ReacousticSoundAsset = { "ReacousticSoundAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticComponent, ReacousticSoundAsset), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ReacousticSoundAsset_MetaData), Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ReacousticSoundAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "ReacousticComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002008000008201c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_UReacousticComponent_Statics::NewProp_AudioComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticComponent_Statics::NewProp_SurfaceSoundAsset_MetaData[] = {
		{ "Category", "ReacousticComponent" },
		{ "DisplayName", "Reacoustic Surface Sound" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticComponent_Statics::NewProp_SurfaceSoundAsset = { "SurfaceSoundAsset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticComponent, SurfaceSoundAsset), Z_Construct_UClass_UReacousticSoundAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::NewProp_SurfaceSoundAsset_MetaData), Z_Construct_UClass_UReacousticComponent_Statics::NewProp_SurfaceSoundAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ImpactForce_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to choose the impact sound during a hit.*/" },
#endif
		{ "DisplayName", "Impact Force" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to choose the impact sound during a hit." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ImpactForce = { "ImpactForce", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticComponent, ImpactForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ImpactForce_MetaData), Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ImpactForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticComponent_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "BlueprintGetter", "GetOwnerMeshComponent" },
		{ "Category", "ReacousticComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the StaticMeshComponent of the owner of this component. */" },
#endif
		{ "DisplayName", "Static Mesh Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the StaticMeshComponent of the owner of this component." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReacousticComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x004000000008201c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticComponent, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_UReacousticComponent_Statics::NewProp_MeshComponent_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReacousticComponent_Statics::NewProp_LatestMatchingElements_Inner = { "LatestMatchingElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReacousticComponent_Statics::NewProp_LatestMatchingElements_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ReacousticComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array used to store the latest hit values so that we can prevent multiple triggers of the same sound.*/" },
#endif
		{ "DisplayName", "Latest Hit Results" },
		{ "ModuleRelativePath", "Public/ReacousticComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array used to store the latest hit values so that we can prevent multiple triggers of the same sound." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReacousticComponent_Statics::NewProp_LatestMatchingElements = { "LatestMatchingElements", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReacousticComponent, LatestMatchingElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::NewProp_LatestMatchingElements_MetaData), Z_Construct_UClass_UReacousticComponent_Statics::NewProp_LatestMatchingElements_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReacousticComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ReacousticSoundAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticComponent_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticComponent_Statics::NewProp_SurfaceSoundAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticComponent_Statics::NewProp_ImpactForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticComponent_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticComponent_Statics::NewProp_LatestMatchingElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReacousticComponent_Statics::NewProp_LatestMatchingElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReacousticComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReacousticComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReacousticComponent_Statics::ClassParams = {
		&UReacousticComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReacousticComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReacousticComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReacousticComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReacousticComponent()
	{
		if (!Z_Registration_Info_UClass_UReacousticComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReacousticComponent.OuterSingleton, Z_Construct_UClass_UReacousticComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReacousticComponent.OuterSingleton;
	}
	template<> REACOUSTIC_API UClass* StaticClass<UReacousticComponent>()
	{
		return UReacousticComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReacousticComponent);
	UReacousticComponent::~UReacousticComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReacousticComponent, UReacousticComponent::StaticClass, TEXT("UReacousticComponent"), &Z_Registration_Info_UClass_UReacousticComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReacousticComponent), 557201215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_2047431494(TEXT("/Script/Reacoustic"),
		Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
