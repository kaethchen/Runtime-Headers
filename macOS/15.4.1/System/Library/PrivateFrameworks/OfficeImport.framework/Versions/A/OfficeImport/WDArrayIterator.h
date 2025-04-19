@class NSArray;

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (id)next;
- (BOOL)hasNext;

@end
