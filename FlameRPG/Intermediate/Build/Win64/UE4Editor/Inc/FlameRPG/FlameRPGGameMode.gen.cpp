// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlameRPG/FlameRPGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlameRPGGameMode() {}
// Cross Module References
	FLAMERPG_API UClass* Z_Construct_UClass_AFlameRPGGameMode_NoRegister();
	FLAMERPG_API UClass* Z_Construct_UClass_AFlameRPGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FlameRPG();
// End Cross Module References
	void AFlameRPGGameMode::StaticRegisterNativesAFlameRPGGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFlameRPGGameMode_NoRegister()
	{
		return AFlameRPGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFlameRPGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlameRPGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FlameRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameRPGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FlameRPGGameMode.h" },
		{ "ModuleRelativePath", "FlameRPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlameRPGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlameRPGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlameRPGGameMode_Statics::ClassParams = {
		&AFlameRPGGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AFlameRPGGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFlameRPGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlameRPGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlameRPGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlameRPGGameMode, 163966948);
	template<> FLAMERPG_API UClass* StaticClass<AFlameRPGGameMode>()
	{
		return AFlameRPGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlameRPGGameMode(Z_Construct_UClass_AFlameRPGGameMode, &AFlameRPGGameMode::StaticClass, TEXT("/Script/FlameRPG"), TEXT("AFlameRPGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlameRPGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
