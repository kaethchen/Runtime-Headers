@class PFCopyOnWriteInterest;

@interface PA2DBufferContiguousBacking : NSObject {
    unsigned long long _width;
    unsigned long long _height;
    int _format;
    struct CGColorSpace { } *_colorSpace;
    PFCopyOnWriteInterest *_buffer;
    long long _rowBytes;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void *)bytes;
- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (int)format;
- (struct CGColorSpace { } *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (long long)rowBytes;
- (unsigned long long)tileCount;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)forEachMutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)getPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 destPtrRowBytes:(long long)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (id)newBufferData:(unsigned long long)a0;
- (void)processConstPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (void)processPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (void)setPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 srcPtr:(const void *)a1 srcPtrRowBytes:(long long)a2;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })tileBoundsAtIndex:(unsigned long long)a0;

@end
