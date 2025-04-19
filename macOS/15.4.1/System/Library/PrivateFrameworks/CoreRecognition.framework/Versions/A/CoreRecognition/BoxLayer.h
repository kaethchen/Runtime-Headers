@class NSString, CATextLayer, CAShapeLayer;

@interface BoxLayer : CALayer {
    struct CGColor { } *glowColor;
    double textScaling;
}

@property (retain, nonatomic) CAShapeLayer *topLayer;
@property (retain, nonatomic) CAShapeLayer *glowLayer1;
@property (retain, nonatomic) CAShapeLayer *glowLayer2;
@property (retain, nonatomic) CAShapeLayer *glowLayer3;
@property (retain, nonatomic) CATextLayer *topTextLayer;
@property (retain, nonatomic) CATextLayer *textLayer1;
@property (retain, nonatomic) CATextLayer *textLayer2;
@property (retain, nonatomic) CATextLayer *textLayer3;
@property (nonatomic) struct CGColor { } *glowColor;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double textOpacity;
@property (nonatomic) double textScaling;

- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (id)layer;
- (void)blinkWithColor:(struct CGColor { } *)a0;
- (id)blinkingAnimationWithColor:(struct CGColor { } *)a0;
- (void)composeLayer;
- (struct CGPath { } *)createRedeemBoxPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offset:(double)a1;
- (struct CGColor { } *)glowColor;
- (id)initialBoxAnimation:(float)a0;
- (id)positionAnimationFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)presentLayerOnScreenWithAngle:(float)a0;
- (void)setGlowColor:(struct CGColor { } *)a0;

@end
