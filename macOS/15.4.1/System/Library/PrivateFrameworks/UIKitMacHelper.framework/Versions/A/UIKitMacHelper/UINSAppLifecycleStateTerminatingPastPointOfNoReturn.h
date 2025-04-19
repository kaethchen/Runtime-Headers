@interface UINSAppLifecycleStateTerminatingPastPointOfNoReturn : UINSAppLifecycleState

@property (nonatomic) double stateEntryTime;

- (id)init;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)appKitDidForeground_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)backgroundTasksTimedOut_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)uiAppDidForeground_InAction;
- (void)uiAppWouldHaveExitedProcess_InAction;

@end
