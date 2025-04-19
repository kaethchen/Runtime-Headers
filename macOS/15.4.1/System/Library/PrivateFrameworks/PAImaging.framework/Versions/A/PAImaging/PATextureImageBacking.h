@class NSString, PAGLTextureRect, IPAMutableRegion;

@interface PATextureImageBacking : NSObject <PATiledImageBacking> {
    PAGLTextureRect *_texture;
    IPAMutableRegion *_validRegion;
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
- (id)initWithTexture:(id)a0;
- (id)tileAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })borderSize;
- (unsigned int)textureID;
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
- (id)initWithPATexture:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 device:(id)a2;
- (id)initWithTexture:(id)a0 validRegion:(id)a1;
- (id)mutableTileAtIndex:(unsigned long long)a0;
- (id)openGLDevice;
- (BOOL)withTexture:(id /* block */)a0 context:(id)a1;

@end
