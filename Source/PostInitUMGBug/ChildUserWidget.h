#pragma once

#include "Blueprint/UserWidget.h"
#include "ChildUserWidget.generated.h"

UCLASS()
class POSTINITUMGBUG_API UChildUserWidget : public UBaseUserWidget
{
	GENERATED_BODY()
	
public:
	static UChildUserWidget* Create(APlayerController* masterController);
	
};
