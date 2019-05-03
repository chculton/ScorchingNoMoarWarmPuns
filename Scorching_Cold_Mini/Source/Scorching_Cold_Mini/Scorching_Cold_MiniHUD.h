// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Scorching_Cold_MiniHUD.generated.h"

UCLASS()
class AScorching_Cold_MiniHUD : public AHUD
{
	GENERATED_BODY()

public:
	AScorching_Cold_MiniHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

