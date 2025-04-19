@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)bookmark;
- (id)initWithPublishers:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;

@end
