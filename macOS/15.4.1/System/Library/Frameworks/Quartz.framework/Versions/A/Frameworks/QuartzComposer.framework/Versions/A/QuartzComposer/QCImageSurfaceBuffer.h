@interface QCImageSurfaceBuffer : QCImagePixelBuffer {
    struct __IOSurface { } *_surface;
}

- (void)dealloc;
- (void)finalize;
- (unsigned long long)identifier;
- (struct __IOSurface { } *)surface;
- (const void *)baseAddress;
- (void)endUpdatePixels;
- (void)_finalize_QCImageSurfaceBuffer;
- (void *)baseAddressForSkippedRows:(unsigned long long)a0 skippedPixels:(unsigned long long)a1;
- (BOOL)beginUpdatePixels:(BOOL)a0 colorSpace:(struct CGColorSpace { } *)a1;
- (id)initWithBaseAddress:(const void *)a0 format:(id)a1 pixelsWide:(unsigned long long)a2 pixelsHigh:(unsigned long long)a3 options:(id)a4;
- (id)initWithFormat:(id)a0 pixelsWide:(unsigned long long)a1 pixelsHigh:(unsigned long long)a2 options:(id)a3;

@end
