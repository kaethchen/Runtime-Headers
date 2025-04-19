@interface _MFMailboxEnumerator : NSEnumerator {
    struct __CFTree { } *_startTree;
    struct __CFTree { } *_lastTree;
}

- (void)dealloc;
- (id)init;
- (id)nextObject;
- (id)initWithTree:(struct __CFTree { } *)a0;

@end
