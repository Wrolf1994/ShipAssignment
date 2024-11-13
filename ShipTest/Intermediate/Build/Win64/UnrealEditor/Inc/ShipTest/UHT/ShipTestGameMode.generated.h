// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShipTestGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHIPTEST_ShipTestGameMode_generated_h
#error "ShipTestGameMode.generated.h already included, missing '#pragma once' in ShipTestGameMode.h"
#endif
#define SHIPTEST_ShipTestGameMode_generated_h

#define FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShipTestGameMode(); \
	friend struct Z_Construct_UClass_AShipTestGameMode_Statics; \
public: \
	DECLARE_CLASS(AShipTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShipTest"), SHIPTEST_API) \
	DECLARE_SERIALIZER(AShipTestGameMode)


#define FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShipTestGameMode(AShipTestGameMode&&); \
	AShipTestGameMode(const AShipTestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHIPTEST_API, AShipTestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipTestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShipTestGameMode) \
	SHIPTEST_API virtual ~AShipTestGameMode();


#define FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_9_PROLOG
#define FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHIPTEST_API UClass* StaticClass<class AShipTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShipTest_Source_ShipTest_ShipTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
