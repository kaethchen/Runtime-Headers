@class IPARegion, NSString, NSMutableDictionary, NSObject, PADevice;
@protocol OS_dispatch_queue, NUPurgeableSurfaceImage;

@interface PANUTiledImageBacking : NSObject <PATiledImageBacking> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_textureCache;
    PADevice *_device;
    IPARegion *_validRegion;
    struct CGSize { double width; double height; } _borderSize;
    struct CGSize { double width; double height; } _tileSize;
    int _format;
}

@property (readonly) id<NUPurgeableSurfaceImage> image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)device;
- (struct CGSize { double x0; double x1; })size;
- (int)format;
- (void)invalidateRegion:(id)a0;
- (struct CGSize { double x0; double x1; })tileSize;
- (id)tileAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })borderSize;
- (unsigned long long)numberOfTiles;
- (void)validateRegion:(id)a0;
- (void)beginAccessRegion:(id)a0;
- (void)endAccessRegion:(id)a0;
- (id)validRegion;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (int)_convertFormat:(id)a0;
- (void)_beginAccessRegion:(id)a0;
- (void)_cacheTexture:(id)a0 forIndex:(long long)a1;
- (void)_endAccessRegion:(id)a0;
- (void)contiguousTileForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)enumerateMutableTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)enumerateTilesIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })flippedPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)indexOfTileAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSurfaceImage:(id)a0 device:(id)a1;
- (id)mutableTileAtIndex:(unsigned long long)a0;
- (id)textureTile:(id)a0 tileInfo:(id)a1 context:(id)a2;

@end
