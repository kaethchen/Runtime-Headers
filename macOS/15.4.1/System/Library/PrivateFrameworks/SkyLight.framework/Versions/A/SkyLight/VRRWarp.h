@protocol MTLFunction, MTLBuffer, MTLRenderPipelineState;

@interface VRRWarp : NSObject {
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _fragmentFunction;
    id<MTLRenderPipelineState> _warpRenderPipelineState;
    id<MTLBuffer> _vertexBuffer;
    id<MTLBuffer> _indexBuffer;
}

+ (struct _WarpDynamicParameters { float x0; float x1; })defaultDynamicParametersFromStaticParameters:(struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })a0;
+ (struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })defaultMaxStaticParametersForInputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
+ (struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })defaultMinStaticParametersForInputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
+ (id)defaultOptimizationOrder;
+ (struct _WarpRenderOptions { BOOL x0; BOOL x1; })defaultRenderOptions;
+ (struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })defaultStaticParametersForInputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })maxPhysicalSizeForStaticParameters:(struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })a0 outputGranularity:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1 withDevice:(id)a2;
+ (struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })optimizeStaticParameters:(id)a0 betweenMax:(struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })a1 andMin:(struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })a2 forTargetWarpedSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 withDevice:(id)a4;
+ (id)vrrMapWithStaticParameters:(struct _WarpStaticParameters { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; float x1; float x2; float x3; float x4; BOOL x5; })a0 withDynamicParameters:(struct _WarpDynamicParameters { float x0; float x1; })a1 clampRateMaxCenter:(BOOL)a2 outputRateMaxRectInPhysical:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } *)a3 withDevice:(id)a4;

- (void)dealloc;
- (id)initWithLibrary:(id)a0 destinationPixelFormat:(unsigned long long)a1;
- (void)warpFromTexture:(id)a0 toTexture:(id)a1 withVRRMap:(id)a2 withCommandBuffer:(id)a3 withOptions:(struct _WarpRenderOptions { BOOL x0; BOOL x1; })a4;

@end
