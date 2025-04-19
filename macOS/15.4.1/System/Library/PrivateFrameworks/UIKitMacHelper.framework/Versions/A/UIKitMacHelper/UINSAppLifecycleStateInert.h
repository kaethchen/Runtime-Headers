@interface UINSAppLifecycleStateInert : UINSAppLifecycleState

- (id)init;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)appKitDidActivate_InAction;
- (void)appKitDidBackground_InAction;
- (void)appKitDidForeground_InAction;
- (void)appKitDidHide_InAction;
- (void)appKitWillTerminate_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)backgroundTasksTimedOut_InAction;
- (void)defaultWindowStateReached_InAction;
- (void)didFinishForceBackgroundingScenes_InAction;
- (void)didFinishRestoringSceneForegroundState_InAction;
- (void)lastWindowDidClose_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)uiAppDidForeground_InAction;
- (void)uiAppWouldHaveExitedProcess_InAction;

@end
