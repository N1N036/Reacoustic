// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReacousticComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class UReacousticSoundAsset;
class UReacousticSoundAssociationMap;
class USoundBase;
class UStaticMeshComponent;
struct FHitResult;
struct FImpactValueToTimestampResult;
#ifdef REACOUSTIC_ReacousticComponent_generated_h
#error "ReacousticComponent.generated.h already included, missing '#pragma once' in ReacousticComponent.h"
#endif
#define REACOUSTIC_ReacousticComponent_generated_h

#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_SPARSE_DATA
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnComponentHit_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit); \
	virtual void Initialize_Implementation(USoundBase* SoundBase); \
 \
	DECLARE_FUNCTION(execCalculateImpactValue); \
	DECLARE_FUNCTION(execReturnTimeStampWithStrenght); \
	DECLARE_FUNCTION(execTransferData); \
	DECLARE_FUNCTION(execReturnDeltaLocationDistance); \
	DECLARE_FUNCTION(execReturnDeltaTime); \
	DECLARE_FUNCTION(execGetOwnerMeshComponent); \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execTriggerManualHit); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execHandleOnComponentHit);


#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_ACCESSORS
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_CALLBACK_WRAPPERS
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReacousticComponent(); \
	friend struct Z_Construct_UClass_UReacousticComponent_Statics; \
public: \
	DECLARE_CLASS(UReacousticComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reacoustic"), NO_API) \
	DECLARE_SERIALIZER(UReacousticComponent)


#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReacousticComponent(UReacousticComponent&&); \
	NO_API UReacousticComponent(const UReacousticComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReacousticComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReacousticComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReacousticComponent) \
	NO_API virtual ~UReacousticComponent();


#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_17_PROLOG
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_SPARSE_DATA \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_ACCESSORS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_CALLBACK_WRAPPERS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REACOUSTIC_API UClass* StaticClass<class UReacousticComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
