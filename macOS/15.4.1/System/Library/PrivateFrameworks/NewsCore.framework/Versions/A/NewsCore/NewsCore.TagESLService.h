@class FCFeedItemServiceCursor, NTPBFeedItem, FCNetworkEvent, NSError;

@interface NewsCore.TagESLService : _TtCs12_SwiftObject <FCFeedItemServiceType> {
    void /* unknown type, empty encoding */ contentContext;
    void /* unknown type, empty encoding */ subscriptionList;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ smarterFetchRequestFactory;
    void /* unknown type, empty encoding */ smarterFetchService;
    void /* unknown type, empty encoding */ feedItemFactory;
}

- (void)fetchFeedItemsWithCursor:(FCFeedItemServiceCursor *)a0 feedItemHandler:(void (^)(NTPBFeedItem *))a1 networkEventHandler:(void (^)(FCNetworkEvent *))a2 completionHandler:(void (^)(NSError *))a3;

@end
