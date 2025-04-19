@interface HMDDemoModeManagerFactory : NSObject

+ (id)demoManagerWithHomeManager:(id)a0 messageDispatcher:(id)a1;
+ (void)loadDemoModeConfiguration;
+ (void)saveDemoModeConfiguration;

- (id)init;

@end
