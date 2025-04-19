@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch : _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice

@property (readonly, nonatomic) BOOL supportedOnLocalDevice;

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)initWithFeatureIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)requirementDescription;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;

@end
