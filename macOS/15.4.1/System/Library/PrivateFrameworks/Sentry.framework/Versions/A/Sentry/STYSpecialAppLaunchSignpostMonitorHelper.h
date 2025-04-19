@class SignpostSupportSubsystemCategoryAllowlist, NSUserDefaults;

@interface STYSpecialAppLaunchSignpostMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist *_allowList;
    NSUserDefaults *_defaults;
}

@property BOOL forceAppLaunchDiagnostics;
@property BOOL enforceAppLaunchThreshold;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)allowList;
- (void)handleInterval:(id)a0;
- (void)processAppLaunch:(id)a0 tailspinFilenamePrefix:(id)a1 duration:(id)a2 andPID:(id)a3 reason:(id)a4;

@end
