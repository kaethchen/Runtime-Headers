@class IPAMutableRegion, NSString, PA2DMutableBuffer, NSObject;
@protocol OS_dispatch_queue;

@interface PABufferImageBacking : NSObject <PATiledImageBacking> {
    PA2DMutableBuffer *_buffer;
    IPAMutableRegion *_validRegion;
    NSObject<OS_dispatch_queue> *_queue;
}

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
- (id)initWithBuffer:(id)a0;
- (struct CGSize { double x0; double x1; })borderSize;
- (unsigned long long)numberOfTiles;
- (void)validateRegion:(id)a0;
- (void)beginAccessRegion:(id)a0;
- (void)endAccessRegion:(id)a0;
- (id)validRegion;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)contiguousTileForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)enumerateMutableTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)enumerateTilesIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (unsigned long long)indexOfTileAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)mutableTileAtIndex:(unsigned long long)a0;

@end
