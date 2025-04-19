@interface IASZLIBInputStream : IASInputStream

@property (nonatomic) struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *stream;
@property (nonatomic) char *buffer;
@property (nonatomic) unsigned long long bufferCapacity;
@property (nonatomic) BOOL endOfFile;
@property (nonatomic) BOOL closed;

- (void)dealloc;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)close;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (unsigned long long)streamStatus;
- (id)currentGzipErrorWithReturnValue:(int)a0;
- (BOOL)forwardSeekingStreamRequiresReads;
- (long long)seekingCapability;

@end
