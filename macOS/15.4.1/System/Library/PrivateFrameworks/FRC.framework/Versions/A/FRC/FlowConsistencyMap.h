@protocol MTLComputePipelineState, MTLBuffer;

@interface FlowConsistencyMap : FRCMetalBase {
    id<MTLComputePipelineState> _consistencyComputeKernel;
    id<MTLComputePipelineState> _consistencyNormalizationKernel;
    id<MTLComputePipelineState> _consistencyUpscalingKernel;
    id<MTLBuffer> _maxBuffer;
}

@property (readonly, nonatomic) float maxConsistency;
@property (nonatomic) BOOL useSIMD;

- (void).cxx_destruct;
- (BOOL)createKernels;
- (id)allocateLinearConsistencyMapWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (float)computeMaxConsisnteciesForwardConsistencyMap:(id)a0 backwardConsistencyMap:(id)a1;
- (float)createFlowConsistencyMapsWithForwardFlow:(id)a0 backwardFlow:(id)a1 forwardConsistencyMap:(id)a2 backwardConsistencyMap:(id)a3;
- (void)encodeMapNormalizationToCommandBuffer:(id)a0 consisitencyMap:(id)a1 maxConsistency:(id)a2;
- (void)encodeMapUpscalingToCommandBuffer:(id)a0 source:(id)a1 detination:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 forwardFlow:(id)a1 backwardFlow:(id)a2 forwardConsistencyMap:(id)a3 backwardConsistencyMap:(id)a4;
- (void)encodeUnomalizedMapCreationToCommandBuffer:(id)a0 forwardFlow:(id)a1 backwardFlow:(id)a2 forwardConsistencyMap:(id)a3 backwardConsistencyMap:(id)a4;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (float)maxValueInTexture:(id)a0;

@end
