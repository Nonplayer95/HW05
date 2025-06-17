// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	start = FVector2D(0.0f, 0.0f);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("== MyActor가 스폰되었습니다! 랜덤 이동을 시작합니다 =="));
	move();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AMyActor::step()
{
	return FMath::RandRange(0, 1);
}

void AMyActor::move()
{
	FVector2D CurrentPosition = start;

	UE_LOG(LogTemp, Warning, TEXT("(%.0f, %.0f)"), CurrentPosition.X, CurrentPosition.Y);
	for (int32 i = 1; i <= 10; i++)
	{
		int32 MoveX = step();
		int32 MoveY = step();

		CurrentPosition.X += MoveX;
		CurrentPosition.Y += MoveY;

		UE_LOG(LogTemp,Warning,TEXT)

	}

}

