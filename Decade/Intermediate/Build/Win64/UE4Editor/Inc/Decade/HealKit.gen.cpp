// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Decade/HealKit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealKit() {}
// Cross Module References
	DECADE_API UClass* Z_Construct_UClass_AHealKit_NoRegister();
	DECADE_API UClass* Z_Construct_UClass_AHealKit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Decade();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DECADE_API UClass* Z_Construct_UClass_ADecadeCharacter_NoRegister();
// End Cross Module References
	void AHealKit::StaticRegisterNativesAHealKit()
	{
	}
	UClass* Z_Construct_UClass_AHealKit_NoRegister()
	{
		return AHealKit::StaticClass();
	}
	struct Z_Construct_UClass_AHealKit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHeal_MetaData[];
#endif
		static void NewProp_bCanHeal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
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
	UObject* (*const Z_Construct_UClass_AHealKit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Decade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealKit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealKit.h" },
		{ "ModuleRelativePath", "HealKit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealKit_Statics::NewProp_bCanHeal_MetaData[] = {
		{ "Category", "HealKit" },
		{ "ModuleRelativePath", "HealKit.h" },
	};
#endif
	void Z_Construct_UClass_AHealKit_Statics::NewProp_bCanHeal_SetBit(void* Obj)
	{
		((AHealKit*)Obj)->bCanHeal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHealKit_Statics::NewProp_bCanHeal = { "bCanHeal", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHealKit), &Z_Construct_UClass_AHealKit_Statics::NewProp_bCanHeal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHealKit_Statics::NewProp_bCanHeal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealKit_Statics::NewProp_bCanHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealKit_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "HealKit" },
		{ "ModuleRelativePath", "HealKit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealKit_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealKit, Sound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealKit_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealKit_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealKit_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "HealKit" },
		{ "ModuleRelativePath", "HealKit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealKit_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealKit, Duration), METADATA_PARAMS(Z_Construct_UClass_AHealKit_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealKit_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealKit_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "HealKit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealKit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealKit_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealKit, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealKit_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealKit_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealKit_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "HealKit" },
		{ "ModuleRelativePath", "HealKit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealKit_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealKit, Player), Z_Construct_UClass_ADecadeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealKit_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealKit_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealKit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealKit_Statics::NewProp_bCanHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealKit_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealKit_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealKit_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealKit_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealKit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealKit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealKit_Statics::ClassParams = {
		&AHealKit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealKit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHealKit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHealKit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHealKit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealKit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealKit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealKit, 2976626845);
	template<> DECADE_API UClass* StaticClass<AHealKit>()
	{
		return AHealKit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealKit(Z_Construct_UClass_AHealKit, &AHealKit::StaticClass, TEXT("/Script/Decade"), TEXT("AHealKit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealKit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
