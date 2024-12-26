// Copyright of Alchemist Software


#include "ArcaneCharacterBase.h"

// Sets default values
AArcaneCharacterBase::AArcaneCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArcaneCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArcaneCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AArcaneCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

