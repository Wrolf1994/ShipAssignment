// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShipTest/Public/MyGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
SHIPTEST_API UClass* Z_Construct_UClass_UMyGameInstance();
SHIPTEST_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShipTest();
// End Cross Module References

// Begin Class UMyGameInstance Function AddLoses
struct Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics
{
	struct MyGameInstance_eventAddLoses_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventAddLoses_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "AddLoses", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::MyGameInstance_eventAddLoses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::MyGameInstance_eventAddLoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_AddLoses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_AddLoses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execAddLoses)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLoses(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UMyGameInstance Function AddLoses

// Begin Class UMyGameInstance Function AddWins
struct Z_Construct_UFunction_UMyGameInstance_AddWins_Statics
{
	struct MyGameInstance_eventAddWins_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventAddWins_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "AddWins", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::MyGameInstance_eventAddWins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::MyGameInstance_eventAddWins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_AddWins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_AddWins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execAddWins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWins(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UMyGameInstance Function AddWins

// Begin Class UMyGameInstance
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
	UClass* Class = UMyGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLoses", &UMyGameInstance::execAddLoses },
		{ "AddWins", &UMyGameInstance::execAddWins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWins_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalLoses_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalWins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalLoses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_AddLoses, "AddLoses" }, // 1445159390
		{ &Z_Construct_UFunction_UMyGameInstance_AddWins, "AddWins" }, // 2826986834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TotalWins = { "TotalWins", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, TotalWins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWins_MetaData), NewProp_TotalWins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TotalLoses = { "TotalLoses", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, TotalLoses), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalLoses_MetaData), NewProp_TotalLoses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TotalWins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TotalLoses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ShipTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
template<> SHIPTEST_API UClass* StaticClass<UMyGameInstance>()
{
	return UMyGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// End Class UMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Public_MyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 2087889010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Public_MyGameInstance_h_838103643(TEXT("/Script/ShipTest"),
	Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Public_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_Public_MyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
