@class MTLRenderPassDescriptor;
@protocol MTLCommandQueue, MTLDevice, MTLBuffer, MTLTexture, MTLComputePipelineState, MTLRenderPipelineState;

@interface CMPhotoInterchangeCompactMetal : NSObject {
    id<MTLDevice> _mDevice;
    id<MTLComputePipelineState> _mCompactMetadataPSO;
    MTLRenderPassDescriptor *_renderToTextureRenderPassDescriptor;
    id<MTLRenderPipelineState> _renderPipeline;
    id<MTLCommandQueue> _mCommandQueue;
    id<MTLBuffer> _mBufferA;
    id<MTLBuffer> _mBufferB;
    id<MTLBuffer> _mBufferResult;
    id<MTLTexture> _mSrcTex;
    id<MTLTexture> _mDstTex;
    id<MTLBuffer> _mDstBuf;
    unsigned long long _mDstMetaOffset;
    unsigned long long mb_width;
    unsigned long long mb_height;
    unsigned long long meta_size;
    unsigned long long meta_length;
    unsigned short _mask;
}

- (void)prepareData;
- (id)initWithDevice:(id)a0 encode:(BOOL)a1 bayer:(BOOL)a2 quadra:(BOOL)a3 depth:(char)a4;
- (void)prepareDst:(struct __IOSurface { } *)a0;
- (void)prepareSrc:(struct __IOSurface { } *)a0;
- (id)prepareTexture:(struct __IOSurface { } *)a0 usage:(unsigned long long)a1;
- (void)sendRenderCommand;

@end
