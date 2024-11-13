// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShipTest/ShipTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipTestGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHIPTEST_API UClass* Z_Construct_UClass_AShipTestGameMode();
SHIPTEST_API UClass* Z_Construct_UClass_AShipTestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShipTest();
// End Cross Module References

// Begin Class AShipTestGameMode
void AShipTestGameMode::StaticRegisterNativesAShipTestGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShipTestGameMode);
UClass* Z_Construct_UClass_AShipTestGameMode_NoRegister()
{
	return AShipTestGameMode::StaticClass();
}
struct Z_Construct_UClass_AShipTestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShipTestGameMode.h" },
		{ "ModuleRelativePath", "ShipTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipTestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShipTestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShipTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShipTestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShipTestGameMode_Statics::ClassParams = {
	&AShipTestGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShipTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShipTestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShipTestGameMode()
{
	if (!Z_Registration_Info_UClass_AShipTestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShipTestGameMode.OuterSingleton, Z_Construct_UClass_AShipTestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShipTestGameMode.OuterSingleton;
}
template<> SHIPTEST_API UClass* StaticClass<AShipTestGameMode>()
{
	return AShipTestGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShipTestGameMode);
AShipTestGameMode::~AShipTestGameMode() {}
// End Class AShipTestGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShipTestGameMode, AShipTestGameMode::StaticClass, TEXT("AShipTestGameMode"), &Z_Registration_Info_UClass_AShipTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShipTestGameMode), 4010714865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_2776229504(TEXT("/Script/ShipTest"),
	Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShipTest_Source_ShipTest_ShipTestGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
