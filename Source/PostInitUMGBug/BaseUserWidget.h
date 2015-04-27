#pragma once

#include "Blueprint/UserWidget.h"
#include "BaseUserWidget.generated.h"

UCLASS()
class POSTINITUMGBUG_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void PostInitProperties() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Category = "GUI")
	TSubclassOf<class UBaseUserWidget> WidgetClass;

protected:
	template<typename WidgetType>
	static WidgetType* InstantiateWidget(APlayerController* masterController)
	{
		auto widgetClass = widgetClassesCache.FindByPredicate([](TSubclassOf<class UBaseUserWidget> wc){ return wc && Cast<WidgetType>(wc->GetDefaultObject()); });

		if (widgetClass)
		{
			auto widget = CreateWidget<UBaseUserWidget>(masterController, *widgetClass);
			widget->AddToViewport();

			return Cast<WidgetType>(widget);
		}
		else return nullptr;
	}
	
private:
	static TArray<TSubclassOf<class UBaseUserWidget>> widgetClassesCache;
};
