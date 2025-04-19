@class EQKitBox;

@interface EQKitVShift : EQKitBox

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) double offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)depth;
- (double)height;
- (double)width;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithBox:(id)a0 offset:(double)a1;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)canContainBoxes;
- (id)containedBoxes;

@end
