@class NSArray, NSMutableArray;

@interface CBHistogramBuilder : NSObject <CBHistogram>

@property (readonly) NSMutableArray *bins;
@property (readonly) NSArray *edges;

- (void)dealloc;
- (void)reset;
- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (id)initWithEdges:(id)a0;
- (void)pushNumber:(double)a0;
- (void)pushNumberWeighted:(double)a0 withWeight:(double)a1;

@end
