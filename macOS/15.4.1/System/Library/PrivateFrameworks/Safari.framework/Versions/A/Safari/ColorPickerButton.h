@class NSColor, CALayer, CAShapeLayer;

@interface ColorPickerButton : RolloverTrackingButton {
    CALayer *_imageLayer;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_borderLayer;
}

@property (copy, nonatomic) NSColor *color;

- (void).cxx_destruct;
- (void)layout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;

@end
