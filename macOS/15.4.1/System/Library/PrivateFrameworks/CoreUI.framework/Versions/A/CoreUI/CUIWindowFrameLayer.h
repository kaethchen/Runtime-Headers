@class CALayer;

@interface CUIWindowFrameLayer : CALayer

@property CALayer *backgroundHighlightLayer;
@property CALayer *titlebarGradientLayer;
@property CALayer *titlebarBackgroundLayer;
@property CALayer *borderLayer;
@property CALayer *overlayLayer;
@property CALayer *titlebarSeparatorLayer;
@property CALayer *bottomGradientLayer;
@property CALayer *bottomDividerLayer;

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)setContentsScale:(double)a0;
- (id)addAndSetupSublayer:(id)a0;
- (id)layerNamed:(id)a0 makeIfNecessary:(BOOL)a1;
- (id)makeAndAddSublayer;

@end
