@interface EFMutableBloomFilter : EFBloomFilter

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)removeAll;
- (void)addData:(id)a0;
- (void)addString:(id)a0;
- (id)_initWithBucketCount:(unsigned long long)a0 hashFunctionCount:(unsigned long long)a1 seed:(unsigned long long)a2 indexes:(id)a3;
- (id)initWithBucketCount:(unsigned long long)a0 hashFunctionCount:(unsigned long long)a1;
- (id)initWithBucketCount:(unsigned long long)a0 hashFunctionCount:(unsigned long long)a1 seed:(unsigned long long)a2;
- (id)initWithExpectedCount:(unsigned long long)a0;
- (id)initWithFalsePositiveRate:(double)a0 forExpectedCount:(unsigned long long)a1;
- (id)initWithFalsePositiveRate:(double)a0 forExpectedCount:(unsigned long long)a1 seed:(unsigned long long)a2;

@end
