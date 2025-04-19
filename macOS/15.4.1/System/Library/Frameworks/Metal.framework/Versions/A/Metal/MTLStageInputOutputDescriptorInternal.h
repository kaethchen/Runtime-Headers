@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    unsigned long long _indexBufferIndex;
    unsigned long long _indexType;
}

+ (id)vertexDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)layouts;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)indexType;
- (void)reset;
- (id)attributes;
- (void)setIndexType:(unsigned long long)a0;
- (unsigned long long)indexBufferIndex;
- (id)newSerializedDescriptor;
- (void)setIndexBufferIndex:(unsigned long long)a0;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;

@end
