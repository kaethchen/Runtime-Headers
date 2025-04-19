@interface DGMutableBrushStroke : DGBrushStroke

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setOpacity:(float)a0;
- (void)appendPoint:(struct { float x0; float x1; float x2; })a0;
- (void)offsetPoints:(struct CGPoint { double x0; double x1; })a0;

@end
