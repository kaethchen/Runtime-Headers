@class NSArray, NSMutableArray, BMIndirectHeap;

@interface BPSOrderedMerge : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *upstreamStates;
@property (retain, nonatomic) BMIndirectHeap *heap;
@property (retain) id mostRecentEvent;
@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;
- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;
- (BOOL)isOrderedSameForEvents:(id)a0 second:(id)a1;

@end
