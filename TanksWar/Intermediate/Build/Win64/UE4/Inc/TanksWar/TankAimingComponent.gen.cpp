// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankAimingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimingComponent() {}
// Cross Module References
	TANKSWAR_API UEnum* Z_Construct_UEnum_TanksWar_EFireState();
	UPackage* Z_Construct_UPackage__Script_TanksWar();
	TANKSWAR_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	TANKSWAR_API UClass* Z_Construct_UClass_UTankAimingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TANKSWAR_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire();
	TANKSWAR_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Init();
	TANKSWAR_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANKSWAR_API UClass* Z_Construct_UClass_ABullet_NoRegister();
// End Cross Module References
	static UEnum* EFireState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TanksWar_EFireState, Z_Construct_UPackage__Script_TanksWar(), TEXT("EFireState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireState(EFireState_StaticEnum, TEXT("/Script/TanksWar"), TEXT("EFireState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TanksWar_EFireState_CRC() { return 850653365U; }
	UEnum* Z_Construct_UEnum_TanksWar_EFireState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TanksWar();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireState"), 0, Get_Z_Construct_UEnum_TanksWar_EFireState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireState::Reloading", (int64)EFireState::Reloading },
				{ "EFireState::Aiming", (int64)EFireState::Aiming },
				{ "EFireState::Locked", (int64)EFireState::Locked },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TanksWar,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFireState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFireState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
		UClass* Class = UTankAimingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", (Native)&UTankAimingComponent::execFire },
			{ "Init", (Native)&UTankAimingComponent::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GamePlay" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Init()
	{
		struct TankAimingComponent_eventInit_Parms
		{
			UTankTurret* turret;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_turret_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_turret = { UE4CodeGen_Private::EPropertyClass::Object, "turret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventInit_Parms, turret), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(NewProp_turret_MetaData, ARRAY_COUNT(NewProp_turret_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_turret,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankAimingComponent_eventInit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TanksWar,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankAimingComponent_Fire, "Fire" }, // 4160537225
				{ &Z_Construct_UFunction_UTankAimingComponent_Init, "Init" }, // 1314773262
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "TankAimingComponent.h" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Firestate_MetaData[] = {
				{ "Category", "TankAimingComponent" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Firestate = { UE4CodeGen_Private::EPropertyClass::Enum, "Firestate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, Firestate), Z_Construct_UEnum_TanksWar_EFireState, METADATA_PARAMS(NewProp_Firestate_MetaData, ARRAY_COUNT(NewProp_Firestate_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Firestate_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletType_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletType = { UE4CodeGen_Private::EPropertyClass::Class, "BulletType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, BulletType), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BulletType_MetaData, ARRAY_COUNT(NewProp_BulletType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReloadTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, ReloadTime), METADATA_PARAMS(NewProp_ReloadTime_MetaData, ARRAY_COUNT(NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletLunchSpeed_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletLunchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BulletLunchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, BulletLunchSpeed), METADATA_PARAMS(NewProp_BulletLunchSpeed_MetaData, ARRAY_COUNT(NewProp_BulletLunchSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Firestate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Firestate_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReloadTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletLunchSpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankAimingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankAimingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAimingComponent, 2932206064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/TanksWar"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
