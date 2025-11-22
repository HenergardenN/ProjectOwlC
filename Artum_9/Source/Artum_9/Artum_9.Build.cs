// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Artum_9 : ModuleRules
{
	public Artum_9(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
