@interface MTLByteIterator : NSObject {
    void *buffer;
    unsigned long long currentOffset;
    unsigned long long length;
}

@property (readonly) unsigned long long bytesLeft;

+ (id)iteratorForBuffer:(void *)a0 withLength:(unsigned long long)a1;

- (void)readBytes:(unsigned long long)a0 into:(void *)a1;
- (void)advance:(unsigned long long)a0;
- (id)initWithBuffer:(void *)a0 withLength:(unsigned long long)a1;
- (void)truncateTo:(unsigned long long)a0;

@end
