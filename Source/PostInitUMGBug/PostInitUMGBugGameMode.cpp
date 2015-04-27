#include "PostInitUMGBug.h"
#include "PostInitUMGBugGameMode.h"

void APostInitUMGBugGameMode::StartPlay()
{
	Super::StartPlay();

	UChildUserWidget::Create(GEngine->GetFirstLocalPlayerController(GetWorld()));
}
