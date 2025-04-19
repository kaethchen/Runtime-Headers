@class NSArray;

@interface BPSBookmarkableArrayEnumerator : BPSBookmarkableEnumerator {
    NSArray *_array;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (id)nextObject;
- (void)reset;
- (id)bookmark;
- (void)applyBookmark:(id)a0;
- (id)validateBookmark:(id)a0;

@end
