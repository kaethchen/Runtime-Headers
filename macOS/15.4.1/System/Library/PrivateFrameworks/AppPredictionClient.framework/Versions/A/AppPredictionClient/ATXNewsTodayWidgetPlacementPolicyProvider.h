@interface ATXNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)_newsSupportedCountries;
+ (id)_parsecEditorialLocales;

- (BOOL)isTodayWidgetPermittedForLocale:(id)a0;

@end
