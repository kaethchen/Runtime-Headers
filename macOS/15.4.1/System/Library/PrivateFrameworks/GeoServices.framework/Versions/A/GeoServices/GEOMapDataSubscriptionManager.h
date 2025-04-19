@class GEOObserverHashTable, geo_isolater, NSObject;
@protocol OS_dispatch_queue, GEOMapDataSubscriptionPersistence, GEOMapDataSubscriptionDownloadManager;

@interface GEOMapDataSubscriptionManager : NSObject {
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_stateObservationQueue;
    id<GEOMapDataSubscriptionPersistence> _persistence;
    id<GEOMapDataSubscriptionDownloadManager> _downloadManager;
    GEOObserverHashTable *_stateObservers;
}

@property (class, readonly, nonatomic) GEOMapDataSubscriptionManager *sharedManager;

+ (void)_setSharedManagerUseLocalPersistence:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addSubscriptionWithIdentifier:(id)a0 auditToken:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 region:(id)a4 displayName:(id)a5 expirationDate:(id)a6 callbackQueue:(id)a7 completionHandler:(id /* block */)a8;
- (void)addSubscriptionWithIdentifier:(id)a0 dataTypes:(unsigned long long)a1 policy:(long long)a2 region:(id)a3 displayName:(id)a4 expirationDate:(id)a5 callbackQueue:(id)a6 completionHandler:(id /* block */)a7;
- (void)addSubscriptionWithIdentifier:(id)a0 dataTypes:(unsigned long long)a1 policy:(long long)a2 region:(id)a3 expirationDate:(id)a4 callbackQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)fetchAllSubscriptionsWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPersistence:(id)a0 downloadManager:(id)a1;
- (void)removeSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;

@end
