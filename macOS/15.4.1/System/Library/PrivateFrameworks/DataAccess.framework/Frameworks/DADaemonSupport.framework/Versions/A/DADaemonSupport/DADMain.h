@class NSString, NSTimer;

@interface DADMain : DADisableableObject <DATransactionMonitorDelegate> {
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    BOOL *_runLoopStoppedRef;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMain;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disable;
- (void)addSignalHandler;
- (void)didFinishAllXPCTransactions;
- (void)_shutdownDaemon;
- (void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)a0;
- (void)_forceShutdownTimerFired:(id)a0;
- (void)_setRunLoopStopped:(BOOL)a0;
- (void)addLanguageChangeHandler;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(id /* block */)a0 wrappedBlock:(id /* block */)a1;
- (void)shutdownDAD;
- (void)_boostConnectedActivityPriority;
- (void)_evaluateConnectedStartupActivityStatus;
- (void)agentsStarted;
- (void)boostConnectedActivityPriority;
- (void)setRunLoopStoppedRef:(BOOL *)a0;
- (void)waitForSystemAvailability;
- (void)xpc_checkin;

@end
