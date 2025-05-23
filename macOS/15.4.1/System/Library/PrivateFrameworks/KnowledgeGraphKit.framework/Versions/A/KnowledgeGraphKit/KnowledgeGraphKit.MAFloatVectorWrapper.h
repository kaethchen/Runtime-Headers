@class NSString;

@interface KnowledgeGraphKit.MAFloatVectorWrapper : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _floatVector;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

+ (id)zerosOfCount:(long long)a0;
+ (id)onesOfCount:(long long)a0;
+ (id)repeatingFloat:(float)a0 count:(long long)a1;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)array;
- (id)data;
- (id)initWithArray:(id)a0;
- (float)mean;
- (float)standardDeviation;
- (float)sum;
- (float)floatAtIndex:(long long)a0;
- (id)initWithFloats:(const float *)a0 count:(long long)a1;
- (id)vectorBySubtractingVector:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)sliceFromStart:(long long)a0 toEnd:(long long)a1;
- (id)vectorByAddingScalar:(float)a0;
- (id)vectorByAddingVector:(id)a0;
- (id)vectorByDividingByScalar:(float)a0;
- (id)vectorByElementwiseRaisingToExponent:(float)a0;
- (id)vectorByMultiplyingByScalar:(float)a0;
- (float)dotProductWithWrapper:(id)a0;
- (id)naturalLogarithm;
- (id)naturalLogarithmIfPositive;
- (float)sumOfSquares;
- (id)vectorByElementwiseMultiplyingByWrapper:(id)a0;
- (id)vectorBySubtractingScalar:(float)a0;

@end
