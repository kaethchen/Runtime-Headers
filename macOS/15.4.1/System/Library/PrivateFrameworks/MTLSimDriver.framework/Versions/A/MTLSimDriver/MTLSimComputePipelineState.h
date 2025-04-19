@class MTLDebugInstrumentationData, NSString, MTLSimDevice;
@protocol MTLDevice;

@interface MTLSimComputePipelineState : _MTLComputePipelineState <MTLComputePipelineStateSPI, MTLSerializerComputePipelineState> {
    MTLSimDevice *_device;
    unsigned int _pipelineRef;
}

@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) unsigned long long threadExecutionWidth;
@property (nonatomic) unsigned long long staticThreadgroupMemoryLength;
@property (nonatomic) BOOL supportIndirectCommandBuffers;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) unsigned long long gpuHandle;
@property (readonly, nonatomic) long long shaderValidationState;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)pipelineBinaries;
- (id)initWithDevice:(id)a0 pipelineRef:(unsigned int)a1 descriptor:(id)a2;
- (unsigned int)pipelineRef;

@end
