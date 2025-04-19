@class DGImageBufferImp;

@interface DGImageBuffer : NSObject <NSCopying, NSMutableCopying> {
    DGImageBufferImp *_priv;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)height;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })size;
- (unsigned long long)width;
- (int)format;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })extent;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)getPixelsForArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 destPtrRowBytes:(long long)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)processConstPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (id)tilesIntersectingArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (unsigned long long)trueCost;

@end
