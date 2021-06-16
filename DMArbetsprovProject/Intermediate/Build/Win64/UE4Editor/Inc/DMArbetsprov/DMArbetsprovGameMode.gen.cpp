// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMArbetsprov/DMArbetsprovGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMArbetsprovGameMode() {}
// Cross Module References
	DMARBETSPROV_API UClass* Z_Construct_UClass_ADMArbetsprovGameMode_NoRegister();
	DMARBETSPROV_API UClass* Z_Construct_UClass_ADMArbetsprovGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DMArbetsprov();
// End Cross Module References
	void ADMArbetsprovGameMode::StaticRegisterNativesADMArbetsprovGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADMArbetsprovGameMode_NoRegister()
	{
		return ADMArbetsprovGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADMArbetsprovGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADMArbetsprovGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMArbetsprov,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMArbetsprovGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DMArbetsprovGameMode.h" },
		{ "ModuleRelativePath", "DMArbetsprovGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADMArbetsprovGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMArbetsprovGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADMArbetsprovGameMode_Statics::ClassParams = {
		&ADMArbetsprovGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ADMArbetsprovGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADMArbetsprovGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADMArbetsprovGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADMArbetsprovGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADMArbetsprovGameMode, 2597517617);
	template<> DMARBETSPROV_API UClass* StaticClass<ADMArbetsprovGameMode>()
	{
		return ADMArbetsprovGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADMArbetsprovGameMode(Z_Construct_UClass_ADMArbetsprovGameMode, &ADMArbetsprovGameMode::StaticClass, TEXT("/Script/DMArbetsprov"), TEXT("ADMArbetsprovGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADMArbetsprovGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
