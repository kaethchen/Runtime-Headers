@interface PEAdjustmentAutoEnhance : NSObject <PEAdjustment>

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long category;

- (id)initWithEnabled:(BOOL)a0;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;

@end
