// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Components\StaticMeshComponent.h"
#include "Components\BoxComponent.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	Mesh->SetupAttachment(RootComponent);

	ItemCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ItemCollisionCP"));
	ItemCollision->SetupAttachment(Mesh);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	// Bind the collision function
	FScriptDelegate DelegateSubscriber;
	DelegateSubscriber.BindUFunction(this, "OnComponentBeginOverlap");
	ItemCollision->OnComponentBeginOverlap.Add(DelegateSubscriber);
	
}

void AItem::OnComponentBeginOverlap(UBoxComponent* Component, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	

}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

