@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)initWithEnumerator:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)nextEvent;
- (void)applyBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;
- (id)initWithBookmarkableEnumerator:(id)a0;

@end
