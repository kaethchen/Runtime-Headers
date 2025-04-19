@class CALayer, CAShapeLayer;

@interface SHListeningAutoShadowLayer : SHPaletteLayer

@property (retain) CALayer *autoShadowBackgroundLayer;
@property (retain) CAShapeLayer *autoShadowOuterLayer;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;

@end
