@class NSIndexSet;

@interface EFBloomFilter : NSObject <NSCopying, NSMutableCopying> {
    NSIndexSet *_indexes;
}

@property (readonly, nonatomic) unsigned long long bucketCount;
@property (readonly, nonatomic) unsigned long long hashFunctionCount;
@property (readonly, nonatomic) unsigned long long seed;

+ (id)bestBloomFilterForValues:(id)a0 excludingValues:(id)a1 falsePositiveRate:(double)a2 knownFalsePositives:(id *)a3;
+ (id)bestBloomFilterForValues:(id)a0 excludingValues:(id)a1 knownFalsePositives:(id *)a2;
+ (id)bloomFilterWithContentsOfFile:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithValues:(id)a0;
- (BOOL)mayContainData:(id)a0;
- (id)_initWithBucketCount:(unsigned long long)a0 hashFunctionCount:(unsigned long long)a1 seed:(unsigned long long)a2 indexes:(id)a3;
- (id)initWithValues:(id)a0 falsePositiveRate:(double)a1;
- (id)initWithValues:(id)a0 falsePositiveRate:(double)a1 seed:(unsigned long long)a2;
- (BOOL)mayContainString:(id)a0;

@end
