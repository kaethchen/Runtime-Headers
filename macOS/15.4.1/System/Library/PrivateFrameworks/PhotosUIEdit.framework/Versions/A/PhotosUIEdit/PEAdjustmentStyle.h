@class NSString;

@interface PEAdjustmentStyle : NSObject <PEAdjustment>

@property (retain, nonatomic) NSString *styleCast;
@property (nonatomic) double intensity;
@property (readonly, nonatomic) long long category;

- (void).cxx_destruct;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithStyleCast:(id)a0 intensity:(double)a1;

@end
