@class NSString;

@interface PA2DBufferPurgeableTiledBacking : PA2DBufferTiledBacking <PA2DPurgeableBufferBacking>

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 emptyProcessor:(id /* block */)a1;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 refillProcessor:(id /* block */)a1;
- (void)beginAccessForTileAtIndex:(unsigned long long)a0 emptyProcessor:(id /* block */)a1;
- (void)beginAccessForTileAtIndex:(unsigned long long)a0 refillProcessor:(id /* block */)a1;
- (void)endAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)endAccessForTileAtIndex:(unsigned long long)a0;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 tileSize:(unsigned long long)a2 :(unsigned long long)a3 format:(int)a4 fill:(void *)a5 colorSpace:(struct CGColorSpace { } *)a6;
- (id)newEmptyTileWithLength:(unsigned long long)a0 format:(int)a1 fill:(id)a2;
- (void)setPurgeLevel:(int)a0 forROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (void)setPurgeLevel:(int)a0 forTileAtIndex:(unsigned long long)a1;

@end
