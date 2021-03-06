// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankTurret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTurret() {}
// Cross Module References
	TANKSWAR_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	TANKSWAR_API UClass* Z_Construct_UClass_UTankTurret();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TanksWar();
// End Cross Module References
	void UTankTurret::StaticRegisterNativesUTankTurret()
	{
	}
	UClass* Z_Construct_UClass_UTankTurret_NoRegister()
	{
		return UTankTurret::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TanksWar,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "TankTurret.h" },
				{ "ModuleRelativePath", "TankTurret.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotMinPitch_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankTurret.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotMinPitch = { UE4CodeGen_Private::EPropertyClass::Float, "RotMinPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTankTurret, RotMinPitch), METADATA_PARAMS(NewProp_RotMinPitch_MetaData, ARRAY_COUNT(NewProp_RotMinPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotMaxPitch_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankTurret.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotMaxPitch = { UE4CodeGen_Private::EPropertyClass::Float, "RotMaxPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTankTurret, RotMaxPitch), METADATA_PARAMS(NewProp_RotMaxPitch_MetaData, ARRAY_COUNT(NewProp_RotMaxPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotMaxAngle_V_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankTurret.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotMaxAngle_V = { UE4CodeGen_Private::EPropertyClass::Float, "RotMaxAngle_V", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTankTurret, RotMaxAngle_V), METADATA_PARAMS(NewProp_RotMaxAngle_V_MetaData, ARRAY_COUNT(NewProp_RotMaxAngle_V_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotMaxAngle_H_MetaData[] = {
				{ "Category", "SetUp" },
				{ "ModuleRelativePath", "TankTurret.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotMaxAngle_H = { UE4CodeGen_Private::EPropertyClass::Float, "RotMaxAngle_H", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTankTurret, RotMaxAngle_H), METADATA_PARAMS(NewProp_RotMaxAngle_H_MetaData, ARRAY_COUNT(NewProp_RotMaxAngle_H_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotMinPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotMaxPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotMaxAngle_V,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotMaxAngle_H,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankTurret>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankTurret::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UTankTurret, 2400076014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTurret(Z_Construct_UClass_UTankTurret, &UTankTurret::StaticClass, TEXT("/Script/TanksWar"), TEXT("UTankTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
