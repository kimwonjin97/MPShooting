// Fill out your copyright notice in the Description page of Project Settings.


#include "MPShootingCharacter.h"

// Sets default values
AMPShootingCharacter::AMPShootingCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMPShootingCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMPShootingCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMPShootingCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

