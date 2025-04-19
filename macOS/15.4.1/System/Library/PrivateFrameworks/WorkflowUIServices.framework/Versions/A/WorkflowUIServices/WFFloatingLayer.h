@class CAGradientLayer, WFGradient;

@interface WFFloatingLayer : CALayer

@property (nonatomic) BOOL colorizesShadow;
@property (nonatomic) BOOL usePillCornerRadius;
@property (nonatomic) double scalingFactor;
@property (nonatomic) double highlightedCornerRadius;
@property (nonatomic) BOOL appliesCornerRadiusDuringTouchDownOnly;
@property (weak, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)applyConfiguration:(id)a0;
- (id)baseColor;
- (void)updateBackgroundColor;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (void)updateShadowColor;

@end
