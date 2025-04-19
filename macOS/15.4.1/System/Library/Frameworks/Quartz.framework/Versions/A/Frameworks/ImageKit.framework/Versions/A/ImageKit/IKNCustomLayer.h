@interface IKNCustomLayer : CALayer

@property BOOL ignoresMouseDown;
@property BOOL centersX;
@property BOOL centersY;

- (id)init;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x0; double x1; })a0;

@end
