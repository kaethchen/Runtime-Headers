@class NSString, NSArray;

@interface PA2DBufferTiledBacking : NSObject <PA2DBufferBacking> {
    unsigned long long _width;
    unsigned long long _height;
    int _format;
    struct CGColorSpace { } *_colorSpace;
    unsigned long long _tileWidth;
    unsigned long long _tileHeight;
    NSArray *_tiles;
}

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)height;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })size;
- (unsigned long long)width;
- (int)format;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })extent;
- (unsigned long long)tileCount;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 tileSize:(unsigned long long)a2 :(unsigned long long)a3 format:(int)a4;
- (id)_newEmptyTiles:(unsigned long long)a0 fill:(id)a1;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)forEachMutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)foreachTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)getPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 destPtrRowBytes:(long long)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 tileSize:(unsigned long long)a2 :(unsigned long long)a3 format:(int)a4 fill:(void *)a5 colorSpace:(struct CGColorSpace { } *)a6;
- (id)newEmptyTileWithLength:(unsigned long long)a0 format:(int)a1 fill:(id)a2;
- (void)processConstPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (void)processPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (void)setPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 srcPtr:(const void *)a1 srcPtrRowBytes:(long long)a2;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })tileBoundsAtIndex:(unsigned long long)a0;
- (unsigned long long)tilesHigh;
- (unsigned long long)tilesWide;

@end
