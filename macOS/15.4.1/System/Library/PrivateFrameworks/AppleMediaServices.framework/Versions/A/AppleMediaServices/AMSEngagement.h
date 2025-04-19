@class NSString, AMSEngagementMessageCache, AMSBagKeySet, NSObject, NSMutableSet, AMSEngagementConnection, NSMapTable, NSNotificationCenter;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSEngagement : NSObject <AMSBagConsumer> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *_notifyQueue;
@property (class, readonly) NSObject<OS_dispatch_queue> *_engagementQueue;
@property (class, readonly) NSNotificationCenter *notificationCenter;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSMapTable *observerInfo;
@property (retain) NSMutableSet *runningPromises;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSEngagementConnection *connection;
@property (readonly) AMSEngagementMessageCache *cacheInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_connection;
+ (double)_enqueueTimeout;
+ (void)_recordLoggingEventWithBag:(id)a0 enqueueData:(id)a1 eventType:(id)a2 userInfo:(id)a3 destinations:(id)a4 error:(id)a5;
+ (id)createBagForSubProfile;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)sync;
- (id)enqueueEvent:(id)a0;
- (void)_connectionErrorNotification;
- (id)_createCombinedLogKey;
- (id)_enqueue:(id)a0;
- (id)_enqueueWithContext:(id)a0;
- (void)_failAllRunningPromisesWithError:(id)a0;
- (void)_handleServiceResponse:(id)a0;
- (void)_manageRunningPromise:(id)a0;
- (void)_observeNotifications;
- (id)_parseActions:(id)a0;
- (void)_pushEventReceived:(id)a0;
- (void)_removeRunningPromise:(id)a0;
- (void)_scheduleSyncIfNeeded:(id)a0;
- (void)addCachePolicy:(long long)a0 forPlacements:(id)a1 serviceType:(id)a2;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2 queue:(id)a3;
- (void)addObserver:(id)a0 placements:(id)a1 serviceType:(id)a2;
- (void)addObserver:(id)a0 placements:(id)a1 serviceType:(id)a2 queue:(id)a3;
- (id)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2;
- (id)enqueueData:(id)a0;
- (id)enqueueMessageEvent:(id)a0;
- (id)fetchMetricsIdentifiers;
- (void)handleDialogResult:(id)a0;
- (void)handlePushEvent:(id)a0;
- (id)initWithBag:(id)a0;
- (id)initWithoutBag;
- (id)manualSyncMetricsIdentifiers;
- (void)removeObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (id)syncDestinations:(id)a0;
- (id)syncMetricsIdentifiers;
- (id)syncWithRequest:(id)a0;
- (id)treatmentStoreService;

@end
