@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;
@protocol MTLFunction;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {
    unsigned long long _maxThreadPositionInGrid[3];
    unsigned long long _maxThreadsPerGrid[3];
    unsigned long long _maxThreadPositionInThreadgroup[3];
    unsigned long long _maxThreadIndexInThreadgroup[3];
    unsigned long long _maxThreadsPerThreadgroup[3];
    unsigned long long _maxThreadgroupPositionInGrid[3];
    unsigned long long _maxThreadgroupsPerGrid[3];
    unsigned long long _maxStageInGridSize[3];
    unsigned long long _maxStageInGridOrigin[3];
}

@property (readonly, nonatomic) id<MTLFunction> function;
@property (readonly, nonatomic) MTLComputePipelineDescriptor *descriptor;
@property (readonly, nonatomic) MTLComputePipelineReflection *reflection;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly, nonatomic) long long shaderValidationState;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (id)functionHandleToDebugFunctionHandle:(id)a0 parentFunction:(id)a1;
- (id)functionHandleWithFunction:(id)a0;
- (id)initWithComputePipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;
- (BOOL)isAncestorOf:(id)a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (void)validateHandleForSetFunction:(id)a0;

@end
