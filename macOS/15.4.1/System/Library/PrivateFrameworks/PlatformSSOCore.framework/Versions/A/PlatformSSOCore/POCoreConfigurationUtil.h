@interface POCoreConfigurationUtil : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)appSSOEnabled;
+ (BOOL)platformSSODevModeEnabled;
+ (BOOL)platformSSOEnabled;
+ (id)platformSSOTriggerFile;
+ (void)updateTriggerFile;
+ (void)writeTriggerFileToPath:(id)a0;
+ (id)platformSSODevModeTriggerFile;

@end
