@interface IKCircleAnnotation : IKAnnotation {
    BOOL _shouldUseOriginalLayerToDraw;
}

- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setSelected:(BOOL)a0;
- (void)changeBackgroundColor:(id)a0;
- (void)changeBorderColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circleRect;
- (unsigned int)defaultKnob;
- (void)doDrawInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawEllipse:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned int)knobLayerFlags;
- (void)setNewBorderWidth:(double)a0;
- (void)setup:(id)a0;
- (BOOL)shouldUseOriginalLayerToDraw;

@end
