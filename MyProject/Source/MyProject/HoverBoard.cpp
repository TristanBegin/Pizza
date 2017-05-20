// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "HoverBoard.h"


// Sets default values
AHoverBoard::AHoverBoard()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHoverBoard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHoverBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHoverBoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

