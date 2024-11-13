// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShipTestCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHIPTEST_ShipTestCharacter_generated_h
#error "ShipTestCharacter.generated.h already included, missing '#pragma once' in ShipTestCharacter.h"
#endif
#define SHIPTEST_ShipTestCharacter_generated_h

#define FID_ShipTest_Source_ShipTest_ShipTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShipTestCharacter(); \
	friend struct Z_Construct_UClass_AShipTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AShipTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShipTest"), NO_API) \
	DECLARE_SERIALIZER(AShipTestCharacter)


#define FID_ShipTest_Source_ShipTest_ShipTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShipTestCharacter(AShipTestCharacter&&); \
	AShipTestCharacter(const AShipTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShipTestCharacter) \
	NO_API virtual ~AShipTestCharacter();


#define FID_ShipTest_Source_ShipTest_ShipTestCharacter_h_18_PROLOG
#define FID_ShipTest_Source_ShipTest_ShipTestCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShipTest_Source_ShipTest_ShipTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_ShipTest_Source_ShipTest_ShipTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHIPTEST_API UClass* StaticClass<class AShipTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShipTest_Source_ShipTest_ShipTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
