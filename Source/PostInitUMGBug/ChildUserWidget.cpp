#include "PostInitUMGBug.h"
#include "ChildUserWidget.h"

UChildUserWidget* UChildUserWidget::Create(APlayerController* masterController)
{
	return InstantiateWidget<UChildUserWidget>(masterController);
}
