@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)defaultOfferManager;
+ (id)_offerFullPath;
+ (id)_offerPath;

- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)clearOffers:(id /* block */)a0;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;
- (id)_offers;
- (void)_setOffers:(id)a0;
- (id)_updateOfferFile;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendBadgeActionMetricsEvents:(id)a0;

@end
