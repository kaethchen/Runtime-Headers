@class KHAsset;

@interface KHTextureLayerRenderer : KHLayerRenderer {
    long long _assetId;
    KHAsset *_asset;
    struct CGSize { double width; double height; } _tileSize;
    struct CGPoint { double x; double y; } _phaseOffset;
    int _tileMethodLegacy;
    int _tilingMethod;
    BOOL _topRowOnly;
}

+ (id)supportedAttributes;

- (void)dealloc;
- (id)asset;
- (struct CGSize { double x0; double x1; })_calculateTileSizeInDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 isPDFDestination:(BOOL)a2;
- (void)_cgPatternFillInContext:(struct CGContext { } *)a0 scale:(double)a1 isPDFDestination:(BOOL)a2 drawPath:(struct CGPath { } *)a3;
- (struct CGPattern { } *)_createFillPatternWithSize:(struct CGSize { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 info:(id)a2;
- (void)_drawBackgroundTextureIntoContext:(struct CGContext { } *)a0 withImage:(struct CGImage { } *)a1 atSize:(struct CGSize { double x0; double x1; })a2 tileSize:(struct CGSize { double x0; double x1; })a3;
- (void)_hiResLayerFillInContext:(struct CGContext { } *)a0 scale:(double)a1 isPDFDestination:(BOOL)a2 drawPath:(struct CGPath { } *)a3;
- (void)_tileIntoContext:(struct CGContext { } *)a0 withImage:(struct CGImage { } *)a1 atSize:(struct CGSize { double x0; double x1; })a2 tileSize:(struct CGSize { double x0; double x1; })a3;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (void)loadAttributes;

@end
