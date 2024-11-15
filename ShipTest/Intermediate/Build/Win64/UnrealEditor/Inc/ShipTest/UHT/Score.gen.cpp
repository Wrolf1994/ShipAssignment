// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShipTest/Score.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScore() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SHIPTEST_API UClass* Z_Construct_UClass_UScore();
SHIPTEST_API UClass* Z_Construct_UClass_UScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShipTest();
// End Cross Module References

// Begin Class UScore Function CheckLoseCondition
struct Z_Construct_UFunction_UScore_CheckLoseCondition_Statics
{
	struct Score_eventCheckLoseCondition_Parms
	{
		int32 Health;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Score.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Score_eventCheckLoseCondition_Parms, Health), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Score_eventCheckLoseCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Score_eventCheckLoseCondition_Parms), &Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScore, nullptr, "CheckLoseCondition", nullptr, nullptr, Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::Score_eventCheckLoseCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::Score_eventCheckLoseCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScore_CheckLoseCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScore_CheckLoseCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScore::execCheckLoseCondition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Health);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckLoseCondition(Z_Param_Health);
	P_NATIVE_END;
}
// End Class UScore Function CheckLoseCondition

// Begin Class UScore Function CheckWinCondition
struct Z_Construct_UFunction_UScore_CheckWinCondition_Statics
{
	struct Score_eventCheckWinCondition_Parms
	{
		int32 Distance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Score.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Distance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScore_CheckWinCondition_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Score_eventCheckWinCondition_Parms, Distance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScore_CheckWinCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Score_eventCheckWinCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScore_CheckWinCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Score_eventCheckWinCondition_Parms), &Z_Construct_UFunction_UScore_CheckWinCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScore_CheckWinCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScore_CheckWinCondition_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScore_CheckWinCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScore_CheckWinCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScore_CheckWinCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScore, nullptr, "CheckWinCondition", nullptr, nullptr, Z_Construct_UFunction_UScore_CheckWinCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScore_CheckWinCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScore_CheckWinCondition_Statics::Score_eventCheckWinCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScore_CheckWinCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScore_CheckWinCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScore_CheckWinCondition_Statics::Score_eventCheckWinCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScore_CheckWinCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScore_CheckWinCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScore::execCheckWinCondition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckWinCondition(Z_Param_Distance);
	P_NATIVE_END;
}
// End Class UScore Function CheckWinCondition

// Begin Class UScore
void UScore::StaticRegisterNativesUScore()
{
	UClass* Class = UScore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckLoseCondition", &UScore::execCheckLoseCondition },
		{ "CheckWinCondition", &UScore::execCheckWinCondition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScore);
UClass* Z_Construct_UClass_UScore_NoRegister()
{
	return UScore::StaticClass();
}
struct Z_Construct_UClass_UScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Score.h" },
		{ "ModuleRelativePath", "Score.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScore_CheckLoseCondition, "CheckLoseCondition" }, // 1485354237
		{ &Z_Construct_UFunction_UScore_CheckWinCondition, "CheckWinCondition" }, // 2893845647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ShipTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScore_Statics::ClassParams = {
	&UScore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UScore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScore()
{
	if (!Z_Registration_Info_UClass_UScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScore.OuterSingleton, Z_Construct_UClass_UScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScore.OuterSingleton;
}
template<> SHIPTEST_API UClass* StaticClass<UScore>()
{
	return UScore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScore);
UScore::~UScore() {}
// End Class UScore

// Begin Registration
struct Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Score_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScore, UScore::StaticClass, TEXT("UScore"), &Z_Registration_Info_UClass_UScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScore), 483666360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Score_h_3562182664(TEXT("/Script/ShipTest"),
	Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Score_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Score_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
