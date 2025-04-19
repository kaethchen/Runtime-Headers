@interface IKImageView2ScrollView : NSScrollView

@property BOOL isElastic;

- (void)_setMagnification:(double)a0 centeredAroundPoint:(struct CGPoint { double x0; double x1; })a1 animate:(BOOL)a2;

@end
