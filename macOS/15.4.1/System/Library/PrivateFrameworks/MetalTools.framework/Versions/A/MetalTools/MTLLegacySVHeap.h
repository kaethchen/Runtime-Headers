@interface MTLLegacySVHeap : MTLToolsHeap {
    BOOL _enableResourceUsageValidation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _bufferIndices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _textureLock;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _textureIndices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accelerationStructureLock;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _accelerationStructureIndices;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithHeap:(id)a0 descriptor:(id)a1 device:(id)a2;
- (id)_newGPUDebugAccelerationStructure:(id)a0;
- (void)enumerateAccelerationStructureIndices:(id /* block */)a0;
- (void)enumerateBufferIndices:(id /* block */)a0;
- (void)enumerateTextureIndices:(id /* block */)a0;
- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (id)newAccelerationStructureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (void)notifyResourceReleasing:(id)a0;

@end
