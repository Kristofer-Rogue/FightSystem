// Fight System project. All Rights Reserved.

#include "FightSystemGameModeBase.h"
#include "Player/FightSystemBaseCharacter.h"
#include "Player/FightSystemPlayerController.h"

AFightSystemGameModeBase::AFightSystemGameModeBase()
{
	DefaultPawnClass = AFightSystemBaseCharacter::StaticClass();
	PlayerControllerClass = AFightSystemBaseCharacter::StaticClass();
}
