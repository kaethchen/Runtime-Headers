@class NSDictionary, NSMutableArray;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface SpatialAnalysisMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _spatialAnalysisSumSad;
    id<MTLComputePipelineState> _spatialAnalysisVariance;
    id<MTLComputePipelineState> _spatialAnalysisDistance;
    BOOL _supportsSIMDPermute;
    BOOL _supportsQuadPermute;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _sumBufferPool;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _sadBufferPool;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _sumVarBufferPool;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheRGBALuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheRGBAChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)initWithDevice:(struct __CVBuffer { } *)a0;
- (int)SpatialSumSadVar:(struct __CVBuffer { } *)a0 sumBlockArray:(unsigned int *)a1 sadBlockArray:(unsigned int *)a2 sumUnitArray:(unsigned int *)a3 sumSquareUnitArray:(unsigned long long *)a4 sumTotal:(unsigned long long *)a5 sadTotal:(unsigned int *)a6 variance:(unsigned int *)a7 forRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a8 blockStride:(unsigned int)a9 unitStride:(unsigned int)a10 method:(unsigned int)a11 log2UnitSize:(unsigned int)a12 calcVar:(BOOL)a13;
- (void)CompileSpatialAnalysis:(BOOL)a0;
- (int)SpatialDistance:(struct __CVBuffer { } *)a0 prevFrame:(struct __CVBuffer { } *)a1 distBlockArray:(unsigned int *)a2 forRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 blockStride:(unsigned int)a4 log2UnitSize:(unsigned int)a5 startLine:(unsigned int)a6 lineStep:(unsigned int)a7 method:(unsigned int)a8;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (id)compileFunction:(id)a0;
- (id)rgbaUintTextureForLuma:(struct __CVBuffer { } *)a0 withAttributes:(id)a1;
- (id)unormTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;

@end
