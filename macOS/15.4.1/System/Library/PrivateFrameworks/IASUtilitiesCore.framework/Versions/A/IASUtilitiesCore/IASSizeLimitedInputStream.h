@interface IASSizeLimitedInputStream : IASInputStream

@property (nonatomic) unsigned long long endOfFileOffset;

- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(id *)a1;

@end
