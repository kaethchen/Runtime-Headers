@interface PEAdjustmentRotate : NSObject <PEAdjustment>

@property (nonatomic) BOOL clockwise;
@property (readonly, nonatomic) long long category;

- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithClockwise:(BOOL)a0;

@end
