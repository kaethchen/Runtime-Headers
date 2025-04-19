@protocol MTLComputePipelineState;

@interface FigRegWarpPPGPUShaders : NSObject {
    id<MTLComputePipelineState> _downscaleImagePipeline;
    id<MTLComputePipelineState> _copyImagePipeline;
    id<MTLComputePipelineState> _boxFilterPipeline;
    id<MTLComputePipelineState> _cornerResponseShortPipeline;
    id<MTLComputePipelineState> _cornerResponseHalfPipeline;
    id<MTLComputePipelineState> _cornerDetectionFirstPass4x4ShortPipeline;
    id<MTLComputePipelineState> _cornerDetectionFirstPass4x4HalfPipeline;
    id<MTLComputePipelineState> _cornerDetectionFinalPassShortPipeline;
    id<MTLComputePipelineState> _cornerDetectionFinalPassHalfPipeline;
    id<MTLComputePipelineState> _cornerMatchingPipeline;
    id<MTLComputePipelineState> _homographyMinSamplesSolverPipeline;
    id<MTLComputePipelineState> _homographySolverUsingAllCornersPipeline;
    id<MTLComputePipelineState> _affineMinSamplesSolverPipeline;
    id<MTLComputePipelineState> _rigidMinSamplesSolverPipeline;
    id<MTLComputePipelineState> _homographySolverUsingInliersPipeline;
    id<MTLComputePipelineState> _reorderCornersPipeline;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;

@end
