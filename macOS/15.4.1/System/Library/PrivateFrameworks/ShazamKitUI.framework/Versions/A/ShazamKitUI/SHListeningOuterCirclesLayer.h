@class NSArray, CAMediaTimingFunction;

@interface SHListeningOuterCirclesLayer : SHPaletteLayer

@property (retain) NSArray *outerCircleLayers;
@property (readonly) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (readonly) CAMediaTimingFunction *linearTimingFunction;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;
- (void)addScaleAnimationToCircleLayer:(id)a0;
- (void)addCoreAnimationToOuterCircleLayer:(id)a0 withStartOffset:(double)a1;
- (id)buildOuterCircleLayers;
- (id)outerCircleCoreBorderWidthAnimation;
- (id)outerCircleCoreScaleAnimation;
- (id)outerCircleCoreSizeAnimation;
- (id)scaleNullAnimation;
- (void)startListeningAnimation;

@end
