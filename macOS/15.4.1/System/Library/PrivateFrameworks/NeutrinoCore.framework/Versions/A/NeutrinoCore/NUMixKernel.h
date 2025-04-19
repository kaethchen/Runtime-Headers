@protocol MTLTexture;

@interface NUMixKernel : NUComputeKernel

@property (nonatomic) float factor;
@property (retain, nonatomic) id<MTLTexture> sourceTexture1;
@property (retain, nonatomic) id<MTLTexture> sourceTexture2;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } sourceRegion1;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } sourceRegion2;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } destinationOffset;

+ (void)mixTexture:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 withTexture:(id)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 factor:(float)a4 intoTexture:(id)a5 atPoint:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 withCommandBuffer:(id)a7;
+ (void)mixTexture:(id)a0 withTexture:(id)a1 factor:(float)a2 intoTexture:(id)a3 withCommandBuffer:(id)a4;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 destinationTexture:(id)a1;

@end
