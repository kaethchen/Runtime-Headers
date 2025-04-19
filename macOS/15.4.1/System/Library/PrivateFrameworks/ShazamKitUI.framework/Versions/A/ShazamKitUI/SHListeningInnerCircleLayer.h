@class CALayer, CAShapeLayer;

@interface SHListeningInnerCircleLayer : SHPaletteLayer

@property (retain) CAShapeLayer *circle;
@property (retain) CALayer *circleContainerLayer;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;
- (struct CGPath { } *)circlePathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
