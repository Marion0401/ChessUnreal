// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

void AMyGameModeBase :: BeginPlay() 
{
		Board = GetWorld()->SpawnActor<ABoard>();
		UStaticMesh* whiteTileMesh = LoadObject<UStaticMesh>(Board, TEXT("/Game/Mesh/WhiteTileMesh"));
		UStaticMesh* blackTileMesh = LoadObject<UStaticMesh>(Board, TEXT("/Game/Mesh/BlackTileMesh"));
		Board->Init(8, 8, 100, whiteTileMesh, blackTileMesh);
}
