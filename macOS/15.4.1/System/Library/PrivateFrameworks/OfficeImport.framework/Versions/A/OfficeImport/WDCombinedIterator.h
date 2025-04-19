@class WDIterator;

@interface WDCombinedIterator : WDIterator {
    WDIterator *mParentIterator;
}

@property (retain, nonatomic) WDIterator *childIterator;

- (void).cxx_destruct;
- (id)next;
- (BOOL)hasNext;
- (id)childIteratorFrom:(id)a0;
- (void)incrementChildIterator;
- (id)initWithParentIterator:(id)a0;
- (id)newChildIteratorFrom:(id)a0;

@end
