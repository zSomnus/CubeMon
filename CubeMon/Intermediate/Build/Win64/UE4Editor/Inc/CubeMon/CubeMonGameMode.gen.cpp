// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMon/CubeMonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeMonGameMode() {}
// Cross Module References
	CUBEMON_API UClass* Z_Construct_UClass_ACubeMonGameMode_NoRegister();
	CUBEMON_API UClass* Z_Construct_UClass_ACubeMonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CubeMon();
// End Cross Module References
	void ACubeMonGameMode::StaticRegisterNativesACubeMonGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACubeMonGameMode_NoRegister()
	{
		return ACubeMonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACubeMonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeMonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeMonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CubeMonGameMode.h" },
		{ "ModuleRelativePath", "CubeMonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeMonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeMonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeMonGameMode_Statics::ClassParams = {
		&ACubeMonGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACubeMonGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACubeMonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeMonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeMonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeMonGameMode, 1623775087);
	template<> CUBEMON_API UClass* StaticClass<ACubeMonGameMode>()
	{
		return ACubeMonGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeMonGameMode(Z_Construct_UClass_ACubeMonGameMode, &ACubeMonGameMode::StaticClass, TEXT("/Script/CubeMon"), TEXT("ACubeMonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeMonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
