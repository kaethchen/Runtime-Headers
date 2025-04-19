@class NSString, MTLSharedEventListener;
@protocol MTLDevice, PGDeserializerObjectDelegate;

@interface _PGDeserializer : NSObject <PGDeserializer> {
    id<PGDeserializerObjectDelegate> _objectDelegate;
    MTLSharedEventListener *_eventListener;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)deleteSamplerStateForReference:(unsigned int)a0;
- (id)getFunctionForReferenceNonNull:(unsigned int)a0;
- (id)textureDescriptorForDescriptor:(const struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 8; unsigned short x6 : 16; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned long long x14; } *)a0;
- (id)decodeSegmentWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a1 withDecoder:(id)a2 into:(id)a3;
- (void)decodeSegments:(void **)a0 lengths:(unsigned long long *)a1 count:(unsigned long long)a2 into:(id)a3;
- (void)deleteBufferForReference:(unsigned int)a0;
- (void)deleteComputePipelineStateForReference:(unsigned int)a0;
- (void)deleteDepthStencilStateForReference:(unsigned int)a0;
- (void)deleteFenceForReference:(unsigned int)a0;
- (void)deleteFunctionForReference:(unsigned int)a0;
- (void)deleteHeapForReference:(unsigned int)a0;
- (void)deleteRasterizationRateMapForReference:(unsigned int)a0;
- (void)deleteRenderPipelineStateForReference:(unsigned int)a0;
- (void)deleteTextureForReference:(unsigned int)a0;
- (id)getBufferForReference:(unsigned int)a0;
- (id)getBufferForReferenceNonNull:(unsigned int)a0;
- (id)getComputePipelineStateForReference:(unsigned int)a0;
- (id)getComputePipelineStateForReferenceNonNull:(unsigned int)a0;
- (id)getDepthStencilStateForReference:(unsigned int)a0;
- (id)getDepthStencilStateForReferenceNonNull:(unsigned int)a0;
- (id)getFenceForReference:(unsigned int)a0;
- (id)getFenceForReferenceNonNull:(unsigned int)a0;
- (id)getFunctionForReference:(unsigned int)a0;
- (id)getHeapForReference:(unsigned int)a0;
- (id)getHeapForReferenceNonNull:(unsigned int)a0;
- (id)getRasterizationRateMapForReference:(unsigned int)a0;
- (id)getRasterizationRateMapForReferenceNonNull:(unsigned int)a0;
- (id)getRenderPipelineStateForReference:(unsigned int)a0;
- (id)getRenderPipelineStateForReferenceNonNull:(unsigned int)a0;
- (id)getResourceForReference:(unsigned int)a0;
- (id)getSamplerStateForReference:(unsigned int)a0;
- (id)getSamplerStateForReferenceNonNull:(unsigned int)a0;
- (id)getTextureForReference:(unsigned int)a0;
- (id)getTextureForReferenceNonNull:(unsigned int)a0;
- (id)initWithDevice:(id)a0 objectDelegate:(id)a1;
- (struct shared_ptr<PGWritableVirtualMemoryCursor> { struct PGWritableVirtualMemoryCursor *x0; struct __shared_weak_count *x1; })newMemoryCursorForBuffer:(unsigned int)a0;
- (void)resetRasterizationRateMapWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1 rasterizationRateMap:(id)a2;

@end
