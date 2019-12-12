// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECADE_DecadeGameMode_generated_h
#error "DecadeGameMode.generated.h already included, missing '#pragma once' in DecadeGameMode.h"
#endif
#define DECADE_DecadeGameMode_generated_h

#define Decade_Source_Decade_DecadeGameMode_h_12_RPC_WRAPPERS
#define Decade_Source_Decade_DecadeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Decade_Source_Decade_DecadeGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADecadeGameMode(); \
	friend struct Z_Construct_UClass_ADecadeGameMode_Statics; \
public: \
	DECLARE_CLASS(ADecadeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Decade"), DECADE_API) \
	DECLARE_SERIALIZER(ADecadeGameMode)


#define Decade_Source_Decade_DecadeGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADecadeGameMode(); \
	friend struct Z_Construct_UClass_ADecadeGameMode_Statics; \
public: \
	DECLARE_CLASS(ADecadeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Decade"), DECADE_API) \
	DECLARE_SERIALIZER(ADecadeGameMode)


#define Decade_Source_Decade_DecadeGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DECADE_API ADecadeGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecadeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECADE_API, ADecadeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecadeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECADE_API ADecadeGameMode(ADecadeGameMode&&); \
	DECADE_API ADecadeGameMode(const ADecadeGameMode&); \
public:


#define Decade_Source_Decade_DecadeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DECADE_API ADecadeGameMode(ADecadeGameMode&&); \
	DECADE_API ADecadeGameMode(const ADecadeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DECADE_API, ADecadeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecadeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADecadeGameMode)


#define Decade_Source_Decade_DecadeGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Decade_Source_Decade_DecadeGameMode_h_9_PROLOG
#define Decade_Source_Decade_DecadeGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_DecadeGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_DecadeGameMode_h_12_RPC_WRAPPERS \
	Decade_Source_Decade_DecadeGameMode_h_12_INCLASS \
	Decade_Source_Decade_DecadeGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decade_Source_Decade_DecadeGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_DecadeGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_DecadeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Decade_Source_Decade_DecadeGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Decade_Source_Decade_DecadeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECADE_API UClass* StaticClass<class ADecadeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decade_Source_Decade_DecadeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS