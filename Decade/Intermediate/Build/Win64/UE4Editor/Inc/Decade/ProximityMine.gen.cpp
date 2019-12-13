// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decade/ProximityMine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProximityMine() {}
// Cross Module References
	DECADE_API UClass* Z_Construct_UClass_AProximityMine_NoRegister();
	DECADE_API UClass* Z_Construct_UClass_AProximityMine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Decade();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DECADE_API UClass* Z_Construct_UClass_ADecadeCharacter_NoRegister();
// End Cross Module References
	void AProximityMine::StaticRegisterNativesAProximityMine()
	{
	}
	UClass* Z_Construct_UClass_AProximityMine_NoRegister()
	{
		return AProximityMine::StaticClass();
	}
	struct Z_Construct_UClass_AProximityMine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProximityMine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Decade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProximityMine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProximityMine.h" },
		{ "ModuleRelativePath", "ProximityMine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProximityMine_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "ProximityMine" },
		{ "ModuleRelativePath", "ProximityMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProximityMine_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProximityMine, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProximityMine_Statics::NewProp_Particle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProximityMine_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProximityMine_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "ProximityMine" },
		{ "ModuleRelativePath", "ProximityMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProximityMine_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProximityMine, Delay), METADATA_PARAMS(Z_Construct_UClass_AProximityMine_Statics::NewProp_Delay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProximityMine_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProximityMine_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "ProximityMine" },
		{ "ModuleRelativePath", "ProximityMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProximityMine_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProximityMine, Distance), METADATA_PARAMS(Z_Construct_UClass_AProximityMine_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProximityMine_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProximityMine_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ProximityMine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProximityMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProximityMine_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProximityMine, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProximityMine_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProximityMine_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProximityMine_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "ProximityMine" },
		{ "ModuleRelativePath", "ProximityMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProximityMine_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProximityMine, Player), Z_Construct_UClass_ADecadeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProximityMine_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProximityMine_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProximityMine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProximityMine_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProximityMine_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProximityMine_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProximityMine_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProximityMine_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProximityMine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProximityMine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProximityMine_Statics::ClassParams = {
		&AProximityMine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProximityMine_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AProximityMine_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AProximityMine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProximityMine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProximityMine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProximityMine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProximityMine, 1328324678);
	template<> DECADE_API UClass* StaticClass<AProximityMine>()
	{
		return AProximityMine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProximityMine(Z_Construct_UClass_AProximityMine, &AProximityMine::StaticClass, TEXT("/Script/Decade"), TEXT("AProximityMine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProximityMine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
