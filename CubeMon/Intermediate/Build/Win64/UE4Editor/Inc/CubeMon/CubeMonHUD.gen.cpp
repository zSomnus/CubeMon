// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeMon/CubeMonHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeMonHUD() {}
// Cross Module References
	CUBEMON_API UClass* Z_Construct_UClass_ACubeMonHUD_NoRegister();
	CUBEMON_API UClass* Z_Construct_UClass_ACubeMonHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CubeMon();
// End Cross Module References
	void ACubeMonHUD::StaticRegisterNativesACubeMonHUD()
	{
	}
	UClass* Z_Construct_UClass_ACubeMonHUD_NoRegister()
	{
		return ACubeMonHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACubeMonHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeMonHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeMon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeMonHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CubeMonHUD.h" },
		{ "ModuleRelativePath", "CubeMonHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeMonHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeMonHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeMonHUD_Statics::ClassParams = {
		&ACubeMonHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACubeMonHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACubeMonHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeMonHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeMonHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeMonHUD, 1779528333);
	template<> CUBEMON_API UClass* StaticClass<ACubeMonHUD>()
	{
		return ACubeMonHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeMonHUD(Z_Construct_UClass_ACubeMonHUD, &ACubeMonHUD::StaticClass, TEXT("/Script/CubeMon"), TEXT("ACubeMonHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeMonHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif