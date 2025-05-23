@interface CPTextBox : CPRegion {
    double rotationAngle;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)accept:(id)a0;
- (BOOL)isBoxRegion;
- (BOOL)isRotated;
- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;

@end
