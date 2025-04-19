@interface POConfigurationUtil : NSObject

+ (BOOL)platformSSOEnabledForUsername:(id)a0;
+ (BOOL)appSSOEnabled;
+ (BOOL)platformSSOEnabled;
+ (id)platformSSOTriggerFile;
+ (void)updateTriggerFile;

@end
