@class HKQuantityType, HDProfile, _HKFilter;

@interface HDWorkoutTrainingLoadDataSource : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) _HKFilter *filter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 quantityType:(id)a1 filter:(id)a2;
- (BOOL)samplesForCalculatorWithHandler:(id /* block */)a0;

@end
