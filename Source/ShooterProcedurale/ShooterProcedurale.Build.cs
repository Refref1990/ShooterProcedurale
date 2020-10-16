// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShooterProcedurale : ModuleRules
{
	public ShooterProcedurale(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
