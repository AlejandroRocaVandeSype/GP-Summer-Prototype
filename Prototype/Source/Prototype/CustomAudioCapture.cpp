// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomAudioCapture.h"
#include "AudioCaptureComponent.h"
#include "AudioDevice.h"
#include "AudioMixerDevice.h"
#include "AudioDeviceManager.h"

// Sets default values
ACustomAudioCapture::ACustomAudioCapture()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomAudioCapture::BeginPlay()
{
	Super::BeginPlay();

	UAudioCaptureComponent* AudioCapture = Cast<UAudioCaptureComponent>(
		AddComponentByClass(UAudioCaptureComponent::StaticClass(), false, FTransform::Identity, false));
	
	AudioCapture->JitterLatencyFrames = 30;
	AudioCapture->SoundSubmix = Submix;
	AudioCapture->Start();

	Audio::FMixerDevice* MixerDevice = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(GetWorld());
	MixerDevice->RegisterSoundSubmix(Submix);
	MixerDevice->RegisterSoundClass(SoundClass);
	MixerDevice->StartRecording(Submix, 0);
	Submix->SetSubmixOutputVolume(GetWorld(), 1);
}

// Called every frame
void ACustomAudioCapture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

