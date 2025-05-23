@class NSMutableArray;

@interface ODDDataPoint : ODDPoint {
    NSMutableArray *mPresentations;
}

- (void).cxx_destruct;
- (void)addAssociatedPresentation:(id)a0;
- (void)addPresentation:(id)a0 order:(unsigned long long)a1;
- (id)presentations;

@end
