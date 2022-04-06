// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLAMERPG_FlameRPGGameMode_generated_h
#error "FlameRPGGameMode.generated.h already included, missing '#pragma once' in FlameRPGGameMode.h"
#endif
#define FLAMERPG_FlameRPGGameMode_generated_h

#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_RPC_WRAPPERS
#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlameRPGGameMode(); \
	friend struct Z_Construct_UClass_AFlameRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(AFlameRPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FlameRPG"), FLAMERPG_API) \
	DECLARE_SERIALIZER(AFlameRPGGameMode)


#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFlameRPGGameMode(); \
	friend struct Z_Construct_UClass_AFlameRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(AFlameRPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FlameRPG"), FLAMERPG_API) \
	DECLARE_SERIALIZER(AFlameRPGGameMode)


#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FLAMERPG_API AFlameRPGGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlameRPGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FLAMERPG_API, AFlameRPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlameRPGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FLAMERPG_API AFlameRPGGameMode(AFlameRPGGameMode&&); \
	FLAMERPG_API AFlameRPGGameMode(const AFlameRPGGameMode&); \
public:


#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FLAMERPG_API AFlameRPGGameMode(AFlameRPGGameMode&&); \
	FLAMERPG_API AFlameRPGGameMode(const AFlameRPGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FLAMERPG_API, AFlameRPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlameRPGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlameRPGGameMode)


#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_9_PROLOG
#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_RPC_WRAPPERS \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_INCLASS \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FlameRPG_Source_FlameRPG_FlameRPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLAMERPG_API UClass* StaticClass<class AFlameRPGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlameRPG_Source_FlameRPG_FlameRPGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
