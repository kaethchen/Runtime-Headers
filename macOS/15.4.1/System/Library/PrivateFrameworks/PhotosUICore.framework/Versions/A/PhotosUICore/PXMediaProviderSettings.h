@interface PXMediaProviderSettings : PXSettings

@property (nonatomic) BOOL wantsSimulation;
@property (nonatomic) BOOL simulateError;
@property (nonatomic) double simulatedDelay;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
