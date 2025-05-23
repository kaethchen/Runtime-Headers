@class OADDrawable;

@interface CMDrawableStyle : EMCellStyle {
    OADDrawable *mDrawable;
}

- (void).cxx_destruct;
- (void)addPositionProperties:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addPositionUsingOffsets:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addRotationFromBounds:(id)a0;

@end
