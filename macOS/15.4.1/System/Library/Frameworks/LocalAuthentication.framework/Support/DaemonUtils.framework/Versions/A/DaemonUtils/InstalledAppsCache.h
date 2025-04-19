@interface InstalledAppsCache : NSObject

+ (id)sharedInstance;

- (id)appNameForPid:(int)a0 bundleId:(id *)a1;
- (id)binaryNameForPid:(int)a0;
- (id)bundlePathForPid:(int)a0 stripXPCService:(BOOL)a1;
- (id)pathForPid:(int)a0;

@end
