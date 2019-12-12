// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DECADE_DecadeCharacter_generated_h
#error "DecadeCharacter.generated.h already included, missing '#pragma once' in DecadeCharacter.h"
#endif
#define DECADE_DecadeCharacter_generated_h

#define Decade_Source_Decade_DecadeCharacter_h_14_RPC_WRAPPERS
#define Decade_Source_Decade_DecadeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Decade_Source_Decade_DecadeCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADecadeCharacter(); \
	friend struct Z_Construct_UClass_ADecadeCharacter_Statics; \
public: \
	DECLARE_CLASS(ADecadeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ADecadeCharacter)


#define Decade_Source_Decade_DecadeCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADecadeCharacter(); \
	friend struct Z_Construct_UClass_ADecadeCharacter_Statics; \
public: \
	DECLARE_CLASS(ADecadeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ADecadeCharacter)


#define Decade_Source_Decade_DecadeCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADecadeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecadeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecadeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecadeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecadeCharacter(ADecadeCharacter&&); \
	NO_API ADecadeCharacter(const ADecadeCharacter&); \
public:


#define Decade_Source_Decade_DecadeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecadeCharacter(ADecadeCharacter&&); \
	NO_API ADecadeCharacter(const ADecadeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecadeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecadeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADecadeCharacter)


#define Decade_Source_Decade_DecadeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ADecadeCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ADecadeCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ADecadeCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ADecadeCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ADecadeCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ADecadeCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ADecadeCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ADecadeCharacter, L_MotionController); }


#define Decade_Source_Decade_DecadeCharacter_h_11_PROLOG
#define Decade_Source_Decade_DecadeCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_DecadeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_DecadeCharacter_h_14_RPC_WRAPPERS \
	Decade_Source_Decade_DecadeCharacter_h_14_INCLASS \
	Decade_Source_Decade_DecadeCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decade_Source_Decade_DecadeCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_DecadeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_DecadeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Decade_Source_Decade_DecadeCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Decade_Source_Decade_DecadeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECADE_API UClass* StaticClass<class ADecadeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decade_Source_Decade_DecadeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
