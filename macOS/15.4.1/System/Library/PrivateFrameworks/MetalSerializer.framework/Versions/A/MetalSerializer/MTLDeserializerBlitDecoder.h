@class NSString, _MTLDeserializer;
@protocol MTLBlitCommandEncoderSPI;

@interface MTLDeserializerBlitDecoder : NSObject <MTLDeserializerDecoder> {
    _MTLDeserializer *deserializer;
    id<MTLBlitCommandEncoderSPI> blitEncoder;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(id)a1;
- (id)getBufferForReferenceNonNull:(unsigned int)a0;
- (id)getTextureForReferenceNonNull:(unsigned int)a0;
- (id)initWithDeserializer:(id)a0 commandBuffer:(id)a1;
- (void)decodeBlitUpdateFence:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeBlitWaitForFence:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeCopyFromBufferToBuffer:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeCopyFromBufferToTexture:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeCopyFromTextureToBuffer:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeCopyFromTextureToTexture:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeCopyFromTextureToTextureWithNumSliceLevel:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeCopyFromTextureToTextureWithOptions:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeFillBuffer:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeGenerateMipmaps:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeOptimize:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeOptimizeImage:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSynchronizeResource:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSynchronizeTextureImage:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)readCommand:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1 expectedSize:(unsigned long long)a2 into:(void *)a3;

@end
