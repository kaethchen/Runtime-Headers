@class NSArray;

@interface UnsignedFixedIntervalMapper : HMMIntervalMapper

@property (readonly) NSArray *intervals;
@property (readonly) id /* block */ creationBlock;
@property (readonly) id /* block */ comparisonBlock;

- (void).cxx_destruct;
- (id)intervalForValue:(unsigned long long)a0;
- (id)intervalIndexForValue:(unsigned long long)a0;
- (id)initWithBins:(id)a0 intervalCreationBlock:(id /* block */)a1 valueComparisonBlock:(id /* block */)a2;

@end
