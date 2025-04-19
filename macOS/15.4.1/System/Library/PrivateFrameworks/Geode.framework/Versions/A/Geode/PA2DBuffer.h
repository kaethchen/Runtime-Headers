@class PFCopyOnWriteInterest;

@interface PA2DBuffer : NSObject <NSCopying, NSMutableCopying> {
    PFCopyOnWriteInterest *_backing;
    int _format;
    unsigned long long _width;
    unsigned long long _height;
}

@property (nonatomic) struct CGColorSpace { } *colorSpace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)height;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })size;
- (unsigned long long)width;
- (int)format;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })extent;
- (unsigned long long)tileCount;
- (id)ciImage;
- (id)_ciImageWithProvider:(id)a0;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 emptyProcessor:(id /* block */)a1;
- (id)ciImageWithTransferredAccessCount;
- (id)copyWriteVisitBacking:(id /* block */)a0;
- (void)endAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)getPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 destPtrRowBytes:(long long)a2;
- (id)initWithBacking:(id)a0;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0 cropToSize:(struct CGSize { double x0; double x1; })a1 cropCenter:(struct CGPoint { double x0; double x1; })a2 endAccessOnDealloc:(BOOL)a3 useDataProviderForContiguous:(BOOL)a4;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0 endAccessOnDealloc:(BOOL)a1 useDataProviderForContiguous:(BOOL)a2;
- (void)processConstPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (void)setPurgeLevel:(int)a0 forROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })tileBoundsAtIndex:(unsigned long long)a0;
- (BOOL)writeTIFFToDisk:(id)a0;

@end
