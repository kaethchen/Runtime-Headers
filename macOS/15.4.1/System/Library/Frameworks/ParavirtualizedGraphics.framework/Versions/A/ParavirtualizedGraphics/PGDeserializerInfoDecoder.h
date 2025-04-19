@class NSString, _PGDeserializer;

@interface PGDeserializerInfoDecoder : NSObject <PGDeserializerDecoder> {
    _PGDeserializer *_deserializer;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)checkBuffer:(id)a0 bufferOffset:(unsigned long long)a1 forSize:(unsigned long long)a2;
- (void)decodeBufferHostResourceInfoWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeComputePipelineImageBlockMemoryLengthWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeComputePipelineStateInfoWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeCopyRasterizationRateParameterBufferWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeGetRasterizationRateMapInfoWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeHeapHostResourceInfoWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeHeapTextureDescriptorSizeAndAlignWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeMapPhysicalToScreenCoordinatesMultipleWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeMapPhysicalToScreenCoordinatesWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeMapScreenToPhysicalCoordinatesWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeObjectUniqueIdentifier:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeRenderPipelineImageBlockMemoryLengthWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeRenderPipelineStateInfoWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSamplerStateHostResourceInfoWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeTextureHostResourceInfoWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a1;
- (id)initWithDeserializer:(id)a0;

@end
