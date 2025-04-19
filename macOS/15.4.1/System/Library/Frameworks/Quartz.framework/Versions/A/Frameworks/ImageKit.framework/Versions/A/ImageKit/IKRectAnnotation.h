@interface IKRectAnnotation : IKAnnotation

- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)changeBorderColor:(id)a0;
- (unsigned int)defaultKnob;
- (unsigned int)knobLayerFlags;
- (void)setNewBorderWidth:(double)a0;
- (void)setup:(id)a0;
- (void)toggleDash;

@end
