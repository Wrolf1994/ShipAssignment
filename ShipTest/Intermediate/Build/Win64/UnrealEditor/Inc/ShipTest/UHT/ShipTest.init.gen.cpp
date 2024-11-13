// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShipTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShipTest()
	{
		if (!Z_Registration_Info_UPackage__Script_ShipTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShipTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB3C77C4A,
				0xB8171754,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShipTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShipTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShipTest(Z_Construct_UPackage__Script_ShipTest, TEXT("/Script/ShipTest"), Z_Registration_Info_UPackage__Script_ShipTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB3C77C4A, 0xB8171754));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
