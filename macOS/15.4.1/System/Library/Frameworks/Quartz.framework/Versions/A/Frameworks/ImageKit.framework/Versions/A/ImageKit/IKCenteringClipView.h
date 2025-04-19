@interface IKCenteringClipView : NSClipView

@property BOOL disableCentering;

- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainBoundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameRotation:(double)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewBoundsChanged:(id)a0;
- (void)viewFrameChanged:(id)a0;
- (void)centerDocument;
- (BOOL)documentShouldCenter;

@end
