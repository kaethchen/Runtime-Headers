@interface BPSEmpty : BMBookmarkableSubscription

- (void)cancel;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;

@end
