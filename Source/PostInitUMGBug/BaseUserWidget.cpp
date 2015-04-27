#include "PostInitUMGBug.h"
#include "BaseUserWidget.h"

TArray<TSubclassOf<class UBaseUserWidget>> UBaseUserWidget::widgetClassesCache;

void UBaseUserWidget::PostInitProperties()
{
	Super::PostInitProperties();

	widgetClassesCache.AddUnique(WidgetClass);
}
