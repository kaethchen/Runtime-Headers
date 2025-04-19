@interface UINSAppLifecycleStateRunning : UINSAppLifecycleState

- (id)init;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)appKitDidActivate_InAction;
- (void)appKitDidHide_InAction;
- (void)appKitWillTerminate_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)lastWindowDidClose_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)uiAppDidForeground_InAction;

@end
