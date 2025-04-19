@interface _DPZeroConcentratedDP : NSObject

@property (readonly, nonatomic) double rho;

- (id)approximateDPForEpsilon:(double)a0 error:(id *)a1;
- (id)initWithRho:(double)a0 error:(id *)a1;

@end
