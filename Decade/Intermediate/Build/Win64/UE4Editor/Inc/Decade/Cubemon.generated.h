// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECADE_Cubemon_generated_h
#error "Cubemon.generated.h already included, missing '#pragma once' in Cubemon.h"
#endif
#define DECADE_Cubemon_generated_h

#define Decade_Source_Decade_Cubemon_h_13_RPC_WRAPPERS
#define Decade_Source_Decade_Cubemon_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Decade_Source_Decade_Cubemon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACubemon(); \
	friend struct Z_Construct_UClass_ACubemon_Statics; \
public: \
	DECLARE_CLASS(ACubemon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ACubemon)


#define Decade_Source_Decade_Cubemon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACubemon(); \
	friend struct Z_Construct_UClass_ACubemon_Statics; \
public: \
	DECLARE_CLASS(ACubemon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ACubemon)


#define Decade_Source_Decade_Cubemon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACubemon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACubemon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubemon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubemon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubemon(ACubemon&&); \
	NO_API ACubemon(const ACubemon&); \
public:


#define Decade_Source_Decade_Cubemon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubemon(ACubemon&&); \
	NO_API ACubemon(const ACubemon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubemon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubemon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACubemon)


#define Decade_Source_Decade_Cubemon_h_13_PRIVATE_PROPERTY_OFFSET
#define Decade_Source_Decade_Cubemon_h_10_PROLOG
#define Decade_Source_Decade_Cubemon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_Cubemon_h_13_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_Cubemon_h_13_RPC_WRAPPERS \
	Decade_Source_Decade_Cubemon_h_13_INCLASS \
	Decade_Source_Decade_Cubemon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decade_Source_Decade_Cubemon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_Cubemon_h_13_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_Cubemon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Decade_Source_Decade_Cubemon_h_13_INCLASS_NO_PURE_DECLS \
	Decade_Source_Decade_Cubemon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECADE_API UClass* StaticClass<class ACubemon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decade_Source_Decade_Cubemon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
