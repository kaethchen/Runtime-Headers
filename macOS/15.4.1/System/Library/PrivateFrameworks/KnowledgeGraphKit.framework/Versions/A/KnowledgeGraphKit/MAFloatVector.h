@class _TtC17KnowledgeGraphKit20MAFloatVectorWrapper;

@interface MAFloatVector : NSObject <NSCopying, NSMutableCopying>

@property (class, readonly, nonatomic) Class wrapperClass;

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatVectorWrapper *wrapper;

+ (id)meanVectorWithFloatVectors:(id)a0;
+ (id)vectorRepeatingFloat:(float)a0 count:(long long)a1;
+ (id)zerosOfCount:(long long)a0;
+ (id)onesOfCount:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)array;
- (id)data;
- (id)initWithArray:(id)a0;
- (id)initWithData:(id)a0;
- (float)mean;
- (float)standardDeviation;
- (float)sum;
- (float)floatAtIndex:(long long)a0;
- (id)initWithFloats:(const float *)a0 count:(long long)a1;
- (id)vectorBySubtractingVector:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (id)initWithWrapper:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)sliceFromStart:(long long)a0 toEnd:(long long)a1;
- (id)vectorByAddingScalar:(float)a0;
- (id)vectorByAddingVector:(id)a0;
- (id)vectorByAppendingVector:(id)a0;
- (id)vectorByDividingByScalar:(float)a0;
- (id)vectorByElementwiseNaturalLogarithmIfPositive;
- (id)vectorByElementwiseRaisingToExponent:(float)a0;
- (id)vectorByMultiplyingByScalar:(float)a0;
- (id)vectorByAppendingDoubles:(const double *)a0 count:(long long)a1;
- (BOOL)_isArrayOfFloats:(id)a0;
- (float)dotProductWithVector:(id)a0;
- (float)sumOfSquares;
- (id)vectorByAppendingArray:(id)a0;
- (id)vectorByAppendingFloat:(float)a0;
- (id)vectorByAppendingFloats:(const float *)a0 count:(long long)a1;
- (id)vectorByElementwiseMultiplyingByVector:(id)a0;
- (id)vectorByElementwiseNaturalLogarithm;
- (id)vectorBySubtractingScalar:(float)a0;

@end
