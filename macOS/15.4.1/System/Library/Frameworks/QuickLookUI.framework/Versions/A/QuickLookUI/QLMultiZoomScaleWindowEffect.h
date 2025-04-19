@interface QLMultiZoomScaleWindowEffect : QLNonUniformScaleWindowEffect {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visualInitialFrame;
}

- (void)setValue:(float)a0;
- (id)prepare;
- (double)additionalDuration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleFrameFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
