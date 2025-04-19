@interface VCHistogram : NSObject {
    unsigned int *_buckets;
}

@property (readonly) const unsigned int *ranges;
@property (readonly) unsigned int bucketCount;

- (void)dealloc;
- (id)description;
- (id)array;
- (void)reset;
- (void)addValue:(unsigned int)a0;
- (BOOL)merge:(id)a0;
- (BOOL)addOnlyExactMatchingValue:(unsigned int)a0;
- (BOOL)addOnlyExactMatchingValue:(unsigned int)a0 increment:(unsigned int)a1;
- (void)addValue:(unsigned int)a0 withIncrement:(unsigned int)a1;
- (unsigned int)bucketValueAtIndex:(unsigned int)a0;
- (id)initWithRanges:(const unsigned int *)a0 bucketValues:(id)a1;

@end
