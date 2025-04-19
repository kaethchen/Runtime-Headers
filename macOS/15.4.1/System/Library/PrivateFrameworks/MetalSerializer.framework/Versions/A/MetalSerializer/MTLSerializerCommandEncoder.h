@class MTLSerializer, NSString;
@protocol MTLDevice, MTLSerializerCommandStream;

@interface MTLSerializerCommandEncoder : _MTLCommandEncoder <MTLCommandEncoder> {
    id<MTLSerializerCommandStream> stream;
}

@property (readonly) MTLSerializer *serializer;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)endEncoding;
- (void)useHeap:(id)a0;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)beginSegment:(BOOL)a0;
- (id)initWithCommandBuffer:(id)a0;
- (void *)getCommandBytes:(unsigned long long)a0 forCommand:(unsigned int)a1;
- (void *)getCommandBytesRetry:(unsigned long long)a0 forCommand:(unsigned int)a1;
- (id)initWithCommandBuffer:(id)a0 serializer:(id)a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 withCommand:(unsigned int)a3 array:(id *)a4 rangeMax:(unsigned int)a5;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2 withCommand:(unsigned int)a3 array:(id *)a4 rangeMax:(unsigned int)a5;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 withCommand:(unsigned int)a4 array:(id *)a5 rangeMax:(unsigned int)a6;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withCommand:(unsigned int)a2 array:(id *)a3 rangeMax:(unsigned int)a4;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withCommand:(unsigned int)a2 array:(id *)a3 rangeMax:(unsigned int)a4;
- (void)writeSegmentHeader:(unsigned char)a0 continuation:(BOOL)a1;

@end
