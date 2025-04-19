@class NSColor, CAShapeLayer;

@interface AXVTriangleIndicatorView : AXVView

@property (retain, nonatomic, setter=_setTriangleLayer:) CAShapeLayer *_triangleLayer;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long direction;
@property (retain, nonatomic) NSColor *color;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupTriangleSublayer;
- (void)_updateTriangleLayer;
- (void)_updateTriangleLayerPath;

@end
