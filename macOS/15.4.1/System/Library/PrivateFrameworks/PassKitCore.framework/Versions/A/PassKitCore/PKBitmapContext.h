@class NSData;

@interface PKBitmapContext : NSObject {
    unsigned char _vImageAccessCounter;
    struct vImage_CGImageFormat { unsigned int bitsPerComponent; unsigned int bitsPerPixel; struct CGColorSpace *colorSpace; unsigned int bitmapInfo; unsigned int version; double *decode; int renderingIntent; } _format;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _buffer;
    NSData *_wrappedBuffer;
    struct CGContext { } *_context;
}

+ (id)create16FloatExtendedWithSize:(struct { unsigned long long x0; unsigned long long x1; })a0 configuration:(struct { char x0; BOOL x1; BOOL x2; })a1;
+ (id)create16FloatWithSize:(struct { unsigned long long x0; unsigned long long x1; })a0 configuration:(struct { char x0; BOOL x1; BOOL x2; })a1;
+ (id)create32FloatWithSize:(struct { unsigned long long x0; unsigned long long x1; })a0 configuration:(struct { char x0; BOOL x1; BOOL x2; })a1;
+ (id)create8UintWithSize:(struct { unsigned long long x0; unsigned long long x1; })a0 configuration:(struct { char x0; BOOL x1; BOOL x2; })a1;
+ (id)createWithCGBitmapContext:(struct CGContext { } *)a0;
+ (id)createWithSize:(struct { unsigned long long x0; unsigned long long x1; })a0 origin:(char)a1 format:(const struct vImage_CGImageFormat { unsigned int x0; unsigned int x1; struct CGColorSpace *x2; unsigned int x3; unsigned int x4; double *x5; int x6; } *)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accessContext:(id /* block */)a0;
- (void)accessData:(id /* block */)a0;

@end
