@class NSWMDeferredTransactionQueue, NSString, NSWMDeferrableWMWindowTransaction, WMClientWindowManager, NSObject;
@protocol OS_dispatch_queue;

@interface NSWMWindowCoordinator : NSObject <WMClientWindowManagerDelegate, SLSWindowManagementBridgeDelegate> {
    NSWMDeferrableWMWindowTransaction *_transaction;
    BOOL _disableTransactionFencing;
    BOOL _scheduledNSCGSTransactionAction;
    NSWMDeferredTransactionQueue *_transactionQueue;
    WMClientWindowManager *_windowManager;
    NSObject<OS_dispatch_queue> *_sendQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)applicationDidCancelTermination;
- (void)applicationDidFinishRestoration;
- (void)applicationWillBeginTermination;
- (void)_finishLoginTransition;
- (void)_sendCompletedTransactions;
- (void)_synchronizeDeferredIPC;
- (void)assignWindow:(id)a0 toSpaces:(id)a1 removingFrom:(unsigned int)a2;
- (void)clearDisplayAffinityForWindow:(id)a0;
- (void)clientWindowManager:(id)a0 handleRestoreTilingStateActionResponse:(id)a1;
- (void)clientWindowManager:(id)a0 hideApplicationResponse:(id)a1;
- (void)clientWindowManager:(id)a0 performResizeWindowRequest:(id)a1;
- (void)clientWindowManager:(id)a0 requestMakeKeyWindowWithIdentifier:(id)a1;
- (void)clientWindowManager:(id)a0 requestResignKeyWindowWithIdentifier:(id)a1;
- (void)clientWindowManager:(id)a0 unhideApplicationResponse:(id)a1;
- (void)clientWindowManager:(id)a0 updateStages:(id)a1;
- (void)clientWindowManager:(id)a0 updateStages:(id)a1 displayChangeSeed:(unsigned long long)a2;
- (void)clientWindowManager:(id)a0 windowDeminiaturizationResponse:(id)a1;
- (void)clientWindowManager:(id)a0 windowMiniaturizationResponse:(id)a1;
- (unsigned int)copyDeferIPCPort;
- (id /* block */)deferIPCUntil;
- (void)disableTransactionFencing;
- (void)finishLoginTransitionWithCompletionHandler:(id /* block */)a0;
- (void)handleDesktopBackgroundClickEnd:(id)a0;
- (void)initializeStageFramesIfNeeded;
- (void)performAsynchronousBridgedWindowManagementOperation:(id)a0;
- (void)performCycleWindowsReversed:(BOOL)a0;
- (id)performSynchronousBridgedWindowManagementOperation:(id)a0;
- (void)performTransactionUsingBlock:(id /* block */)a0;
- (void)performWindowManagementBridgeTransactionUsingBlock:(id /* block */)a0;
- (id)proposeKeyWindow:(id)a0 previousWindow:(id)a1;
- (id)proposeMainWindow:(id)a0 previousWindow:(id)a1;
- (void)requestTilingForWindow:(id)a0 tilingPosition:(unsigned long long)a1;
- (void)setWindowTags:(id)a0 onWindow:(unsigned int)a1 clear:(BOOL)a2;
- (void)startLoginTransition;

@end
