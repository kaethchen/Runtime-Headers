@interface IASLZMAInputStream : IASInputStream

@property (nonatomic) struct { char *x0; unsigned long long x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned long long x5; struct *x6; struct lzma_internal_s *x7; void *x8; void *x9; void *x10; void *x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; int x16; int x17; } *stream;
@property (nonatomic) char *buffer;
@property (nonatomic) unsigned long long bufferCapacity;
@property (nonatomic) BOOL endOfFile;
@property (nonatomic) BOOL closed;

+ (void)initialize;

- (void)dealloc;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)close;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (unsigned long long)streamStatus;
- (id)currentLZMAErrorWithReturnValue:(int)a0;
- (BOOL)forwardSeekingStreamRequiresReads;
- (long long)seekingCapability;

@end
