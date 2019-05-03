// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Scorching_Cold_MiniTarget : TargetRules
{
	public Scorching_Cold_MiniTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Scorching_Cold_Mini");
	}
}
