@class FBWaitForProcessDeathTransaction, FBProcessManager, RBSProcessIdentity, FBProcess, FBProcessExecutionContext, BSAtomicSignal;

@interface FBApplicationProcessLaunchTransaction : FBTransaction {
    FBProcessManager *_processManager;
    RBSProcessIdentity *_identity;
    id /* block */ _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    BSAtomicSignal *_interruptedOrComplete;
}

@property (readonly, nonatomic) FBProcess *process;
@property (readonly, nonatomic) BOOL failedLaunch;
@property (readonly, nonatomic) BOOL exited;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)remove:(id)a0;
- (void)add:(id)a0;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)a0;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_willComplete;
- (void)_willFailWithReason:(id)a0;
- (void)_willInterruptWithReason:(id)a0;
- (void)_queue_finishProcessLaunch:(BOOL)a0;
- (void)_queue_launchProcess:(id)a0;
- (void)_queue_noteExited;
- (void)_queue_processWillLaunch:(id)a0;
- (id)initWithApplicationBundleID:(id)a0 executionContextProvider:(id /* block */)a1;
- (id)initWithApplicationProcess:(id)a0;
- (id)initWithProcessIdentity:(id)a0 executionContextProvider:(id /* block */)a1;

@end
