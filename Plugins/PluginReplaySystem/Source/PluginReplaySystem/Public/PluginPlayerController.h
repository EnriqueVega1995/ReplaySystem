// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PluginPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINREPLAYSYSTEM_API APluginPlayerController : public APlayerController
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Replays")
		void RestartRecording();
};
