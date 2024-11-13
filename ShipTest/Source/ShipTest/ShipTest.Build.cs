// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShipTest : ModuleRules
{
	public ShipTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
