@class NSString, _MTLDeserializer;
@protocol MTLCommandBuffer;

@interface MTLDeserializerEventDecoder : NSObject <MTLDeserializerDecoder> {
    _MTLDeserializer *deserializer;
    id<MTLCommandBuffer> commandBuffer;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fault;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(id)a1;
- (id)initWithDeserializer:(id)a0 commandBuffer:(id)a1;
- (void)decodeSignalEvent:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeWaitForEvent:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeWaitForEventTimeout:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)readCommand:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1 expectedSize:(unsigned long long)a2 into:(void *)a3;

@end
