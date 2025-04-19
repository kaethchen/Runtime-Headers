@interface GCDAsyncSocketPreBuffer : NSObject {
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)reset;
- (unsigned long long)availableSpace;
- (char *)writeBuffer;
- (unsigned long long)availableBytes;
- (char *)readBuffer;
- (void)didRead:(unsigned long long)a0;
- (void)didWrite:(unsigned long long)a0;
- (void)ensureCapacityForWrite:(unsigned long long)a0;
- (void)getReadBuffer:(char **)a0 availableBytes:(unsigned long long *)a1;
- (void)getWriteBuffer:(char **)a0 availableSpace:(unsigned long long *)a1;

@end
