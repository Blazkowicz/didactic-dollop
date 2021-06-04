// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tyyne : ModuleRules
{
	public Tyyne(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
