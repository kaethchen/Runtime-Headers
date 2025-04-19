@interface IKSliderCell : NSSliderCell

- (void)_drawTickMarks;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (double)_positionForValue:(double)a0;

@end
