@interface ATXDemoStackAndWidgetProvider : NSObject

+ (BOOL)isDemoModeEnabled;
+ (BOOL)_shouldShowStackInGallery;
+ (id)_widgetArrayForPrefixKey:(id)a0 countKey:(id)a1 defaults:(id)a2 descriptors:(id)a3;
+ (id)_widgetFromDictionary:(id)a0 descriptors:(id)a1;
+ (id)demoStackAndWidgets;
+ (void)startYourEngines;

@end
