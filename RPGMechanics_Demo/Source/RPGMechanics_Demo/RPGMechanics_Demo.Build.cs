// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RPGMechanics_Demo : ModuleRules
{
	public RPGMechanics_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
