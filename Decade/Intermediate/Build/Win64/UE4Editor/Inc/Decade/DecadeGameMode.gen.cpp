// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decade/DecadeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecadeGameMode() {}
// Cross Module References
	DECADE_API UClass* Z_Construct_UClass_ADecadeGameMode_NoRegister();
	DECADE_API UClass* Z_Construct_UClass_ADecadeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Decade();
// End Cross Module References
	void ADecadeGameMode::StaticRegisterNativesADecadeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADecadeGameMode_NoRegister()
	{
		return ADecadeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADecadeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecadeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Decade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecadeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DecadeGameMode.h" },
		{ "ModuleRelativePath", "DecadeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecadeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecadeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecadeGameMode_Statics::ClassParams = {
		&ADecadeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecadeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADecadeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecadeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecadeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecadeGameMode, 477213095);
	template<> DECADE_API UClass* StaticClass<ADecadeGameMode>()
	{
		return ADecadeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecadeGameMode(Z_Construct_UClass_ADecadeGameMode, &ADecadeGameMode::StaticClass, TEXT("/Script/Decade"), TEXT("ADecadeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecadeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
