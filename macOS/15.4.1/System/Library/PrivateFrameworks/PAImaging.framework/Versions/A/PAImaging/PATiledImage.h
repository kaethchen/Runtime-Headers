@class PADevice, PADisplay;
@protocol PATiledImageBacking;

@interface PATiledImage : NSObject <NSCopying, NSMutableCopying> {
    id<PATiledImageBacking> _backing;
    PADisplay *_display;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _extent;
    long long _orientation;
    long long _originalOrientation;
}

@property (readonly, nonatomic) PADevice *device;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) PADisplay *display;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extent;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } originalSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalExtent;
@property (readonly, nonatomic) long long originalOrientation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } borderSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)CGImage;
- (struct CGSize { double x0; double x1; })tileSize;
- (BOOL)writeToTIFF:(id)a0;
- (id)tileAtIndex:(unsigned long long)a0;
- (struct CGImage { } *)newCGImage;
- (unsigned long long)numberOfTiles;
- (void)beginAccessRegion:(id)a0;
- (void)endAccessRegion:(id)a0;
- (BOOL)isValidInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isValidInRegion:(id)a0;
- (id)validRegion;
- (id)autoAccessedTiledImageInRegion:(id)a0;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (id)initWithBacking:(id)a0 display:(id)a1 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithBacking:(id)a0 display:(id)a1 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 orientation:(long long)a3 originalOrientation:(long long)a4;
- (void)contiguousTileForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)enumerateTilesIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)forEachTileIndexInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dispatchQueue:(id)a1 apply:(id /* block */)a2;
- (id)imageAtLevel:(unsigned long long)a0;
- (unsigned long long)indexOfTileAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithBacking:(id)a0 display:(id)a1;
- (BOOL)isEqualToTiledImage:(id)a0;
- (unsigned long long)numberOfLevels;

@end
