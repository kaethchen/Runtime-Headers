@interface IASBZIP2InputStream : IASInputStream

@property (nonatomic) struct { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; unsigned int x7; void *x8; void /* function */ *x9; void /* function */ *x10; void *x11; } *stream;
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
- (id)currentBzip2ErrorWithReturnValue:(int)a0;
- (BOOL)forwardSeekingStreamRequiresReads;
- (long long)seekingCapability;

@end
