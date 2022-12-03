// Fight System project. All Rights Reserved.

#include "Player/FightSystemBaseCharacter.h"

AFightSystemBaseCharacter::AFightSystemBaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AFightSystemBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AFightSystemBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFightSystemBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
