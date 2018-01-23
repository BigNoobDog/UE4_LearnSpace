// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankTurret;
#ifdef TANKSWAR_TankAimingComponent_generated_h
#error "TankAimingComponent.generated.h already included, missing '#pragma once' in TankAimingComponent.h"
#endif
#define TANKSWAR_TankAimingComponent_generated_h

#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_turret); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Init(Z_Param_turret); \
		P_NATIVE_END; \
	}


#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_turret); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Init(Z_Param_turret); \
		P_NATIVE_END; \
	}


#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankAimingComponent(); \
	friend TANKSWAR_API class UClass* Z_Construct_UClass_UTankAimingComponent(); \
public: \
	DECLARE_CLASS(UTankAimingComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TanksWar"), NO_API) \
	DECLARE_SERIALIZER(UTankAimingComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTankAimingComponent(); \
	friend TANKSWAR_API class UClass* Z_Construct_UClass_UTankAimingComponent(); \
public: \
	DECLARE_CLASS(UTankAimingComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TanksWar"), NO_API) \
	DECLARE_SERIALIZER(UTankAimingComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankAimingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankAimingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAimingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAimingComponent(UTankAimingComponent&&); \
	NO_API UTankAimingComponent(const UTankAimingComponent&); \
public:


#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAimingComponent(UTankAimingComponent&&); \
	NO_API UTankAimingComponent(const UTankAimingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAimingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankAimingComponent)


#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define TanksWar_Source_TanksWar_TankAimingComponent_h_13_PROLOG
#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_RPC_WRAPPERS \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_INCLASS \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TanksWar_Source_TanksWar_TankAimingComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_INCLASS_NO_PURE_DECLS \
	TanksWar_Source_TanksWar_TankAimingComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TanksWar_Source_TanksWar_TankAimingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
