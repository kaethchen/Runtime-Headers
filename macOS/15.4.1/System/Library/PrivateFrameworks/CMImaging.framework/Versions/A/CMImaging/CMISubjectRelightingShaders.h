@protocol MTLComputePipelineState;

@interface CMISubjectRelightingShaders : NSObject {
    id<MTLComputePipelineState> _srlGlobalSparseHistogramLivePhotos;
    id<MTLComputePipelineState> _srlFaceSparseHistogramLivePhotos;
    id<MTLComputePipelineState> _srlCalcCoefficientsLivePhotos;
    id<MTLComputePipelineState> _srlGlobalSparseHistogram;
    id<MTLComputePipelineState> _srlFaceSparseHistogram;
    id<MTLComputePipelineState> _srlCalcCoefficients;
    id<MTLComputePipelineState> _srlApply;
    id<MTLComputePipelineState> _srlCalcPostSRLStats;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;

@end
