@interface BPSBookmarkableEnumerator : NSEnumerator

- (id)nextObject;
- (void)reset;
- (id)bookmark;
- (id)bpsPublisher;
- (void)applyBookmark:(id)a0;
- (id)validateBookmark:(id)a0;

@end
