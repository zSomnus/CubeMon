// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef DECADE_DecadeProjectile_generated_h
#error "DecadeProjectile.generated.h already included, missing '#pragma once' in DecadeProjectile.h"
#endif
#define DECADE_DecadeProjectile_generated_h

#define Decade_Source_Decade_DecadeProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Decade_Source_Decade_DecadeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Decade_Source_Decade_DecadeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADecadeProjectile(); \
	friend struct Z_Construct_UClass_ADecadeProjectile_Statics; \
public: \
	DECLARE_CLASS(ADecadeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ADecadeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Decade_Source_Decade_DecadeProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADecadeProjectile(); \
	friend struct Z_Construct_UClass_ADecadeProjectile_Statics; \
public: \
	DECLARE_CLASS(ADecadeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Decade"), NO_API) \
	DECLARE_SERIALIZER(ADecadeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Decade_Source_Decade_DecadeProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADecadeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecadeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecadeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecadeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecadeProjectile(ADecadeProjectile&&); \
	NO_API ADecadeProjectile(const ADecadeProjectile&); \
public:


#define Decade_Source_Decade_DecadeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecadeProjectile(ADecadeProjectile&&); \
	NO_API ADecadeProjectile(const ADecadeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecadeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADecadeProjectile)


#define Decade_Source_Decade_DecadeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ADecadeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ADecadeProjectile, ProjectileMovement); }


#define Decade_Source_Decade_DecadeProjectile_h_9_PROLOG
#define Decade_Source_Decade_DecadeProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_DecadeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_DecadeProjectile_h_12_RPC_WRAPPERS \
	Decade_Source_Decade_DecadeProjectile_h_12_INCLASS \
	Decade_Source_Decade_DecadeProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Decade_Source_Decade_DecadeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Decade_Source_Decade_DecadeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Decade_Source_Decade_DecadeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Decade_Source_Decade_DecadeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Decade_Source_Decade_DecadeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECADE_API UClass* StaticClass<class ADecadeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Decade_Source_Decade_DecadeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
