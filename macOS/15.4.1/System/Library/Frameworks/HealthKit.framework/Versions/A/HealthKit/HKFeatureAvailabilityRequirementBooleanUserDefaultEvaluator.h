@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator : HKFeatureAvailabilityRequirementUserDefaultEvaluator

@property (readonly, nonatomic) BOOL defaultBoolValueWhenKeyIsMissing;

- (id)defaultValueWhenKeyIsMissing;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (BOOL)isSatisfiedForValue:(id)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
