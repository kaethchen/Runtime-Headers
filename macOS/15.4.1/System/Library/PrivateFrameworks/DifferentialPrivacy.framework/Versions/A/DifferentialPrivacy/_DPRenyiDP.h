@interface _DPRenyiDP : NSObject

@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) double tau;

+ (id)defaultAlphas;
+ (BOOL)isValidAlpha:(double)a0 error:(id *)a1;

- (id)approximateDPForDelta:(double)a0 error:(id *)a1;
- (id)initWithAlpha:(double)a0 tau:(double)a1 error:(id *)a2;

@end
