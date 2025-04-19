@interface UINSAppLifecycleStateMummified : UINSAppLifecycleState

- (id)init;
- (void)appKitDidForeground_InAction;
- (void)appKitDidHide_InAction;
- (void)appKitWillTerminate_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)didFinishForceBackgroundingScenes_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;

@end
