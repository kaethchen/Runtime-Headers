@interface PTPWrappedBytes : NSObject {
    int _fd;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long headerOffset;
@property (nonatomic) unsigned long long excessDataLength;
@property (nonatomic) BOOL allocatedBytes;
@property (nonatomic) BOOL useByteBuffer;
@property (nonatomic) char *bytes;

+ (id)wrappedBytesWithBytes:(void *)a0 capacity:(unsigned long long)a1;
+ (id)wrappedBytesWithCapacity:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (id)data;
- (id)initWithCapacity:(unsigned long long)a0;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (unsigned long long)appendData:(id)a0;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1;
- (id)mutableData;
- (unsigned long long)updateCapacity:(unsigned long long)a0;
- (const void *)headerOffsetBytes;
- (id)initWithBytes:(void *)a0 capacity:(unsigned long long)a1;
- (id)initWithFileDescriptor:(int)a0 capacity:(unsigned long long)a1;
- (double)percentFull;
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)a0;
- (BOOL)wasInitWithFD;

@end
