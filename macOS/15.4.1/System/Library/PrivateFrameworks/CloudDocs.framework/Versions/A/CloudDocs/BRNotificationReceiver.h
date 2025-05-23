@class NSString, BRNotificationQueue, NSMutableDictionary, NSObject;
@protocol NSObject, BRItemNotificationSending, OS_dispatch_source, OS_dispatch_queue, BRNotificationReceiverDelegate;

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    BRNotificationQueue *_notifs;
    id<BRItemNotificationSending> _sender;
    _Atomic int _gatherDones;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _receivedChanges;
    unsigned long long _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
    _Atomic int _suspendCount;
    int _networkReachabilityToken;
    BOOL _isNetworkReachable;
    BOOL _isInvalidated;
    id<NSObject> _accountTokenDidChangeNotificationObserver;
    NSString *_personaID;
}

@property (readonly, nonatomic) unsigned long long pendingCount;
@property (nonatomic) unsigned long long batchingChanges;
@property (nonatomic) double batchingDelay;
@property (retain, nonatomic) id<BRNotificationReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (oneway void)invalidate;
- (void)resume;
- (void)suspend;
- (void)flush;
- (oneway void)invalidateAndDontNotifyDelegate;
- (void)_invalidateAndNotify:(BOOL)a0;
- (id)_obtainNotificationSenderFromDaemon;
- (void)_receiveUpdates:(id)a0;
- (void)_signalSourceIfNeeded;
- (void)_watchUbiquitousScopes:(id)a0 bundleID:(id)a1 predicate:(id)a2;
- (void)dequeue:(unsigned long long)a0 block:(id /* block */)a1;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)invalidateAndNotify:(BOOL)a0;
- (void)networkDidChangeReachabilityStatusTo:(BOOL)a0;
- (void)receiveProgressUpdates:(id)a0 reply:(id /* block */)a1;
- (void)receiveStitchingUpdates:(id)a0;
- (void)receiveUpdates:(id)a0 logicalExtensions:(id)a1 physicalExtensions:(id)a2 reply:(id /* block */)a3;
- (void)watchUbiquitousScopes:(id)a0 bundleID:(id)a1 predicate:(id)a2;

@end
