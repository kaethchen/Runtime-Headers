@interface PodcastsKit.MediaAPISubscriptionController : _TtCs12_SwiftObject <PKSubscriptionController> {
    void /* unknown type, empty encoding */ accountResolver;
}

- (void)subscribeToFeedUrl:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToStoreId:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToStoreId:(id)a0 siriContext:(id)a1 completion:(id /* block */)a2;

@end
