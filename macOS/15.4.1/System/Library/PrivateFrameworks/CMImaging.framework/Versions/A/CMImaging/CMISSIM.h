@class FigMetalContext, CMISSIMConfig;
@protocol MTLComputePipelineState;

@interface CMISSIM : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _kernelCalculateSSIM_singleChannel;
    id<MTLComputePipelineState> _kernelCalculateSSIM_multiChannel;
    id<MTLComputePipelineState> _kernelReduceSSIM;
    struct __CVMetalTextureCache { } *_textureCache;
    float _gaussianWeights[11];
    BOOL _multiChannel;
}

@property (readonly, nonatomic) CMISSIMConfig *config;
@property (nonatomic) BOOL lumaOnly;
@property (nonatomic) void /* unknown type, empty encoding */ channelWeights;

- (void)dealloc;
- (void).cxx_destruct;
- (int)_bindPixelBufferToTexture:(struct __CVBuffer { } *)a0 usage:(unsigned long long)a1 overrideFormat:(unsigned long long)a2 planeIndex:(int)a3 lumaOnly:(BOOL)a4 textuePtr:(id *)a5;
- (void)_calculateGaussianWeights;
- (int)_encodeSSIMCalculation:(id)a0 imageA:(id)a1 imageB:(id)a2 outputSSIMMap:(id)a3;
- (int)_encodeSSIMReduction:(id)a0 ssimMap:(id)a1 inPlace:(BOOL)a2 outputSSIMVal:(float *)a3;
- (int)_loadKernel:(id *)a0 name:(id)a1 functionConstants:(id)a2;
- (int)_loadKernels;
- (int)_setupMetalContextWithCommandQueue:(id)a0;
- (id)_validateConfiguration:(id)a0;
- (int)calculateWithImageA:(struct __CVBuffer { } *)a0 imageB:(struct __CVBuffer { } *)a1 outputSSIMMap:(struct __CVBuffer { } *)a2 outputSSIMVal:(float *)a3;
- (int)encodeToCommandBuffer:(id)a0 imageA:(id)a1 imageB:(id)a2 outputSSIMMap:(id)a3 outputSSIMVal:(float *)a4;
- (id)initWithOptionalCommandQueue:(id)a0 config:(id)a1;

@end
