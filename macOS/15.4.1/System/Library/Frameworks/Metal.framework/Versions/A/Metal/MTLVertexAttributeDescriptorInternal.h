@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor {
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBufferIndex:(unsigned long long)a0;
- (unsigned long long)bufferIndex;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)format;
- (void)setFormat:(unsigned long long)a0;

@end
