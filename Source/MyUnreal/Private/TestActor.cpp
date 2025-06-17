// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
    // 랜덤 숫자 범위 설정
    int MinValue = 1;
    int MaxValue = 100;

    // 랜덤 숫자 3개 생성
    int RandomNumber1 = FMath::RandRange(MinValue, MaxValue);
    int RandomNumber2 = FMath::RandRange(MinValue, MaxValue);
    int RandomNumber3 = FMath::RandRange(MinValue, MaxValue);

    // 합계 계산
    int Sum = RandomNumber1 + RandomNumber2 + RandomNumber3;

    // 결과 출력
    UE_LOG(LogTemp, Warning, TEXT("Generated Numbers: %d, %d, %d"), RandomNumber1, RandomNumber2, RandomNumber3);
    UE_LOG(LogTemp, Warning, TEXT("Sum of Numbers: %d"), Sum);





}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

