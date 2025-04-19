@class NSArray, NSMutableArray;

@interface CBHistogramBuilder2D : NSObject {
    NSArray *_firstDimEdges;
    NSMutableArray *_histograms;
}

- (void)dealloc;
- (void)reset;
- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (id)initWithFirstDim:(id)a0 andSecondDim:(id)a1;
- (void)pushNumberWeighted:(double)a0 withWeight:(double)a1 forFirstDimValue:(float)a2;

@end
