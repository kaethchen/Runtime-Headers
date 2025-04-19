@class NSString, SKStatusSubscription, NSMutableDictionary, NSMutableSet, NSDictionary, NSObject, SKStatusSubscriptionService;
@protocol OS_dispatch_queue;

@interface IMHandleOffGridStateManager : NSObject <SKStatusSubscriptionServiceDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) SKStatusSubscription *personalSubscription;
@property (retain, nonatomic) NSMutableDictionary *currentSubscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *lastKnownSubscriptionCache;
@property (nonatomic) long long currentCacheGeneration;
@property (retain, nonatomic) NSMutableSet *pendingFetchesForCacheKeys;
@property (retain, nonatomic) SKStatusSubscriptionService *subscriptionService;
@property (retain, nonatomic) NSMutableDictionary *overrideDatesByHandleID;
@property (copy, nonatomic, setter=_setCachedOverrideDatesByHandleID:) NSDictionary *cachedOverrideDatesByHandleID;
@property (readonly, nonatomic) long long personalOffGridMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_subscriptionCacheKeyForHandle:(id)a0;
- (void)subscriptionInvitationReceived:(id)a0;
- (id)_cachedStatusSubscriptionForHandle:(id)a0;
- (id)_cachedStatusSubscriptionForIMHandle:(id)a0 fromCache:(id)a1 cacheDescription:(id)a2 cacheMiss:(BOOL *)a3;
- (void)_clearCurrentSubscriptionCache;
- (void)_fetchUpdatedStatusAndUpdateCachesForHandle:(id)a0 lastKnownStatus:(id)a1 completion:(id /* block */)a2;
- (void)_fetchUpdatedStatusForHandle:(id)a0 completion:(id /* block */)a1;
- (id)_identifierFromStatusSubscription:(id)a0 handleID:(id)a1;
- (long long)_offGridModeFromStatusSubscription:(id)a0 handleID:(id)a1 onlyIfLaterThanDate:(id)a2;
- (id)_overrideDateForHandleWithID:(id)a0;
- (void)_personalSubscriptionWithCompletion:(id /* block */)a0;
- (void)_postNotificationForUpdatedStatusWithSubscription:(id)a0;
- (id)_skHandleForHandle:(id)a0;
- (void)cachedOffGridModeAndLastPublisherForHandle:(id)a0 completion:(id /* block */)a1;
- (id)cachedStatusSubscriptionForHandle:(id)a0;
- (void)fetchUpdatedStatusForHandle:(id)a0 completion:(id /* block */)a1;
- (long long)offGridModeForHandle:(id)a0;
- (void)offGridModeForHandle:(id)a0 completion:(id /* block */)a1;
- (void)overrideStatusForHandleWithID:(id)a0 publishedBeforeDate:(id)a1;
- (void)personalOffGridModeWithCompletion:(id /* block */)a0;
- (void)subscriptionReceivedStatusUpdate:(id)a0;
- (void)subscriptionServiceDaemonDisconnected:(id)a0;
- (void)subscriptionStateChanged:(id)a0;

@end
