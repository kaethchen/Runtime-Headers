@class MPSImageLanczosScale, NSDictionary, MPSImageBilinearScale;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface ScaleMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSImageBilinearScale *_bilinearKernel;
    MPSImageLanczosScale *_lanczosKernel;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _bilinearScaleLuma;
    id<MTLComputePipelineState> _bilinearScaleChroma;
    BOOL _supportsNonuniformThreadgroups;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)initWithDevice:(struct __CVBuffer { } *)a0;
- (void)CompileBilinearScaler:(BOOL)a0;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (id)compileFunction:(id)a0;
- (int)scaleFrame:(struct __CVBuffer { } *)a0 dstFrame:(struct __CVBuffer { } *)a1 srcRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 dstRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 scaleMethod:(int)a4;
- (int)scaleFrameBilinear:(struct __CVBuffer { } *)a0 dstFrame:(struct __CVBuffer { } *)a1 srcRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 dstRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3;
- (id)uintTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;
- (id)unormTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;

@end
