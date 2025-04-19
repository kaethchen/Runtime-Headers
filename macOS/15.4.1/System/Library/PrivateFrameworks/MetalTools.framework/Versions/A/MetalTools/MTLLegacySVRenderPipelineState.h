@class MTLRenderPipelineReflection, MTLLegacySVImageData, MTLLegacySVBuffer, NSMutableArray;

@interface MTLLegacySVRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineReflection *_internalReflection;
    MTLRenderPipelineReflection *_userReflection;
    MTLLegacySVImageData *_vertexFunctionData;
    MTLLegacySVImageData *_fragmentFunctionData;
    MTLLegacySVImageData *_tileFunctionData;
    MTLLegacySVImageData *_objectFunctionData;
    MTLLegacySVImageData *_meshFunctionData;
    NSMutableArray *_retainedFunctions;
    MTLLegacySVBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
    long long _shaderValidation;
    long long _shaderValidationState;
}

@property (readonly, nonatomic) NSMutableArray *binaryFunctionData;
@property (readonly, nonatomic) MTLLegacySVImageData *vertexFunctionData;
@property (readonly, nonatomic) MTLLegacySVImageData *fragmentFunctionData;
@property (readonly, nonatomic) MTLLegacySVImageData *tileFunctionData;
@property (readonly, nonatomic) MTLLegacySVImageData *objectFunctionData;
@property (readonly, nonatomic) MTLLegacySVImageData *meshFunctionData;
@property (readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property (readonly, nonatomic) MTLLegacySVBuffer *vertexConstantsBuffer;
@property (readonly, nonatomic) MTLLegacySVBuffer *fragmentConstantsBuffer;
@property (readonly, nonatomic) MTLLegacySVBuffer *tileConstantsBuffer;
@property (readonly, nonatomic) MTLLegacySVBuffer *objectConstantsBuffer;
@property (readonly, nonatomic) MTLLegacySVBuffer *meshConstantsBuffer;
@property (readonly, nonatomic) MTLLegacySVBuffer *indirectStateBuffer;
@property (readonly, nonatomic) int vertexMaxCallStackDepth;
@property (readonly, nonatomic) int fragmentMaxCallStackDepth;
@property (readonly, nonatomic) int meshMaxCallStackDepth;
@property (readonly, nonatomic) int objectMaxCallStackDepth;
@property (readonly, nonatomic) int tileMaxCallStackDepth;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly, nonatomic) long long shaderValidationState;

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
