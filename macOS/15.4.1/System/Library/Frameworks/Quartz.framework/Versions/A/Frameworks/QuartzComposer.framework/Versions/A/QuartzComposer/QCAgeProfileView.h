@interface QCAgeProfileView : NSView {
    void *_unused[4];
}

- (unsigned long long)nameCount;
- (id)nameForIndex:(unsigned long long)a0;
- (id)selectedCache;
- (void)setSelectedCache:(id)a0;

@end
