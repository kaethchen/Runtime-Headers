@class NSMutableDictionary, NSTimer, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface IMPendingReplicatedMessageCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *pendingMessages;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (retain, nonatomic) NSCache *replicatedFallbackHistory;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)_scheduleTimeout;
- (void)_enforceTimeout;
- (void)addPendingMessageWithGUID:(id)a0 replicatedFallbackGUIDs:(id)a1 releaseBlock:(id /* block */)a2;
- (void)_enforceCacheLimit;
- (void)_metricMatchingFailureWithReason:(id)a0;
- (void)_removePendingMessageWithGUID:(id)a0;
- (void)clearPendingMessageWithGUID:(id)a0;
- (void)releasePendingMessageWithGUID:(id)a0 serviceName:(id)a1 chat:(id)a2 completion:(id /* block */)a3;
- (id)releasedReplicatedGUIDForGUID:(id)a0;

@end
