@class NSString;

@interface PEAdjustmentAudioMix : NSObject <PEAdjustment>

@property (retain, nonatomic) NSString *audioMix;
@property (readonly, nonatomic) long long category;

- (void).cxx_destruct;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithAudioMix:(id)a0;

@end
