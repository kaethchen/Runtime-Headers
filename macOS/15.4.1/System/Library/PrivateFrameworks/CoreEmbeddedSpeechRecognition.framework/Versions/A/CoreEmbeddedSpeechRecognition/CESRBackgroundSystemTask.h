@interface CESRBackgroundSystemTask : NSObject

- (BOOL)_isANECapableDevice;
- (BOOL)_isPeriodicPreheatEnabled;
- (void)registerAndSubmitBGSystemTasks;

@end
