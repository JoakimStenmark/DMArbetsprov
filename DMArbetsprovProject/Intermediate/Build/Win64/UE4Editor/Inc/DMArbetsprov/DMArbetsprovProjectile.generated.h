// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef DMARBETSPROV_DMArbetsprovProjectile_generated_h
#error "DMArbetsprovProjectile.generated.h already included, missing '#pragma once' in DMArbetsprovProjectile.h"
#endif
#define DMARBETSPROV_DMArbetsprovProjectile_generated_h

#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMArbetsprovProjectile(); \
	friend struct Z_Construct_UClass_ADMArbetsprovProjectile_Statics; \
public: \
	DECLARE_CLASS(ADMArbetsprovProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMArbetsprov"), NO_API) \
	DECLARE_SERIALIZER(ADMArbetsprovProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADMArbetsprovProjectile(); \
	friend struct Z_Construct_UClass_ADMArbetsprovProjectile_Statics; \
public: \
	DECLARE_CLASS(ADMArbetsprovProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMArbetsprov"), NO_API) \
	DECLARE_SERIALIZER(ADMArbetsprovProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADMArbetsprovProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADMArbetsprovProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMArbetsprovProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMArbetsprovProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADMArbetsprovProjectile(ADMArbetsprovProjectile&&); \
	NO_API ADMArbetsprovProjectile(const ADMArbetsprovProjectile&); \
public:


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADMArbetsprovProjectile(ADMArbetsprovProjectile&&); \
	NO_API ADMArbetsprovProjectile(const ADMArbetsprovProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMArbetsprovProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMArbetsprovProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMArbetsprovProjectile)


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ADMArbetsprovProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ADMArbetsprovProjectile, ProjectileMovement); }


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_9_PROLOG
#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_RPC_WRAPPERS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_INCLASS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_INCLASS_NO_PURE_DECLS \
	DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMARBETSPROV_API UClass* StaticClass<class ADMArbetsprovProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DMArbetsprov_Source_DMArbetsprov_DMArbetsprovProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS