@class MTLGPUDebugImageData, MTLComputePipelineReflection, NSString, NSMutableArray, MTLGPUDebugBuffer;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState {
    MTLGPUDebugImageData *_kernelFunctionData;
    MTLComputePipelineReflection *_internalReflection;
    MTLComputePipelineReflection *_userReflection;
    unsigned long long _constantOffset;
    unsigned int _threadgroupArgumentOffset;
    unsigned int _activeThreadgroupMask;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
    long long _shaderValidation;
    long long _shaderValidationState;
    NSMutableArray *_retainedFunctions;
}

@property (readonly, nonatomic) NSMutableArray *binaryFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *kernelFunctionData;
@property (readonly, nonatomic) MTLComputePipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLComputePipelineReflection *userReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (readonly, nonatomic) unsigned long long constantOffset;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly, nonatomic) int maxCallStackDepth;
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly, nonatomic) long long shaderValidationState;
@property (retain, nonatomic) NSString *UID;

- (void)dealloc;
- (void)_initConstantsBuffer:(id)a0 device:(id)a1;
- (id)functionHandleWithFunction:(id)a0;
- (id)initWithComputePipelineState:(id)a0 binaryFunctions:(id)a1 withState:(id)a2 device:(id)a3 pipelineOptions:(unsigned long long)a4;
- (id)initWithComputePipelineState:(id)a0 descriptor:(id)a1 unwrappedDescriptor:(id)a2 reflection:(id)a3 device:(id)a4 pipelineOptions:(unsigned long long)a5;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (void)releaseReflection;

@end
