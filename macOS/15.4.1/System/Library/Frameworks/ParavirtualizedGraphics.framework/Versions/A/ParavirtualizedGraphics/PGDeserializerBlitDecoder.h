@class NSString, _PGDeserializer;
@protocol MTLBlitCommandEncoderSPI;

@interface PGDeserializerBlitDecoder : NSObject <PGDeserializerDecoder> {
    _PGDeserializer *_deserializer;
    id<MTLBlitCommandEncoderSPI> _blitEncoder;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)decodeBlitUpdateFenceWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeBlitWaitForFenceWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeCopyFromBufferToBufferWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeCopyFromBufferToTextureWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeCopyFromTextureToBufferWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeCopyFromTextureToTextureWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeCopyFromTextureToTextureWithNumSliceLevelWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeCopyFromTextureToTextureWithOptionsWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeFillBufferWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeFillBufferWithPatternWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeFillTextureWithBytesWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeFillTextureWithColorWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeGenerateMipmapsWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeInvalidateCompressedTextureImageWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeInvalidateCompressedTextureWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeOptimizeForCPUAccessWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeOptimizeForGPUAccessWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeOptimizeImageForCPUAccessWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeOptimizeImageForGPUAccessWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSynchronizeResourceWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSynchronizeTextureImageWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a1;
- (id)initWithDeserializer:(id)a0 commandBuffer:(id)a1;

@end
