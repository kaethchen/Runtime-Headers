@class VFXMTLBuffer;
@protocol MTLBuffer;

@interface VFXMTLMeshElement : NSObject <NSCopying> {
    unsigned long long _primitiveType;
    long long _indexCount;
    unsigned long long _instanceCount;
    long long _sharedIndexBufferOffset;
    VFXMTLBuffer *_indexBuffer;
    id<MTLBuffer> _drawIndexedPrimitivesIndirectBuffer;
    unsigned long long _indexType;
    long long _effectiveIndexOffset;
    long long _effectiveIndexCount;
    long long _drawIndexedPrimitivesIndirectBufferOffset;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
