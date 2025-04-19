@class ICNFIMAPClientSelectOperation, NSString, NSRecursiveLock, ICNFMCActivityMonitor, ICNFIMAPClientSuspendOperation, ICNFIMAPClientDoneOperation, NSObject, ICNFIMAPGateway;
@protocol OS_dispatch_source;

@interface ICNFIMAPClientOperationQueue : NSOperationQueue {
    ICNFIMAPClientDoneOperation *_doneOperation;
    ICNFIMAPClientSelectOperation *_selectOperation;
    ICNFIMAPClientSuspendOperation *_suspendOperation;
    NSRecursiveLock *_activityMonitorLock;
    NSObject<OS_dispatch_source> *_activityFinishTimer;
    BOOL _activityMonitorIsActive;
}

@property (readonly, nonatomic) BOOL isIdle;
@property (retain) ICNFIMAPClientDoneOperation *doneOperation;
@property (retain) ICNFIMAPClientSelectOperation *selectOperation;
@property (readonly, copy, nonatomic) NSString *selectedMailboxName;
@property (retain) ICNFIMAPClientSuspendOperation *suspendOperation;
@property (retain, nonatomic) NSRecursiveLock *addOperationLock;
@property (copy) NSString *activityName;
@property (readonly) ICNFMCActivityMonitor *activityMonitor;
@property (retain) ICNFIMAPGateway *gateway;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)activityDidFinish:(id)a0;
- (void)_clearActivityFinishTimer;
- (void)_postDelayedActivityFinished;
- (void)_setupDependeciesOnDone;
- (void)activityDidStart:(id)a0;
- (BOOL)addClientOperation:(id)a0 outUpdatedOperation:(id *)a1;
- (void)changeSelectDependenciesTo:(id)a0;
- (void)clearDoneWithOperation:(id)a0;
- (void)finishIdling;
- (id)newSelectOperationForResumingIfNeeded;
- (BOOL)refreshDoneWithGateway:(id)a0 operation:(id)a1;
- (void)refreshIdle;
- (void)setDoneToReady;
- (BOOL)setupDependenciesOnSuspendCreatingIfNeeded;
- (BOOL)shouldAllowIdleToExecute:(id)a0;
- (void)suspendIfNeededAndClear:(BOOL)a0;
- (BOOL)waitUntilOperationIsFinished:(id)a0;

@end
