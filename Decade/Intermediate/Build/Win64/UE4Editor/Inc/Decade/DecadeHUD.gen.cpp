// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decade/DecadeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecadeHUD() {}
// Cross Module References
	DECADE_API UClass* Z_Construct_UClass_ADecadeHUD_NoRegister();
	DECADE_API UClass* Z_Construct_UClass_ADecadeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Decade();
// End Cross Module References
	void ADecadeHUD::StaticRegisterNativesADecadeHUD()
	{
	}
	UClass* Z_Construct_UClass_ADecadeHUD_NoRegister()
	{
		return ADecadeHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADecadeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecadeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Decade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecadeHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DecadeHUD.h" },
		{ "ModuleRelativePath", "DecadeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecadeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecadeHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecadeHUD_Statics::ClassParams = {
		&ADecadeHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecadeHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADecadeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecadeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecadeHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecadeHUD, 3909109266);
	template<> DECADE_API UClass* StaticClass<ADecadeHUD>()
	{
		return ADecadeHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecadeHUD(Z_Construct_UClass_ADecadeHUD, &ADecadeHUD::StaticClass, TEXT("/Script/Decade"), TEXT("ADecadeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecadeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
