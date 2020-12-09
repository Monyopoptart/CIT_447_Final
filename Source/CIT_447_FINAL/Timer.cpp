// Fill out your copyright notice in the Description page of Project Settings.


#include "Timer.h"
#include "TimerManager.h"
// Sets default values
ATimer::ATimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimer::BeginPlay()
{
	Super::BeginPlay();
	// the first number is how it it takes to repeat ant the second is how long from play in secods
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ATimer::Repeat, 60.00f, true, 120.0f);
	
}

// Called every frame
void ATimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ATimer::Repeat()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("WASD to move. E to interact."));
}
