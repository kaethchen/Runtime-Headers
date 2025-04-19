@interface UINSAppLifecycleStateTerminatingHidingMacGUI : UINSAppLifecycleState

@property (nonatomic) BOOL appDidHide;
@property (nonatomic) BOOL appWentBackgroundOnly;
@property (nonatomic) BOOL wantWindowStateReset;
@property (nonatomic) BOOL didRequestDefaultWindowState;
@property (nonatomic) BOOL reachedDefaultWindowState;
@property (nonatomic) BOOL relaunchRequested;
@property (nonatomic) BOOL isActiveState;

- (id)init;
- (void)_continueToNextStateIfAppropriate;
- (BOOL)_shouldResetWindowStateDuringTermination;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)appKitDidActivate_InAction;
- (void)appKitDidBackground_InAction;
- (void)appKitDidForeground_InAction;
- (void)appKitDidHide_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)defaultWindowStateReached_InAction;
- (void)lastWindowDidClose_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)uiAppDidForeground_InAction;

@end
