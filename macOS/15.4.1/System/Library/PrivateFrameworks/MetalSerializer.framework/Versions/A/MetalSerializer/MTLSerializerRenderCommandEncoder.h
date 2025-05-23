@class NSString, NSMutableArray, MTLRenderPassDescriptor;
@protocol MTLSerializerDepthStencilState, MTLDevice, MTLSerializerBuffer, MTLSerializerRenderPipelineState, MTLSerializerSamplerState, MTLSerializerTexture;

@interface MTLSerializerRenderCommandEncoder : MTLSerializerCommandEncoder <MTLRenderCommandEncoderSPI> {
    NSMutableArray *splitHandlers;
    MTLRenderPassDescriptor *renderPassDescriptor;
    BOOL hadSplit;
    id<MTLSerializerRenderPipelineState> pipelineState;
    id<MTLSerializerDepthStencilState> depthStencilState;
    id<MTLSerializerBuffer> fragmentBuffers[31];
    id<MTLSerializerTexture> fragmentTextures[128];
    id<MTLSerializerSamplerState> fragmentSamplers[16];
    id<MTLSerializerBuffer> vertexBuffers[31];
    id<MTLSerializerTexture> vertexTextures[128];
    id<MTLSerializerSamplerState> vertexSamplers[16];
    id<MTLSerializerBuffer> tessellationFactorBuffer;
    void *renderPassCommand;
    BOOL _resourcesDirty;
    BOOL _supportsCorrectBaseVertex;
}

@property BOOL needsWrites;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long tileWidth;
@property (readonly) unsigned long long tileHeight;

