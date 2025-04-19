@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (void)cancel;
- (id)newBookmark;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;

@end
