@interface IKCropRectSelection : IKRectSelection

- (BOOL)handleDoubleClick:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)defaultKnob;
- (void)doDrawInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned int)knobLayerFlags;
- (void)setup:(id)a0;

@end