- (void)dealloc;
- (void)setScissorRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)setTileSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)useHeap:(id)a0 stages:(unsigned long long)a1;
- (void)setDepthCleared;
- (void)setVisibilityResultMode:(unsigned long long)a0 offset:(unsigned long long)a1;
- (void)addSplitHandler:(id /* block */)a0;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)drawIndexedPatches:(unsigned long long)a0 patchIndexBuffer:(id)a1 patchIndexBufferOffset:(unsigned long long)a2 controlPointIndexBuffer:(id)a3 controlPointIndexBufferOffset:(unsigned long long)a4 indirectBuffer:(id)a5 indirectBufferOffset:(unsigned long long)a6;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexType:(unsigned long long)a1 indexBuffer:(id)a2 indexBufferOffset:(unsigned long long)a3 indirectBuffer:(id)a4 indirectBufferOffset:(unsigned long long)a5;
- (void)drawPatches:(unsigned long long)a0 patchIndexBuffer:(id)a1 patchIndexBufferOffset:(unsigned long long)a2 indirectBuffer:(id)a3 indirectBufferOffset:(unsigned long long)a4;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6;
- (void)drawPrimitives:(unsigned long long)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isMemorylessRender;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1 afterStages:(unsigned long long)a2 beforeStages:(unsigned long long)a3;
- (void)memoryBarrierWithScope:(unsigned long long)a0 afterStages:(unsigned long long)a1 beforeStages:(unsigned long long)a2;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)setAlphaTestReferenceValue:(float)a0;
- (void)setBlendColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)setClipPlane:(float)a0 p2:(float)a1 p3:(float)a2 p4:(float)a3 atIndex:(unsigned long long)a4;
- (void)setColorResolveTexture:(id)a0 slice:(unsigned long long)a1 depthPlane:(unsigned long long)a2 level:(unsigned long long)a3 yInvert:(BOOL)a4 atIndex:(unsigned long long)a5;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setCullMode:(unsigned long long)a0;
- (void)setDepthBias:(float)a0 slopeScale:(float)a1 clamp:(float)a2;
- (void)setDepthClipMode:(unsigned long long)a0;
- (void)setDepthClipModeSPI:(unsigned long long)a0;
- (void)setDepthResolveTexture:(id)a0 slice:(unsigned long long)a1 depthPlane:(unsigned long long)a2 level:(unsigned long long)a3 yInvert:(BOOL)a4;
- (void)setDepthStencilState:(id)a0;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setFragmentAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setFragmentBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setFragmentBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setFragmentBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setFragmentBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setFragmentIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setFragmentIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFragmentSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFragmentSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setFragmentSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 lodBias:(float)a3 atIndex:(unsigned long long)a4;
- (void)setFragmentSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setFragmentSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFragmentTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFragmentTexture:(id)a0 atTextureIndex:(unsigned long long)a1 samplerState:(id)a2 atSamplerIndex:(unsigned long long)a3;
- (void)setFragmentTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFragmentVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setFragmentVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFrontFacingWinding:(unsigned long long)a0;
- (void)setLineWidth:(float)a0;
- (void)setMeshAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setMeshIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setMeshIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setMeshVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setMeshVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setObjectAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setObjectIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setObjectIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setObjectVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setObjectVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setPointSize:(float)a0;
- (void)setPrimitiveRestartEnabled:(BOOL)a0;
- (void)setPrimitiveRestartEnabled:(BOOL)a0 index:(unsigned long long)a1;
- (void)setProvokingVertexMode:(unsigned long long)a0;
- (void)setRenderPipelineState:(id)a0;
- (void)setScissorRects:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 count:(unsigned long long)a1;
- (void)setStencilCleared;
- (void)setStencilFrontReferenceValue:(unsigned int)a0 backReferenceValue:(unsigned int)a1;
- (void)setStencilReferenceValue:(unsigned int)a0;
- (void)setStencilResolveTexture:(id)a0 slice:(unsigned long long)a1 depthPlane:(unsigned long long)a2 level:(unsigned long long)a3 yInvert:(BOOL)a4;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (void)setTessellationFactorBuffer:(id)a0 offset:(unsigned long long)a1 instanceStride:(unsigned long long)a2;
- (void)setTessellationFactorScale:(float)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTileAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setTileBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTileBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setTileBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setTileBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTileIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setTileIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTileSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTileSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setTileSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setTileTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTileTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTileVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setTileVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTransformFeedbackState:(unsigned long long)a0;
- (void)setTriangleFillMode:(unsigned long long)a0;
- (void)setTriangleFrontFillMode:(unsigned long long)a0 backFillMode:(unsigned long long)a1;
- (void)setVertexAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVertexAmplificationCount:(unsigned long long)a0 viewMappings:(const struct { unsigned int x0; unsigned int x1; } *)a1;
- (void)setVertexAmplificationMode:(unsigned long long)a0 value:(unsigned long long)a1;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setVertexBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setVertexBufferOffset:(unsigned long long)a0 attributeStride:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVertexBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 attributeStrides:(const unsigned long long *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setVertexBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setVertexBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVertexBytes:(const void *)a0 length:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setVertexIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVertexIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVertexSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setVertexSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 lodBias:(float)a3 atIndex:(unsigned long long)a4;
- (void)setVertexSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setVertexSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVertexTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVertexVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setViewport:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setViewportTransformEnabled:(BOOL)a0;
- (void)setViewports:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 count:(unsigned long long)a1;
- (void)textureBarrier;
- (void)updateFence:(id)a0 afterStages:(unsigned long long)a1;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2 stages:(unsigned long long)a3;
- (void)waitForFence:(id)a0 beforeStages:(unsigned long long)a1;
- (unsigned long long)getType;
- (void)beginSegment:(BOOL)a0;
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1;
- (void)split;
- (void)flushWrites;
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1 serializer:(id)a2;
- (BOOL)addRenderTargetReferences;
- (BOOL)writeDescriptor;
- (void)fixStoreActions:(id)a0;
- (void)forceLoadActions;
- (void)forceStoreActionsForPosition:(unsigned long long)a0;
- (BOOL)handleSplits;
- (void)setEncoderPosition:(unsigned long long)a0;

@end
