@interface HDBackgroundAppLauncher : NSObject

- (void)requestAppLaunchWithBundleID:(id)a0 updateFrequency:(double)a1;
- (void)requestAssertionInvalidationForBundleID:(id)a0;

@end
