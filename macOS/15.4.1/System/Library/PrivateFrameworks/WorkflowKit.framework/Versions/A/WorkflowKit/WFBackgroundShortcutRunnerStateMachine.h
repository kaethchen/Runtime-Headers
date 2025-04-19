@class NSObject, WFWorkflow;
@protocol OS_dispatch_queue, WFBackgroundShortcutRunnerStateMachineDelegate;

@interface WFBackgroundShortcutRunnerStateMachine : WFStateMachine

@property (readonly, nonatomic) unsigned long long processPolicy;
@property (readonly, nonatomic) WFWorkflow *shortcut;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<WFBackgroundShortcutRunnerStateMachineDelegate> delegate;

- (void).cxx_destruct;
- (void)invalidate;
- (void)invalidateWithReason:(id)a0;
- (void)exitWithReason:(id)a0;
- (BOOL)blocksTransitionsOnInvalidation;
- (void)finishRunningWithReason:(id)a0 result:(id)a1;
- (void)idleStateWithReason:(id)a0;
- (BOOL)isRunningShortcut;
- (void)stopShortcutWithError:(id)a0 reason:(id)a1;
- (void)handlingRequestStateWithReason:(id)a0;
- (void)connectionInvalidatedOrInterrupted;
- (id)initWithProcessPolicy:(unsigned long long)a0;
- (void)startRunningShortcutWithEnvironment:(long long)a0 reference:(id)a1 isPersonalAutomation:(BOOL)a2 reason:(id)a3;

@end
