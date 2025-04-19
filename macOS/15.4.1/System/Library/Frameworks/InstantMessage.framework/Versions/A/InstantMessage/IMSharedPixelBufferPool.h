@class NSString;

@interface IMSharedPixelBufferPool : NSObject {
    NSString *_poolName;
    int _shmFd;
    void *_shmAddr;
    unsigned long long _shmSize;
    int *_shmSem;
    int _bufferCount;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _rowBytes;
    unsigned int _pixelFormat;
    unsigned int *_refCounts;
    struct CGColorSpace { } *_defaultColorSpace;
}

+ (unsigned long long)bytesPerPixelForPixelFormat:(unsigned int)a0;
+ (struct __CVBuffer { } *)createBufferWithId:(int)a0 fromPoolWithName:(id)a1;
+ (int)idForBuffer:(struct __CVBuffer { } *)a0;
+ (id)poolWithDescription:(id)a0;
+ (id)poolWithName:(id)a0 bufferCount:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 pixelFormat:(unsigned int)a4;
+ (void)releaseBufferId:(int)a0 fromPoolWithName:(id)a1;

- (id)description;
- (id)name;
- (unsigned long long)height;
- (unsigned int)pixelFormat;
- (unsigned long long)width;
- (void)retainBufferId:(int)a0;
- (id)poolDescription;
- (unsigned long long)bufferCount;
- (struct __CVBuffer { } *)createBufferWithId:(int)a0;
- (struct __CVBuffer { } *)createUnusedBuffer;

@end
