// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMARBETSPROV_DMArbetsprovCharacter_generated_h
#error "DMArbetsprovCharacter.generated.h already included, missing '#pragma once' in DMArbetsprovCharacter.h"
#endif
#define DMARBETSPROV_DMArbetsprovCharacter_generated_h

#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_RPC_WRAPPERS
#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMArbetsprovCharacter(); \
	friend struct Z_Construct_UClass_ADMArbetsprovCharacter_Statics; \
public: \
	DECLARE_CLASS(ADMArbetsprovCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMArbetsprov"), NO_API) \
	DECLARE_SERIALIZER(ADMArbetsprovCharacter)


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADMArbetsprovCharacter(); \
	friend struct Z_Construct_UClass_ADMArbetsprovCharacter_Statics; \
public: \
	DECLARE_CLASS(ADMArbetsprovCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMArbetsprov"), NO_API) \
	DECLARE_SERIALIZER(ADMArbetsprovCharacter)


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADMArbetsprovCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADMArbetsprovCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMArbetsprovCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMArbetsprovCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADMArbetsprovCharacter(ADMArbetsprovCharacter&&); \
	NO_API ADMArbetsprovCharacter(const ADMArbetsprovCharacter&); \
public:


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADMArbetsprovCharacter(ADMArbetsprovCharacter&&); \
	NO_API ADMArbetsprovCharacter(const ADMArbetsprovCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMArbetsprovCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMArbetsprovCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMArbetsprovCharacter)


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ADMArbetsprovCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ADMArbetsprovCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ADMArbetsprovCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ADMArbetsprovCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ADMArbetsprovCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ADMArbetsprovCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ADMArbetsprovCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ADMArbetsprovCharacter, L_MotionController); }


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_11_PROLOG
#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_RPC_WRAPPERS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_INCLASS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_INCLASS_NO_PURE_DECLS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMARBETSPROV_API UClass* StaticClass<class ADMArbetsprovCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DMArbetsprov_Source_DMArbetsprov_DMArbetsprovCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
