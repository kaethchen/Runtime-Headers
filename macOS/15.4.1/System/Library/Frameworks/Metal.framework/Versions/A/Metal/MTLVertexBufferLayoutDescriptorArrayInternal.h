@class MTLVertexBufferLayoutDescriptorInternal;

@interface MTLVertexBufferLayoutDescriptorArrayInternal : MTLVertexBufferLayoutDescriptorArray {
    MTLVertexBufferLayoutDescriptorInternal *_descriptors[31];
}

- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;

@end
