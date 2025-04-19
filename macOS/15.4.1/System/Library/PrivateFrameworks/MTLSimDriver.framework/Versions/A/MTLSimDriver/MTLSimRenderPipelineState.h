@class MTLDebugInstrumentationData, NSString, MTLSimDevice;
@protocol MTLComputePipelineState, MTLDevice;

@interface MTLSimRenderPipelineState : _MTLRenderPipelineState <MTLRenderPipelineStateSPI, MTLSerializerRenderPipelineState> {
    MTLSimDevice *_device;
    unsigned int _pipelineRef;
}

@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly, nonatomic) long long shaderValidationState;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *objectDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *meshDebugInstrumentationData;
@property (retain, nonatomic) id<MTLComputePipelineState> emulationObjectShaderPSO;
@property (readonly, retain, nonatomic) id<MTLComputePipelineState> emulationObjectPrefixSumPSO;
@property (readonly, retain, nonatomic) id<MTLComputePipelineState> emulationNoObjectPrefixSumPSO;
@property (retain, nonatomic) id<MTLComputePipelineState> emulationMeshShaderPSO;
@property (readonly, retain, nonatomic) id<MTLComputePipelineState> emulationMeshPrefixSum1PSO;
@property (readonly, retain, nonatomic) id<MTLComputePipelineState> emulationMeshPrefixSum2PSO;
@property (readonly, retain, nonatomic) id<MTLComputePipelineState> emulationMeshPrefixSum3PSO;
@property (nonatomic) unsigned long long emulationMeshSize;
@property (nonatomic) unsigned long long emulationMeshMaxVertexCount;
@property (nonatomic) unsigned long long emulationMeshMaxPrimitiveCount;
@property (nonatomic) unsigned long long emulationObjectShaderIntermediateBufferSlot;
@property (nonatomic) unsigned long long emulationMeshShaderIntermediateBufferSlot;
@property (nonatomic) unsigned long long emulationVertexShaderIntermediateBufferSlot;
@property (nonatomic) unsigned long long emulationPrimitiveTopology;
@property (nonatomic) unsigned long long emulationPayloadMemoryLength;
@property (nonatomic) BOOL usesMeshShaderEmulation;
@property (readonly) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property (readonly) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property (readonly) unsigned long long objectThreadExecutionWidth;
@property (readonly) unsigned long long meshThreadExecutionWidth;
@property (readonly, nonatomic) unsigned int explicitVisibilityGroupID;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned int)getFragmentShaderTelemetryID;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newFragmentShaderDebugInfo;
- (id)newVertexShaderDebugInfo;
- (id)pipelineBinaries;
- (id)initWithDevice:(id)a0 pipelineRef:(unsigned int)a1 descriptor:(id)a2;
- (unsigned int)pipelineRef;

@end
