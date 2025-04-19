@class FigMetalContext;
@protocol MTLComputePipelineState, MTLCommandBuffer, MTLBuffer;

@interface CMIFlexGTCStage : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> _FlexGTCDownsampleRGBA8_to_LA;
    id<MTLComputePipelineState> _FlexGTCDownsampleGM8_to_NLGM;
    id<MTLComputePipelineState> _FlexGTCDownsampleGM10_to_NLGM;
    id<MTLComputePipelineState> _FlexGTCConvertSDRLA_NLGM_to_HDRLA;
    id<MTLComputePipelineState> _FlexGTCHistogramLumaAndGain;
    id<MTLCommandBuffer> _currentCommandBuffer;
    id<MTLBuffer> _extractBuffer;
    id<MTLBuffer> _gainMapMetadataBuffer;
    float _meteorPlusHeadroom;
    int _gainMapWidth;
    int _gainMapHeight;
    float _gainMapBaselineOffsetConstant;
    float _gainMapAlternateOffsetConstant;
}

- (void).cxx_destruct;
- (int)_compileShaders;
- (int)computeFlexGTCWithSDRImage:(struct __CVBuffer { } *)a0 gainMap:(struct __CVBuffer { } *)a1 gainMapMetadata:(id)a2 config:(struct { float x0; float x1; BOOL x2; } *)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 gainMapCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (id)initWithOptionalCommandQueue:(id)a0;

@end
