@class NSTimer, CAGradientLayer, NSArray;

@interface _NSWTUIDirectionalLightEffectView : _NSWTUIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSTimer *effectTimer;
@property (copy, nonatomic) NSArray *palette;

- (void).cxx_destruct;
- (void)layout;
- (void)applyMaskLayer:(id)a0;
- (void)_strobe;
- (id)_commonInit;
- (void)_commonLayout;
- (id)initWithPalette:(id)a0;
- (void)initiateLightingEffect;

@end
