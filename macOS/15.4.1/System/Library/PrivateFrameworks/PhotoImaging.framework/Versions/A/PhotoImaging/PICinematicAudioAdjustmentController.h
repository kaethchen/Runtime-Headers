@class NSString;

@interface PICinematicAudioAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *dialogMixBiasKey;

@property (nonatomic) double dialogMixBias;
@property (retain, nonatomic) NSString *renderingStyle;

- (void)setRenderingStyleToDefaultForPortraitVideo;

@end
