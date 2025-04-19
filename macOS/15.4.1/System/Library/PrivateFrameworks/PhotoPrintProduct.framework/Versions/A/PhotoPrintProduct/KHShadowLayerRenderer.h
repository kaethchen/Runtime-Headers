@class KHColor;

@interface KHShadowLayerRenderer : KHLayerRenderer {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _drawRect;
    double _scale;
    KHColor *_color;
    struct CGColor { } *_colorRef;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _offset;
    double _blur;
    BOOL _isInnerShadow;
    struct { double width; BOOL isRelativeWidth; double height; BOOL isRelativeHeight; } _choke;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _upperLeftShadowOffset;
    double _upperLeftShadowRadius;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _upperRightShadowOffset;
    double _upperRightShadowRadius;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _lowerLeftShadowOffset;
    double _lowerLeftShadowRadius;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _lowerRightShadowOffset;
    double _lowerRightShadowRadius;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _leftBend;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _rightBend;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _topBend;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _bottomBend;
}

+ (id)supportedAttributes;

- (void)dealloc;
- (BOOL)hasInnerShadow;
- (struct CGPath { } *)createShadowPathForPath:(struct CGPath { } *)a0 onFrame:(id)a1 atScale:(double)a2;
- (void)drawInContext:(struct CGContext { } *)a0 path:(struct CGPath { } *)a1;
- (BOOL)dropShadowIsWarped;
- (void)enableInContext:(struct CGContext { } *)a0 environment:(id)a1 displacement:(double)a2;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (BOOL)hasDropShadow;
- (void)loadAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFrame:(id)a0 atScale:(double)a1;

@end
