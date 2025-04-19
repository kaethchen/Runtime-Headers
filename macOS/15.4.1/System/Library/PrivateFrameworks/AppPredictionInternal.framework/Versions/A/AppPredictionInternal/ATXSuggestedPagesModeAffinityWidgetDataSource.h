@interface ATXSuggestedPagesModeAffinityWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (double)_fetchScoreThresholdForWidgetModeAffinityModel;
- (id)_widgetIdentifierWithoutIntentForCHSWidget:(id)a0;
- (id)_widgetIdentifierWithoutIntentForWidget:(id)a0;
- (id)fetchWidgetsPassingThresholdForMode:(unsigned long long)a0 forSize:(unsigned long long)a1;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end
