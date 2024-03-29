// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PluginGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINREPLAYSYSTEM_API UPluginGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPluginGameInstance();
	UPROPERTY(EditDefaultsOnly, Category = "Replays")
		FString RecordingName;
	UPROPERTY(EditDefaultsOnly, Category = "Replays")
		FString FriendlyRecordingName;
	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartRecording();
	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StopRecording();
	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartReplay();

	
};
