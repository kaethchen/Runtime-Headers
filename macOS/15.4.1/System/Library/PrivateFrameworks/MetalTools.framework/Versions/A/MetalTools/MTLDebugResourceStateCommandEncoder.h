@class __end_, __end_cap_, __begin_;

@interface MTLDebugResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder {
    BOOL canDealloc;
    BOOL canEndEncoding;
    BOOL hasEndedEncoding;
    struct deque<id, std::allocator<id>> { struct __split_buffer<id *, std::allocator<id *>> { __begin_ ***__first_; __end_ ***x0; __end_cap_ ***x1; struct __compressed_pair<id **, std::allocator<id *>> { id **__value_; } x2; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<id>> { unsigned long long __value_; } __size_; } updatedFences;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateTextureMappings:(id)a0 mode:(unsigned long long)a1 regions:(const struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } *)a2 mipLevels:(const unsigned long long *)a3 slices:(const unsigned long long *)a4 numRegions:(unsigned long long)a5;
- (void)_setDefaults;
- (BOOL)checkEncoderState;
- (void)endEncoding;
- (id)initWithResourceStateCommandEncoder:(id)a0 commandBuffer:(id)a1 descriptor:(id)a2;
- (void)moveTextureMappingsFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 sourceOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 toTexture:(id)a5 destinationSlice:(unsigned long long)a6 destinationLevel:(unsigned long long)a7 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8;
- (void)updateFence:(id)a0;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 indirectBuffer:(id)a2 indirectBufferOffset:(unsigned long long)a3;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 mipLevel:(unsigned long long)a3 slice:(unsigned long long)a4;
- (void)validateSparseTextureMappingMode:(unsigned long long)a0;
- (void)validateTextureAccess:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 mipLevel:(unsigned long long)a2 slice:(unsigned long long)a3;
- (void)waitForFence:(id)a0;

@end
