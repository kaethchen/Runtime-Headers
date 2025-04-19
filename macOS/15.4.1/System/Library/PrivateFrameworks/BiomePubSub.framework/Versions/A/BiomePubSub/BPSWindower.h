@class NSArray, NSMutableDictionary, NSString;
@protocol BPSPublisher, BPSWindowAssigner;

@interface BPSWindower : BMBookmarkablePublisher <BMBookmarkablePublisher>

@property (retain, nonatomic) NSMutableDictionary *windows;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (copy, nonatomic) id /* block */ key;
@property (readonly, nonatomic) id<BPSWindowAssigner> assigner;
@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;
- (id)firstCompletedWindow;
- (id)firstCompletedWindowShouldRemove:(BOOL)a0;
- (id)initWithUpstream:(id)a0 key:(id /* block */)a1 assigner:(id)a2;
- (void)updateWindowsWithEvent:(id)a0;

@end
