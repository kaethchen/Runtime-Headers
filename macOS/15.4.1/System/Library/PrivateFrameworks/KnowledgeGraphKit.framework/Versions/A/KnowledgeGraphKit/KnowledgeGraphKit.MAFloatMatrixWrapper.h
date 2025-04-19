@class NSString;

@interface KnowledgeGraphKit.MAFloatMatrixWrapper : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _floatMatrix;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long rows;
@property (nonatomic, readonly) long long columns;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)zerosWithRows:(long long)a0 columns:(long long)a1;
+ (id)onesWithRows:(long long)a0 columns:(long long)a1;
+ (id)repeatingWithElement:(float)a0 rows:(long long)a1 columns:(long long)a2;
+ (id)wrapperWithData:(id)a0 rows:(long long)a1 columns:(long long)a2;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)array;
- (id)data;
- (float)mean;
- (id)initWithRows:(id)a0;
- (float)sum;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)row:(long long)a0;
- (float)floatAtRow:(long long)a0 column:(long long)a1;
- (id)initWithFloats:(const float *)a0 rows:(long long)a1 columns:(long long)a2;
- (id)matrixByAddingScalar:(float)a0;
- (id)matrixByAppendingColumnVector:(id)a0;
- (id)matrixByAppendingColumnsOfMatrix:(id)a0;
- (id)matrixBySubtractingMatrix:(id)a0;
- (id)matrixBySubtractingScalar:(float)a0;
- (id)meanAlongAxis:(unsigned long long)a0;
- (id)sumAlongAxis:(unsigned long long)a0;
- (float)sumOfSquares;

@end
