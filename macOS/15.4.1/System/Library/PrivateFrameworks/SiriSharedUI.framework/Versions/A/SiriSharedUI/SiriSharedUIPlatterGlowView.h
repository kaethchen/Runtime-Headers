@class CAGradientLayer, NSString, NSArray, SUICIntelligentLightLayer, CALayer;

@interface SiriSharedUIPlatterGlowView : SiriSharedUIStandardView <CAAnimationDelegate> {
    NSArray *_glowLayers;
    CALayer *_colorLayer;
    CALayer *_edrLayer;
    CAGradientLayer *_fadeLayer;
    SUICIntelligentLightLayer *_noiseLayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_createFadeLayerAnimation;
- (id)_createILLayerWithPalette:(unsigned long long)a0;
- (void)_createSiriGlowToPlatter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateScreenSize;
- (void)cleanupViewHierarchy;

@end
