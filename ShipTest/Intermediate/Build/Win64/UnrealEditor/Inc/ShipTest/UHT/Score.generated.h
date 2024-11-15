// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Score.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHIPTEST_Score_generated_h
#error "Score.generated.h already included, missing '#pragma once' in Score.h"
#endif
#define SHIPTEST_Score_generated_h

#define FID_ShipTest_Source_ShipTest_Score_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckLoseCondition); \
	DECLARE_FUNCTION(execCheckWinCondition);


#define FID_ShipTest_Source_ShipTest_Score_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScore(); \
	friend struct Z_Construct_UClass_UScore_Statics; \
public: \
	DECLARE_CLASS(UScore, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShipTest"), NO_API) \
	DECLARE_SERIALIZER(UScore)


#define FID_ShipTest_Source_ShipTest_Score_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScore(UScore&&); \
	UScore(const UScore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScore) \
	NO_API virtual ~UScore();


#define FID_ShipTest_Source_ShipTest_Score_h_12_PROLOG
#define FID_ShipTest_Source_ShipTest_Score_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShipTest_Source_ShipTest_Score_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShipTest_Source_ShipTest_Score_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShipTest_Source_ShipTest_Score_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHIPTEST_API UClass* StaticClass<class UScore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShipTest_Source_ShipTest_Score_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
