@interface _DPApproximateDP : NSObject

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double delta;

+ (BOOL)isValidDelta:(double)a0 error:(id *)a1;
+ (BOOL)isValidEpsilon:(double)a0 error:(id *)a1;

- (id)description;
- (BOOL)exceed:(id)a0;
- (id)initWithEpsilon:(double)a0 delta:(double)a1 error:(id *)a2;

@end
