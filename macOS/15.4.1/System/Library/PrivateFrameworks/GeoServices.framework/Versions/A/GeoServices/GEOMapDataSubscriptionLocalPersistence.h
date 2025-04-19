@class NSString, geo_isolater, GEOTileDB;
@protocol GEOMapDataSubscriptionPersistenceDelegate;

@interface GEOMapDataSubscriptionLocalPersistence : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOTileDBObserver, GEOMapDataSubscriptionPersistence> {
    geo_isolater *_isolation;
    GEOTileDB *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOMapDataSubscriptionPersistenceDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTileDB:(id)a0;
- (void)addSubscriptionWithIdentifier:(id)a0 auditToken:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 region:(id)a4 displayName:(id)a5 expirationDate:(id)a6 callbackQueue:(id)a7 completionHandler:(id /* block */)a8;
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (void)removeSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)tileDB:(id)a0 didUpdateSubscriptionWithIdentifier:(id)a1;

@end
