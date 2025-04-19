@class KHAsset;

@interface KHArtLayerRenderer : KHLayerRenderer {
    long long _assetId;
    KHAsset *_asset;
    BOOL _stretch;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _location;
    struct { double width; BOOL isRelativeWidth; double height; BOOL isRelativeHeight; } _size;
    BOOL _relative;
    BOOL _mirrorX;
    BOOL _mirrorY;
}

+ (id)supportedAttributes;

- (void)dealloc;
- (id)asset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawRectForImage:(struct CGImage { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atScale:(double)a2;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;

@end
