@protocol MTLIndirectCommandBuffer, MTLDepthStencilState, MTLBuffer, MTLRenderPipelineState;

@interface RenderBundleICBWithResources : NSObject {
    struct Vector<WebGPU::BindableResources, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct BindableResources *m_buffer; unsigned int m_capacity; unsigned int m_size; } _resources;
    struct HashMap<unsigned long long, WebGPU::IndexBufferAndIndexData, WTF::DefaultHash<unsigned long long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long long>, WTF::HashTraits<WebGPU::IndexBufferAndIndexData>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebGPU::IndexBufferAndIndexData>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebGPU::IndexBufferAndIndexData>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, WebGPU::IndexBufferAndIndexData, WTF::DefaultHash<unsigned long long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long long>>::KeyValuePairTraits, WTF::UnsignedWithZeroKeyHashTraits<unsigned long long>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _minVertexCountForDrawCommand;
}

@property (readonly, nonatomic) id<MTLBuffer> outOfBoundsReadFlag;
@property (readonly, nonatomic) id<MTLIndirectCommandBuffer> indirectCommandBuffer;
@property (readonly, nonatomic) id<MTLBuffer> indirectCommandBufferContainer;
@property (readonly, nonatomic) id<MTLRenderPipelineState> currentPipelineState;
@property (readonly, nonatomic) id<MTLDepthStencilState> depthStencilState;
@property (readonly, nonatomic) unsigned long long cullMode;
@property (readonly, nonatomic) unsigned long long frontFace;
@property (readonly, nonatomic) unsigned long long depthClipMode;
@property (readonly, nonatomic) float depthBias;
@property (readonly, nonatomic) float depthBiasSlopeScale;
@property (readonly, nonatomic) float depthBiasClamp;
@property (readonly, nonatomic) id<MTLBuffer> fragmentDynamicOffsetsBuffer;
@property (readonly, nonatomic) const void *pipeline;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)resources;
- (id)initWithICB:(id)a0 containerBuffer:(id)a1 pipelineState:(id)a2 depthStencilState:(id)a3 cullMode:(unsigned long long)a4 frontFace:(unsigned long long)a5 depthClipMode:(unsigned long long)a6 depthBias:(float)a7 depthBiasSlopeScale:(float)a8 depthBiasClamp:(float)a9 fragmentDynamicOffsetsBuffer:(id)a10 pipeline:(const void *)a11 minVertexCounts:(void *)a12 outOfBoundsReadFlag:(id)a13;
- (void *)minVertexCountForDrawCommand;

@end
