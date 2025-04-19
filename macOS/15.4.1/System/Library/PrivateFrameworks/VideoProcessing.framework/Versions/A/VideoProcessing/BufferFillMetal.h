@class NSDictionary;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface BufferFillMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _fillBoundaryLeftRightLuma;
    id<MTLComputePipelineState> _fillBoundaryLeftRightChroma;
    id<MTLComputePipelineState> _fillBoundaryTopBottomCornersLuma;
    id<MTLComputePipelineState> _fillBoundaryTopBottomCornersChroma;
    id<MTLComputePipelineState> _preFillLuma;
    id<MTLComputePipelineState> _preFillChroma;
    BOOL _supportsNonuniformThreadgroups;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    NSDictionary *_readWriteAttributes;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)initWithDevice:(struct __CVBuffer { } *)a0;
- (int)PreFill:(struct __CVBuffer { } *)a0 values:(int[3])a1;
- (void)CompileBufferFill;
- (int)ExtendEdges:(struct __CVBuffer { } *)a0 padSize:(unsigned int[3])a1;
- (int)FillBoundaryOrExtendEdges:(struct __CVBuffer { } *)a0 padSize:(unsigned int[4])a1 fillValues:(int[3])a2;
- (int)FillBoundary:(struct __CVBuffer { } *)a0 padSize:(unsigned int[3])a1 fillValues:(int[3])a2;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (id)compileFunction:(id)a0;
- (id)unormTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;

@end
