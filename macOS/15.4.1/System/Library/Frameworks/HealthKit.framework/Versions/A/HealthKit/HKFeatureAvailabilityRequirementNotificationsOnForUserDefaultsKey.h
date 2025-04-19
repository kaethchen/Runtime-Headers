@interface HKFeatureAvailabilityRequirementNotificationsOnForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (BOOL)defaultBoolValueWhenKeyIsMissing;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
