// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankTruck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTruck() {}
// Cross Module References
	TANKSWAR_API UClass* Z_Construct_UClass_UTankTruck_NoRegister();
	TANKSWAR_API UClass* Z_Construct_UClass_UTankTruck();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TanksWar();
	TANKSWAR_API UFunction* Z_Construct_UFunction_UTankTruck_SetThrottle();
// End Cross Module References
	void UTankTruck::StaticRegisterNativesUTankTruck()
	{
		UClass* Class = UTankTruck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetThrottle", (Native)&UTankTruck::execSetThrottle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankTruck_SetThrottle()
	{
		struct TankTruck_eventSetThrottle_Parms
		{
			float Throttle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle = { UE4CodeGen_Private::EPropertyClass::Float, "Throttle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankTruck_eventSetThrottle_Parms, Throttle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throttle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "TankTruck.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankTruck, "SetThrottle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankTruck_eventSetThrottle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankTruck_NoRegister()
	{
		return UTankTruck::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTruck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TanksWar,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankTruck_SetThrottle, "SetThrottle" }, // 3096650544
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "TankTruck.h" },
				{ "ModuleRelativePath", "TankTruck.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankForce_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankTruck.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankForce = { UE4CodeGen_Private::EPropertyClass::Float, "TankForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTankTruck, TankForce), METADATA_PARAMS(NewProp_TankForce_MetaData, ARRAY_COUNT(NewProp_TankForce_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TankForce,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankTruck>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankTruck::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UTankTruck, 3647176022);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTruck(Z_Construct_UClass_UTankTruck, &UTankTruck::StaticClass, TEXT("/Script/TanksWar"), TEXT("UTankTruck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTruck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
