@class CALayer, CAGradientLayer, CAShapeLayer;

@interface _WTFinaleTextEffect : _WTTextEffect

@property (retain) CALayer *textContentLayer;
@property (retain) CAShapeLayer *maskLayer;
@property (retain) CALayer *gradientHostLayer;
@property (retain) CAGradientLayer *gradientLayer;

- (void).cxx_destruct;
- (void)_sweep;
- (void)updateEffectWith:(id)a0;

@end
