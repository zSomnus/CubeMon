// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUBEMON_CubeMonCharacter_generated_h
#error "CubeMonCharacter.generated.h already included, missing '#pragma once' in CubeMonCharacter.h"
#endif
#define CUBEMON_CubeMonCharacter_generated_h

#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_RPC_WRAPPERS
#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACubeMonCharacter(); \
	friend struct Z_Construct_UClass_ACubeMonCharacter_Statics; \
public: \
	DECLARE_CLASS(ACubeMonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CubeMon"), NO_API) \
	DECLARE_SERIALIZER(ACubeMonCharacter)


#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACubeMonCharacter(); \
	friend struct Z_Construct_UClass_ACubeMonCharacter_Statics; \
public: \
	DECLARE_CLASS(ACubeMonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CubeMon"), NO_API) \
	DECLARE_SERIALIZER(ACubeMonCharacter)


#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACubeMonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACubeMonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeMonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeMonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeMonCharacter(ACubeMonCharacter&&); \
	NO_API ACubeMonCharacter(const ACubeMonCharacter&); \
public:


#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeMonCharacter(ACubeMonCharacter&&); \
	NO_API ACubeMonCharacter(const ACubeMonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeMonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeMonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACubeMonCharacter)


#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ACubeMonCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ACubeMonCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ACubeMonCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ACubeMonCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ACubeMonCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ACubeMonCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ACubeMonCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ACubeMonCharacter, L_MotionController); }


#define CubeMon_Source_CubeMon_CubeMonCharacter_h_11_PROLOG
#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_RPC_WRAPPERS \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_INCLASS \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CubeMon_Source_CubeMon_CubeMonCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_INCLASS_NO_PURE_DECLS \
	CubeMon_Source_CubeMon_CubeMonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBEMON_API UClass* StaticClass<class ACubeMonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CubeMon_Source_CubeMon_CubeMonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
