@class NSDate, PDSRequestQueue, NSString, PDSHeartbeatTracker, CUTDeferredTaskQueue, IDSPushHandler, IDSServerBag, NSObject;
@protocol OS_dispatch_queue;

@interface PDSCoordinator : NSObject <PDSRequestQueueDelegate, IDSPushHandlerDelegate, IMSystemMonitorListener, PDSHeartbeatTrackerDelegate, PDSEntryStoreDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *pendingRequestDate;
@property (retain, nonatomic) IDSServerBag *serverBag;
@property (retain, nonatomic) CUTDeferredTaskQueue *processDeferredTaskQueue;
@property (copy, nonatomic) id /* block */ kvStoreBlock;
@property (copy, nonatomic) id /* block */ entryStoreBlock;
@property (retain, nonatomic) IDSPushHandler *pushHandler;
@property (copy, nonatomic) id /* block */ pushTokenBlock;
@property (retain, nonatomic) PDSRequestQueue *requestQueue;
@property (nonatomic) BOOL requestPending;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL tokenChanged;
@property (nonatomic) long long bagLoadRetries;
@property (retain, nonatomic) PDSHeartbeatTracker *heartbeatTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)handler:(id)a0 pushTokenChanged:(id)a1;
- (void)_markPushToken:(id)a0;
- (BOOL)_requestMatchesPreviousRequest:(id)a0;
- (void)_bagReloaded:(id)a0;
- (void)_comparePushTokensWithEntryStore:(id)a0;
- (BOOL)_disabledForAnyReason;
- (BOOL)_entries:(id)a0 includeState:(unsigned char)a1;
- (BOOL)_lastPushTokenDiffersFrom:(id)a0;
- (unsigned long long)_lastRequestHash;
- (BOOL)_lastSandboxPushTokenDiffersFrom:(id)a0;
- (void)_markLastRequest:(id)a0;
- (void)_markSandboxPushToken:(id)a0;
- (BOOL)_matchingEntryExistsFor:(id)a0 inStore:(id)a1;
- (void)_processEntryStore;
- (void)_pushTokenChangedWithEntryStore:(id)a0;
- (double)_timeToDelayRequestForTopics:(id)a0;
- (void)_updateAllHeartbeatEntriesWithState:(unsigned char)a0 inEntryStore:(id)a1;
- (void)_updateEntriesForResponse:(id)a0 fromRequest:(id)a1;
- (void)_updateOrDeleteEntry:(id)a0 inStore:(id)a1;
- (void)entryStore:(id)a0 didUpdatePendingTopics:(id)a1 forceImmediateUpdate:(BOOL)a2;
- (void)heartbeatFiredForTracker:(id)a0;
- (id)initWithQueue:(id)a0 serverBag:(id)a1 requestQueue:(id)a2 kvStoreBlock:(id /* block */)a3 entryStoreBlock:(id /* block */)a4 pushTokenBlock:(id /* block */)a5 systemMonitor:(id)a6 pushHandler:(id)a7;
- (void)registerIfNeeded;
- (void)requestQueue:(id)a0 processedRequest:(id)a1 withResponse:(id)a2;
- (BOOL)shouldScheduleHeartbeatForTracker:(id)a0;
- (long long)ttlForRequest:(id)a0;

@end
