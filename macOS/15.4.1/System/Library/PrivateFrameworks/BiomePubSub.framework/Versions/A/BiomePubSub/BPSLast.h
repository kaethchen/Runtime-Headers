@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (retain, nonatomic) id lastEvent;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0;
- (id)nextEvent;
- (void)applyBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;

@end
