@class NUTileInfo, PANUTiledImageBacking, NSString;

@interface PANUImageTile : NSObject <PAImageTile>

@property (readonly) NUTileInfo *tileInfo;
@property (retain) PANUTiledImageBacking *backing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)readBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flippedCGRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)initWithBacking:(id)a0 tileInfo:(id)a1;
- (BOOL)readTextureRegion:(id)a0 withContext:(id)a1 block:(id /* block */)a2;

@end
