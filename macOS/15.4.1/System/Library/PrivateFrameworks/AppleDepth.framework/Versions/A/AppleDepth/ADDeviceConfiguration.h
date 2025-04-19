@interface ADDeviceConfiguration : ADPreferences

+ (BOOL)boolForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (BOOL)isInternalBuild;
+ (id)sharedConfiguration;
+ (BOOL)deviceList:(id)a0 containsDeviceName:(id)a1;
+ (id)getDeviceName;
+ (unsigned long long)getLidarType:(id)a0;
+ (id)listForKey:(id)a0;
+ (void)registerVerbosityConfigurationUpdate;

- (id)init;

@end
