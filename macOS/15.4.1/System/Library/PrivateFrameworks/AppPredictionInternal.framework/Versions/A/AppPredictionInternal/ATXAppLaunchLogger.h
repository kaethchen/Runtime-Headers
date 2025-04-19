@interface ATXAppLaunchLogger : ATXAbstractVersionedDatabase {
    BOOL _enabled;
}

+ (id)sharedInstance;

- (id)_init;
- (long long)latestVersion;
- (id)createCustomSchema;
- (void)logAppLaunchFrom:(unsigned long long)a0 at:(id)a1;

@end
