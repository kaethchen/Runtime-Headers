@protocol BPSPublisher;

@interface BPSMap : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (copy, nonatomic) id /* block */ transform;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 transform:(id /* block */)a1;
- (id)nextEvent;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;

@end
