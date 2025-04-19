@interface IASZLIBOutputStream : IASOutputStream

@property (nonatomic) struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *stream;
@property (nonatomic) BOOL endOfFile;
@property (nonatomic) BOOL closed;
@property (nonatomic) char *writeBuffer;
@property (nonatomic) unsigned int writeBufferCapacity;
@property (nonatomic) int compressionLevel;

- (id)init;
- (void)close;
- (BOOL)hasSpaceAvailable;
- (void)open;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)currentGzipErrorWithReturnValue:(int)a0;

@end
