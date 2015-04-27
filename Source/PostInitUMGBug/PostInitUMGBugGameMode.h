#pragma once

#include "GameFramework/GameMode.h"
#include "PostInitUMGBugGameMode.generated.h"

UCLASS()
class POSTINITUMGBUG_API APostInitUMGBugGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	virtual void StartPlay() override;
	
};
