// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUBEMON_CubeMonHUD_generated_h
#error "CubeMonHUD.generated.h already included, missing '#pragma once' in CubeMonHUD.h"
#endif
#define CUBEMON_CubeMonHUD_generated_h

#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_RPC_WRAPPERS
#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACubeMonHUD(); \
	friend struct Z_Construct_UClass_ACubeMonHUD_Statics; \
public: \
	DECLARE_CLASS(ACubeMonHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMon"), NO_API) \
	DECLARE_SERIALIZER(ACubeMonHUD)


#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACubeMonHUD(); \
	friend struct Z_Construct_UClass_ACubeMonHUD_Statics; \
public: \
	DECLARE_CLASS(ACubeMonHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeMon"), NO_API) \
	DECLARE_SERIALIZER(ACubeMonHUD)


#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACubeMonHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACubeMonHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeMonHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeMonHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeMonHUD(ACubeMonHUD&&); \
	NO_API ACubeMonHUD(const ACubeMonHUD&); \
public:


#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeMonHUD(ACubeMonHUD&&); \
	NO_API ACubeMonHUD(const ACubeMonHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeMonHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeMonHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACubeMonHUD)


#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define CubeMon_Source_CubeMon_CubeMonHUD_h_9_PROLOG
#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_RPC_WRAPPERS \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_INCLASS \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CubeMon_Source_CubeMon_CubeMonHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_INCLASS_NO_PURE_DECLS \
	CubeMon_Source_CubeMon_CubeMonHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBEMON_API UClass* StaticClass<class ACubeMonHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CubeMon_Source_CubeMon_CubeMonHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
