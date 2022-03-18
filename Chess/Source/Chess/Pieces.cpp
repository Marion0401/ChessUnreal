// Fill out your copyright notice in the Description page of Project Settings.


#include "Pieces.h"

// Sets default values
APieces::APieces()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APieces::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->SpawnActor<APawn>(APawn::StaticClass(), FTransform());
	
}



