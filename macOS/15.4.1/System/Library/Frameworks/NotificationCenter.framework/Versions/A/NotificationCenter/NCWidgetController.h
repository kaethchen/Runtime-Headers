@interface NCWidgetController : NSObject

+ (id)defaultWidgetController;
+ (id)widgetController;

- (id)init;
- (id)__init;
- (void)_setSystemTemperatureUnit:(BOOL)a0;
- (void)setHasContent:(BOOL)a0 forWidgetWithBundleIdentifier:(id)a1;

@end
