@interface MPSNDArrayStitchedReductionRMSNorm : MPSNDArrayStitchedReduction

@property (nonatomic) float epsilon;

- (id)initWithDevice:(id)a0 axis:(unsigned long long)a1 epsilon:(float)a2;

@end
