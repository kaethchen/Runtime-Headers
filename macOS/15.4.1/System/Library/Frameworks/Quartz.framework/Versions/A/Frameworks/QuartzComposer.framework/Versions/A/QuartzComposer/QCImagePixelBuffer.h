@interface QCImagePixelBuffer : QCImageBuffer {
    unsigned long long _rowBytes;
    BOOL _purgeable;
    void *_unused2[4];
}

- (id)description;
- (unsigned long long)bytesPerRow;
- (void *)baseAddress;
- (BOOL)purgeable;
- (BOOL)setPurgeable:(BOOL)a0;
- (struct CGContext { } *)createCGContext;
- (void)endUpdatePixels;
- (void *)baseAddressForSkippedRows:(unsigned long long)a0 skippedPixels:(unsigned long long)a1;
- (BOOL)beginUpdatePixels:(BOOL)a0 colorSpace:(struct CGColorSpace { } *)a1;
- (void)clearBuffer;
- (void)clearToBlack;
- (struct CGImage { } *)createCGImageWithRenderingIntent:(int)a0 shouldInterpolate:(BOOL)a1;
- (id)initWithFormat:(id)a0 baseAddress:(const void *)a1 releaseCallback:(void /* function */ *)a2 releaseInfo:(void *)a3 bytesPerRow:(unsigned long long)a4 pixelsWide:(unsigned long long)a5 pixelsHigh:(unsigned long long)a6 flipped:(BOOL)a7 colorSpace:(struct CGColorSpace { } *)a8 options:(id)a9;
- (id)initWithFormat:(id)a0 pixelsWide:(unsigned long long)a1 pixelsHigh:(unsigned long long)a2 options:(id)a3;
- (id)initWithPixelBuffer:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 replacingFormat:(id)a2;
- (id)pixelBufferRepresentation;

@end
