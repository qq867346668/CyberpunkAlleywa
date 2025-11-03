// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CyberpunkAlleywa : ModuleRules
{
	public CyberpunkAlleywa(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG" });
		PrivateDependencyModuleNames.AddRange(new string[] { "Renderer", "RHI", "RenderCore" });
	}
}
