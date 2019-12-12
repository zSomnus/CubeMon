// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECADE_PlayerHPWidget_generated_h
#error "PlayerHPWidget.generated.h already included, missing '#pragma once' in PlayerHPWidget.h"
#endif
#define DECADE_PlayerHPWidget_generated_h

#define Decade_Source_Decade_PlayerHPWidget_h_15_RPC_WRAPPERS
#define Decade_Source_Decade_PlayerHPWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Decade_Source_Decade_PlayerHPWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHPWidget(); \
	friend struct Z_Construct_UClass_UPlayerHPWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHPWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHPWidget)


#define Decade_Source_Decade_PlayerHPWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHPWidget(); \
	friend struct Z_Construct_UClass_UPlayerHPWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHPWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHPWidget)


#define Decade_Source_Decade_PlayerHPWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHPWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHPWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHPWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHPWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHPWidget(UPlayerHPWidget&&); \
	NO_API UPlayerHPWidget(const UPlayerHPWidget&); \
public:


#define Decade_Source_Decade_PlayerHPWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHPWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHPWidget(UPlayerHPWidget&&); \
	NO_API UPlayerHPWidget(const UPlayerHPWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHPWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHPWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHPWidget)


#define Decade_Source_Decade_PlayerHPWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Decade_Source_Decade_PlayerHPWidget_h_12_PROLOG
#define Decade_Source_Decade_PlayerHPWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_PlayerHPWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_PlayerHPWidget_h_15_RPC_WRAPPERS \
	Decade_Source_Decade_PlayerHPWidget_h_15_INCLASS \
	Decade_Source_Decade_PlayerHPWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decade_Source_Decade_PlayerHPWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_PlayerHPWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_PlayerHPWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Decade_Source_Decade_PlayerHPWidget_h_15_INCLASS_NO_PURE_DECLS \
	Decade_Source_Decade_PlayerHPWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECADE_API UClass* StaticClass<class UPlayerHPWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decade_Source_Decade_PlayerHPWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
