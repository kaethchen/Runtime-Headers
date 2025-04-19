@class NSString, UINSLifecycleWatchdog;
@protocol UINSAppLifecycleStateDelegate;

@interface UINSAppLifecycleState : NSObject <UINSAppLifecycleStateInboundActions> {
    long long _nameOnceToken;
    NSString *_stateName;
}

@property (retain) UINSLifecycleWatchdog *_stateWatchdog;
@property (weak) id<UINSAppLifecycleStateDelegate> delegate;
@property (readonly) long long stateIdentifier;
@property (readonly) NSString *name;

+ (id)nameForStateIdentifier:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_cancelWatchdog;
- (void)_failForUnexpectedInputAction:(SEL)a0;
- (void)_startWatchdogWithTimeout:(double)a0;
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
