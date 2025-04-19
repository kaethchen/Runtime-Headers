@protocol BPSPublisher;

@interface BPSScan : BMBookmarkablePublisher

@property (retain, nonatomic) id result;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void).cxx_destruct;
- (void)reset;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)upstreamPublishers;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;

@end
