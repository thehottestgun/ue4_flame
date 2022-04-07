// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLAMERPG_FlameRPGCharacter_generated_h
#error "FlameRPGCharacter.generated.h already included, missing '#pragma once' in FlameRPGCharacter.h"
#endif
#define FLAMERPG_FlameRPGCharacter_generated_h

#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHpPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHpPercentage(); \
		P_NATIVE_END; \
	}


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHpPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHpPercentage(); \
		P_NATIVE_END; \
	}


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlameRPGCharacter(); \
	friend struct Z_Construct_UClass_AFlameRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlameRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FlameRPG"), NO_API) \
	DECLARE_SERIALIZER(AFlameRPGCharacter)


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFlameRPGCharacter(); \
	friend struct Z_Construct_UClass_AFlameRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlameRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FlameRPG"), NO_API) \
	DECLARE_SERIALIZER(AFlameRPGCharacter)


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlameRPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlameRPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlameRPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlameRPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlameRPGCharacter(AFlameRPGCharacter&&); \
	NO_API AFlameRPGCharacter(const AFlameRPGCharacter&); \
public:


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlameRPGCharacter(AFlameRPGCharacter&&); \
	NO_API AFlameRPGCharacter(const AFlameRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlameRPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlameRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlameRPGCharacter)


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFlameRPGCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFlameRPGCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MaxHp() { return STRUCT_OFFSET(AFlameRPGCharacter, MaxHp); } \
	FORCEINLINE static uint32 __PPO__Hp() { return STRUCT_OFFSET(AFlameRPGCharacter, Hp); }


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_10_PROLOG
#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_RPC_WRAPPERS \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_INCLASS \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FlameRPG_Source_FlameRPG_FlameRPGCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLAMERPG_API UClass* StaticClass<class AFlameRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlameRPG_Source_FlameRPG_FlameRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
