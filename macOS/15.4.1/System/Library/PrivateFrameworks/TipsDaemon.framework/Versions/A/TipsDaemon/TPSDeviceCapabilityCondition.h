@class NSArray;

@interface TPSDeviceCapabilityCondition : TPSCondition

@property (copy, nonatomic) NSArray *values;

- (id)init;
- (id)_valuesFromValuesArray:(id)a0;
- (id)targetingValidations;
- (id)targetingValidationsForType:(long long)a0;

@end
