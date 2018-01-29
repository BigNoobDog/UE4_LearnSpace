// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TANKSWAR_TankTruck_generated_h
#error "TankTruck.generated.h already included, missing '#pragma once' in TankTruck.h"
#endif
#define TANKSWAR_TankTruck_generated_h

#define TanksWar_Source_TanksWar_TankTruck_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define TanksWar_Source_TanksWar_TankTruck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define TanksWar_Source_TanksWar_TankTruck_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankTruck(); \
	friend TANKSWAR_API class UClass* Z_Construct_UClass_UTankTruck(); \
public: \
	DECLARE_CLASS(UTankTruck, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TanksWar"), NO_API) \
	DECLARE_SERIALIZER(UTankTruck) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TanksWar_Source_TanksWar_TankTruck_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankTruck(); \
	friend TANKSWAR_API class UClass* Z_Construct_UClass_UTankTruck(); \
public: \
	DECLARE_CLASS(UTankTruck, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TanksWar"), NO_API) \
	DECLARE_SERIALIZER(UTankTruck) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TanksWar_Source_TanksWar_TankTruck_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTruck(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTruck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTruck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTruck); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTruck(UTankTruck&&); \
	NO_API UTankTruck(const UTankTruck&); \
public:


#define TanksWar_Source_TanksWar_TankTruck_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTruck(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTruck(UTankTruck&&); \
	NO_API UTankTruck(const UTankTruck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTruck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTruck); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTruck)


#define TanksWar_Source_TanksWar_TankTruck_h_15_PRIVATE_PROPERTY_OFFSET
#define TanksWar_Source_TanksWar_TankTruck_h_12_PROLOG
#define TanksWar_Source_TanksWar_TankTruck_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksWar_Source_TanksWar_TankTruck_h_15_PRIVATE_PROPERTY_OFFSET \
	TanksWar_Source_TanksWar_TankTruck_h_15_RPC_WRAPPERS \
	TanksWar_Source_TanksWar_TankTruck_h_15_INCLASS \
	TanksWar_Source_TanksWar_TankTruck_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TanksWar_Source_TanksWar_TankTruck_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksWar_Source_TanksWar_TankTruck_h_15_PRIVATE_PROPERTY_OFFSET \
	TanksWar_Source_TanksWar_TankTruck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TanksWar_Source_TanksWar_TankTruck_h_15_INCLASS_NO_PURE_DECLS \
	TanksWar_Source_TanksWar_TankTruck_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TanksWar_Source_TanksWar_TankTruck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
