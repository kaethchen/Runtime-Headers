@class KHTreatmentLayer;

@interface KHLayerRenderer : NSObject {
    KHTreatmentLayer *_treatmentLayer;
    double _alpha;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _upperLeftInset;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _upperRightInset;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _lowerLeftInset;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _lowerRightInset;
    double _upperLeftRadius;
    double _upperRightRadius;
    double _lowerLeftRadius;
    double _lowerRightRadius;
    double _upperLeftChisel;
    double _upperRightChisel;
    double _lowerLeftChisel;
    double _lowerRightChisel;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _upperLeftInsetFromParent;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _upperRightInsetFromParent;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _lowerLeftInsetFromParent;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _lowerRightInsetFromParent;
    struct { double top; BOOL isTopRelative; double left; BOOL isLeftRelative; double bottom; BOOL isBottomRelative; double right; BOOL isRightRelative; } _safeRectMargin;
    BOOL _allowRendererCaching;
}

+ (id)supportedAttributes;
+ (void)addStandardAttributesToDictionary:(id)a0;

- (void)dealloc;
- (struct CGPath { } *)createInsetPathForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (BOOL)allowRendererCaching;
- (struct CGPath { } *)createClippingPathForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (BOOL)hasChisel;
- (BOOL)hasInsets;
- (id)initWithTreatmentLayer:(id)a0;
- (void)loadAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFrame:(id)a0 atScale:(double)a1;
- (struct { double x0; BOOL x1; double x2; BOOL x3; double x4; BOOL x5; double x6; BOOL x7; })safeRectMarginForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (void)setTreatmentLayer:(id)a0;
- (id)treatmentLayer;

@end
