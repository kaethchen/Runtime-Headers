@interface UINSAppLifecycleStateBackgroundLaunched : UINSAppLifecycleState

- (id)init;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)appKitDidForeground_InAction;
- (void)appKitWillTerminate_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;

@end
