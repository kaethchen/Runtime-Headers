@interface PEAdjustmentPlaybackRate : NSObject <PEAdjustment>

@property (nonatomic) float playbackRate;
@property (readonly, nonatomic) long long category;

- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithPlaybackRate:(float)a0;

@end
