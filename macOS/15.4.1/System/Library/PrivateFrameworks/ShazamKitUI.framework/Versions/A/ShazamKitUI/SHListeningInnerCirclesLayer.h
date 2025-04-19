@class NSArray, CAMediaTimingFunction;

@interface SHListeningInnerCirclesLayer : SHPaletteLayer

@property (retain) NSArray *innerCircleLayers;
@property (readonly) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly) CAMediaTimingFunction *linearTimingFunction;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;
- (void)addCoreAnimationToInnerCircleLayer:(id)a0 withStartOffset:(double)a1;
- (void)addScaleNullAnimationToInnerCircleLayer:(id)a0;
- (id)buildInnerCircleLayers;
- (id)innerCircleCoreAnimation;
- (id)innerCircleScaleNullAnimation;
- (void)startListeningAnimation;

@end
