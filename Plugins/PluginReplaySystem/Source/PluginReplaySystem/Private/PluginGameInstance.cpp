// Fill out your copyright notice in the Description page of Project Settings.


#include "PluginGameInstance.h"


UPluginGameInstance::UPluginGameInstance()
{
	RecordingName = "MyReplay";
	FriendlyRecordingName = "My Replay";
}
void UPluginGameInstance::StartRecording()
{
	StartRecordingReplay(RecordingName, FriendlyRecordingName);
}
void UPluginGameInstance::StopRecording()
{
	StopRecordingReplay();
}
void UPluginGameInstance::StartReplay()
{
	PlayReplay(RecordingName, nullptr);
}