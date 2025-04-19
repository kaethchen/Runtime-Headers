@class ImageProcessUtility;
@protocol MTLComputePipelineState;

@interface Postprocess : VEMetalBase {
    ImageProcessUtility *_imageProcessUtility;
    id<MTLComputePipelineState> _postprocessOutputKernel;
    id<MTLComputePipelineState> _postprocessArrayOutputKernel;
    id<MTLComputePipelineState> _smoothAlphaKernel;
    BOOL _interleaved;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1;
- (BOOL)setupMetal;
- (BOOL)createModules;
- (long long)encodePostprocessOutputToCommandBuffer:(id)a0 input:(id)a1 loss:(id)a2 fullresEdge:(id)a3 destination:(id)a4;
- (long long)encodeSmoothAlphaMapToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (id)initWithMode;

@end
