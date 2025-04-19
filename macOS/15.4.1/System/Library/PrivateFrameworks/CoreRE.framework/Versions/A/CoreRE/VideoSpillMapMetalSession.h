@class MPSImageGaussianBlur, NSDictionary, MTLTextureDescriptor, MPSImageBilinearScale;
@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface VideoSpillMapMetalSession : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSImageBilinearScale *_bilinearScale;
    struct __CVPixelBufferPool { } *_spillBufferPoolUnprotected;
    struct __CVPixelBufferPool { } *_spillBufferPoolScreenScrapingProtected;
    struct __CVPixelBufferPool { } *_spillBufferPoolHDCPType0;
    struct __CVPixelBufferPool { } *_spillBufferPoolHDCPType1;
    struct __CFDictionary { } *_spillmapBufferProperties;
    struct __CVMetalTextureCache { } *_textureCacheBGRA;
    struct __CVMetalTextureCache { } *_textureCacheSpillmap;
    NSDictionary *_readAttributes;
    NSDictionary *_readWriteAttributes;
    MTLTextureDescriptor *_intermediateImageDescriptor;
    MPSImageGaussianBlur *_gaussianBlur;
    id<MTLComputePipelineState> _unwarpVideo;
}

+ (unsigned long long)metalPixelFormatForPixelFormat:(unsigned int)a0 withTransferFunction:(unsigned char)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)configureGPU;
- (int)configureIntermediateTextureProcessing:(int)a0 setHeight:(int)a1 setSigma:(float)a2;
- (int)configureSession:(struct __IOSurface { } *)a0 setWidth:(int)a1 setHeight:(int)a2;
- (id)loadTexture:(struct __CVBuffer { } *)a0 withAttributes:(id)a1 forPlane:(unsigned int)a2 withCache:(struct __CVMetalTextureCache { } *)a3 withFormat:(unsigned long long)a4;
- (int)calculateDrmSpillmapMetal:(struct __CVBuffer { } *)a0 emitSpillmap:(struct __CVBuffer **)a1 setLayout:(int)a2 withAllocator:(void *)a3 videoVrrData:(const void *)a4;
- (void)unwarpVideo:(id)a0 withCommandBuffer:(id)a1 outTexture:(id)a2 videoVrrData:(const void *)a3;

@end
