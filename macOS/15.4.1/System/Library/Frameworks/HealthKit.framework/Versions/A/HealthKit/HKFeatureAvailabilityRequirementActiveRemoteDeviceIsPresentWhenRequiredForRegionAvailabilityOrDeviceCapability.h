@interface HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapability : HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement

+ (id)requirementIdentifier;

- (BOOL)isEqual:(id)a0;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (id)requirementDescription;

@end
