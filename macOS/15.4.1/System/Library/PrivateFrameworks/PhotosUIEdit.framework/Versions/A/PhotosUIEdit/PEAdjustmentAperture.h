@interface PEAdjustmentAperture : NSObject <PEAdjustment>

@property (copy, nonatomic) id /* block */ modifier;
@property (readonly, nonatomic) long long category;

+ (id)_error:(long long)a0 asset:(id)a1 description:(id)a2;

- (void).cxx_destruct;
- (id)initWithModifier:(id /* block */)a0;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;

@end
