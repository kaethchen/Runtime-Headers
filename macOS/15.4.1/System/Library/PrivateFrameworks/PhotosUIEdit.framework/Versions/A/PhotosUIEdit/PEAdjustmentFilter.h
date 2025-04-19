@class NSString;

@interface PEAdjustmentFilter : NSObject <PEAdjustment>

@property (retain, nonatomic) NSString *filterIdentifier;
@property (nonatomic) double intensity;
@property (readonly, nonatomic) long long category;

- (void).cxx_destruct;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithFilterIdentifier:(id)a0 intensity:(double)a1;

@end
