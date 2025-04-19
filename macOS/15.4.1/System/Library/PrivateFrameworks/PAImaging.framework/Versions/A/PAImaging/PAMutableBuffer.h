@interface PAMutableBuffer : PABuffer

@property (readonly, nonatomic) void *mutableBytes;

- (void *)mutableBytesAtPoint:(struct PFIntPoint_st { long long x0; long long x1; })a0;
- (void)copyBuffer:(id)a0 fromRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1 toPoint:(struct PFIntPoint_st { long long x0; long long x1; })a2;
- (id)initWithSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 format:(int)a1 mutableBytes:(void *)a2 bytesPerRow:(long long)a3;
- (id)initWithSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 pixelFormat:(id)a1 mutableBytes:(void *)a2 bytesPerRow:(long long)a3;

@end
