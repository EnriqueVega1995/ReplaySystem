// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ReplayGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class REPLAYSYSTEM_API UReplayGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UReplayGameInstance();

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
//public: 
//	/** Start recording a replay from blueprint. ReplayName = Name of file on disk, FriendlyName = Name of replay in UI */ 
//		UFUNCTION(BlueprintCallable, Category = "Replays") void StartRecordingReplayFromBP(FString ReplayName, FString FriendlyName);
//
//	//Start recording a running replay and save it, from blueprint. \* /
//		UFUNCTION(BlueprintCallable, Category = "Replays")
//		void StopRecordingReplayFromBP();
//
//	//Start playback for a previously recorded Replay, from blueprint \* /
//		UFUNCTION(BlueprintCallable, Category = "Replays")
//		void PlayReplayFromBP(FString ReplayName);
//
//	//Start looking for / finding replays on the hard drive \ * /
//		UFUNCTION(BlueprintCallable, Category = "Replays")
//		void FindReplays();
//
//	//Apply a new custom name to the replay(for UI only) \* /
//		UFUNCTION(BlueprintCallable, Category = "Replays")
//		void RenameReplay(const FString & ReplayName, const FString & NewFriendlyReplayName);
//
//	//Delete a previously recorded replay \ * /
//		UFUNCTION(BlueprintCallable, Category = "Replays")
//		void DeleteReplay(const FString & ReplayName);
	
};
