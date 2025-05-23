@class MTLGPUDebugImageData, MTLRenderPipelineReflection, NSString, NSMutableArray, MTLGPUDebugBuffer;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineReflection *_internalReflection;
    MTLRenderPipelineReflection *_userReflection;
    MTLGPUDebugImageData *_vertexFunctionData;
    MTLGPUDebugImageData *_fragmentFunctionData;
    MTLGPUDebugImageData *_tileFunctionData;
    MTLGPUDebugImageData *_objectFunctionData;
    MTLGPUDebugImageData *_meshFunctionData;
    NSMutableArray *_retainedFunctions;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
    long long _shaderValidation;
    long long _shaderValidationState;
}

@property (readonly, nonatomic) NSMutableArray *binaryFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *vertexFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *fragmentFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *tileFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *objectFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *meshFunctionData;
@property (readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *vertexConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *fragmentConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *tileConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *objectConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *meshConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;
@property (readonly, nonatomic) int vertexMaxCallStackDepth;
@property (readonly, nonatomic) int fragmentMaxCallStackDepth;
@property (readonly, nonatomic) int meshMaxCallStackDepth;
@property (readonly, nonatomic) int objectMaxCallStackDepth;
@property (readonly, nonatomic) int tileMaxCallStackDepth;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly, nonatomic) long long shaderValidationState;
@property (retain, nonatomic) NSString *UID;

- (void)dealloc;
- (void)_initConstantsBuffer:(id)a0 device:(id)a1;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1;
- (id)initWithRenderPipelineState:(id)a0 descriptor:(id)a1 unwrappedDescriptor:(id)a2 reflection:(id)a3 device:(id)a4 pipelineOptions:(unsigned long long)a5;
- (id)initWithRenderPipelineState:(id)a0 meshDescriptor:(id)a1 unwrappedDescriptor:(id)a2 reflection:(id)a3 device:(id)a4 pipelineOptions:(unsigned long long)a5;
- (id)initWithRenderPipelineState:(id)a0 tileDescriptor:(id)a1 reflection:(id)a2 device:(id)a3 pipelineOptions:(unsigned long long)a4;
- (id)initWithRenderPipelineState:(id)a0 vertexBinaryFunctions:(id)a1 fragmentBinaryFunctions:(id)a2 tileBinaryFunctions:(id)a3 objectBinaryFunctions:(id)a4 meshBinaryFunctions:(id)a5 withState:(id)a6 device:(id)a7 pipelineOptions:(unsigned long long)a8;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 fragmentAdditionalBinaryFunctions:(id)a1 error:(id *)a2;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (void)releaseReflection;
- (id)unwrapBinaryFunctions:(id)a0;

@end
