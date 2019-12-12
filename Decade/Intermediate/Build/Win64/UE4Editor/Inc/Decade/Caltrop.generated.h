// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECADE_Caltrop_generated_h
#error "Caltrop.generated.h already included, missing '#pragma once' in Caltrop.h"
#endif
#define DECADE_Caltrop_generated_h

#define Decade_Source_Decade_Caltrop_h_12_RPC_WRAPPERS
#define Decade_Source_Decade_Caltrop_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Decade_Source_Decade_Caltrop_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaltrop(); \
	friend struct Z_Construct_UClass_ACaltrop_Statics; \
public: \
	DECLARE_CLASS(ACaltrop, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ACaltrop)


#define Decade_Source_Decade_Caltrop_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACaltrop(); \
	friend struct Z_Construct_UClass_ACaltrop_Statics; \
public: \
	DECLARE_CLASS(ACaltrop, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ACaltrop)


#define Decade_Source_Decade_Caltrop_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaltrop(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaltrop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaltrop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaltrop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaltrop(ACaltrop&&); \
	NO_API ACaltrop(const ACaltrop&); \
public:


#define Decade_Source_Decade_Caltrop_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaltrop(ACaltrop&&); \
	NO_API ACaltrop(const ACaltrop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaltrop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaltrop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaltrop)


#define Decade_Source_Decade_Caltrop_h_12_PRIVATE_PROPERTY_OFFSET
#define Decade_Source_Decade_Caltrop_h_9_PROLOG
#define Decade_Source_Decade_Caltrop_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_Caltrop_h_12_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_Caltrop_h_12_RPC_WRAPPERS \
	Decade_Source_Decade_Caltrop_h_12_INCLASS \
	Decade_Source_Decade_Caltrop_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decade_Source_Decade_Caltrop_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_Caltrop_h_12_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_Caltrop_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Decade_Source_Decade_Caltrop_h_12_INCLASS_NO_PURE_DECLS \
	Decade_Source_Decade_Caltrop_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECADE_API UClass* StaticClass<class ACaltrop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decade_Source_Decade_Caltrop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
