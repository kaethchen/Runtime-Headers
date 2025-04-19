@interface HKFeatureAvailabilityRequirementSomeRegionIsSupported : HKFeatureAvailabilityRegionAvailabilityRequirement

+ (id)requirementIdentifier;

- (id)isSatisfiedWithRegionAvailability:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (id)requirementDescription;

@end
