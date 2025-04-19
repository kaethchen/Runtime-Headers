@class PAPixelFormat;

@interface PABuffer : NSObject

@property (readonly, nonatomic) struct PFIntSize_st { unsigned long long width; unsigned long long height; } size;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) PAPixelFormat *pixelFormat;
@property (readonly, nonatomic) long long bytesPerRow;
@property (readonly, nonatomic) unsigned long long bytesPerPixel;
@property (readonly, nonatomic) const void *bytes;
@property (readonly, nonatomic) unsigned long long length;

- (void).cxx_destruct;
- (const void *)bytesAtPoint:(struct PFIntPoint_st { long long x0; long long x1; })a0;
- (void)debugDump:(id)a0;
- (long long)_bytesOffsetAtPoint:(struct PFIntPoint_st { long long x0; long long x1; })a0;
- (struct CGImage { } *)_newCGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (id)initWithNUBuffer:(id)a0;
- (id)initWithSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 format:(int)a1 bytes:(const void *)a2 bytesPerRow:(long long)a3;
- (id)initWithSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 pixelFormat:(id)a1 bytes:(const void *)a2 bytesPerRow:(long long)a3;

@end
