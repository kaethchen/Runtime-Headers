@class CALayer;

@interface SHListeningOuterCircleLayer : SHPaletteLayer

@property (retain) CALayer *circleContainerLayer;
@property (retain) CALayer *circleLayer;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;

@end
