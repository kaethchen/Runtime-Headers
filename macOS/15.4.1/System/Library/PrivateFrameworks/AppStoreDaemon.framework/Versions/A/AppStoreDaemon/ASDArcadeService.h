@class ASDAppStoreService;

@interface ASDArcadeService : NSObject {
    ASDAppStoreService *_appstoreService;
}

+ (id)defaultService;

- (id)init;
- (void).cxx_destruct;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)a0;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;

@end
