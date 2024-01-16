// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReacousticSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UReacousticComponent;
class UReacousticSoundAsset;
struct FImpactValueToTimestampResult;
#ifdef REACOUSTIC_ReacousticSubsystem_generated_h
#error "ReacousticSubsystem.generated.h already included, missing '#pragma once' in ReacousticSubsystem.h"
#endif
#define REACOUSTIC_ReacousticSubsystem_generated_h

#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_SPARSE_DATA
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPopulateWorldWithBPReacousticComponents); \
	DECLARE_FUNCTION(execGetTimeStampWithStrenght); \
	DECLARE_FUNCTION(execAddBPReacousticComponentToActor); \
	DECLARE_FUNCTION(execGetCompatibleActorsOfClass);


#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_ACCESSORS
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReacousticSubsystem(); \
	friend struct Z_Construct_UClass_UReacousticSubsystem_Statics; \
public: \
	DECLARE_CLASS(UReacousticSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Reacoustic"), NO_API) \
	DECLARE_SERIALIZER(UReacousticSubsystem)


#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReacousticSubsystem(UReacousticSubsystem&&); \
	NO_API UReacousticSubsystem(const UReacousticSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReacousticSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReacousticSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReacousticSubsystem) \
	NO_API virtual ~UReacousticSubsystem();


#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_14_PROLOG
#define FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_SPARSE_DATA \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_ACCESSORS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REACOUSTIC_API UClass* StaticClass<class UReacousticSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Reacoustic_ReacousticDemo_Plugins_Reacoustic_Source_Runtime_Public_ReacousticSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
