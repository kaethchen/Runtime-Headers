@class NSArray;

@interface EQKitCompoundBox : EQKitBox {
    BOOL _dimensionsValid;
    BOOL _erasableBoundsValid;
    double _height;
    double _depth;
    double _width;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _erasableBounds;
}

@property (readonly, nonatomic) NSArray *childBoxes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)depth;
- (double)height;
- (double)width;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithChildBoxes:(id)a0;
- (void)p_cacheDimensionsForHeight:(double *)a0 depth:(double *)a1 width:(double *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cacheErasableBounds;
- (BOOL)canContainBoxes;
- (id)containedBoxes;
- (void)p_ensureDimensionsAreValid;

@end
