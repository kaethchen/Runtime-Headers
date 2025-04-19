@interface KHFrameLayerRenderer : KHLayerRenderer {
    BOOL _layerShouldPositionAndSizeFrame;
    struct { struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } origin; struct { double width; BOOL isRelativeWidth; double height; BOOL isRelativeHeight; } size; } _layerFrameRect;
    BOOL _containLayerFrameWithinParentBounds;
    int _avoidOverlapMirroring;
}

+ (id)supportedAttributes;
+ (BOOL)_frameCenterOverlapped:(id)a0;

- (BOOL)_avoidOverlapByMirroringForFrame:(id)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (id)layerFrameForParentFrame:(id)a0;
- (void)loadAttributes;

@end
