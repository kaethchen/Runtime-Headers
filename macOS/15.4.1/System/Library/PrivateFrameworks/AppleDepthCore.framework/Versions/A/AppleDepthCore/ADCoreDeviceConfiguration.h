@interface ADCoreDeviceConfiguration : ADPreferences

+ (id)sharedConfiguration;
+ (void)registerVerbosityConfigurationUpdate;

- (id)init;

@end
