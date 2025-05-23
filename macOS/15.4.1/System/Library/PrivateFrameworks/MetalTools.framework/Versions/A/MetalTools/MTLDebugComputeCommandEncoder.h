@class __begin_, baseLevel, __end_cap_, MTLDebugCommandBuffer, __end_;
@protocol MTLComputePipelineState;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    struct MTLDebugFunctionArgument { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long bufferAttributeStride; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _buffers[31];
    struct MTLDebugFunctionArgument { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long bufferAttributeStride; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _textures[128];
    struct MTLDebugFunctionArgument { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long bufferAttributeStride; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _samplers[16];
    struct MTLDebugFunctionArgument { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long bufferAttributeStride; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _threadgroupMemoryLengths[31];
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _imageBlockSize;
    MTLDebugCommandBuffer *_commandBuffer;
    BOOL canDealloc;
    BOOL canEndEncoding;
    BOOL canSetComputePipelineState;
    BOOL hasEndEncoding;
    BOOL hasSetComputePipelineState;
    BOOL hasSetStageInRegion;
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } stageInRegion;
    BOOL hasIndirectSetStageInRegion;
    BOOL allowsNullBufferBinds;
    struct deque<id, std::allocator<id>> { struct __split_buffer<id *, std::allocator<id *>> { __begin_ ***__first_; __end_ ***x0; __end_cap_ ***x1; struct __compressed_pair<id **, std::allocator<id *>> { id **__value_; } x2; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<id>> { unsigned long long __value_; } __size_; } updatedFences;
    unsigned int _activeSubstream;
    unsigned int _numSubstreams;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned int>> { unsigned long long __value_; } __pair3_; } __tree_; } _progressLabels;
    BOOL _encodingVirtualSubstream;
    int _currentVirtualSubstreamIndex;
    BOOL _encodedVirtualSubstreamDispatch;
}

@property (readonly, nonatomic) id<MTLComputePipelineState> computePipelineState;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)signalProgress:(unsigned int)a0;
- (void)_validateThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (void)beginVirtualSubstream;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)enableNullBufferBinds:(BOOL)a0;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)endEncoding_private;
- (void)endVirtualSubstream;
- (void)enumerateBuffersUsingBlock:(id /* block */)a0;
- (void)enumerateSamplersUsingBlock:(id /* block */)a0;
- (void)enumerateTexturesUsingBlock:(id /* block */)a0;
- (void)enumerateThreadgroupMemoryLengthsUsingBlock:(id /* block */)a0;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithComputeCommandEncoder:(id)a0 commandBuffer:(id)a1 descriptor:(id)a2;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (unsigned long long)nextVirtualSubstream;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setBufferOffset:(unsigned long long)a0 attributeStride:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 attributeStrides:(const unsigned long long *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setComputePipelineState:(id)a0;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)setSubstream:(unsigned int)a0;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)updateFence:(id)a0;
- (void)useHeap:(id)a0;
- (void)useResidencySet:(id)a0;
- (void)useResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)validateFunctionTableUseResource:(id)a0 selectorName:(id)a1;
- (void)validateStageInRegion:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)waitForFence:(id)a0;
- (void)waitForProgress:(unsigned int)a0;
- (void)waitForVirtualSubstream:(unsigned long long)a0;

@end
