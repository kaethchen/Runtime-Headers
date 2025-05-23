@class NSString, HKRegionAvailability;

@interface HDRegionAvailabilityProvider : NSObject <HDRegionAvailabilityProviding> {
    HKRegionAvailability *_regionAvailability;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anyCountryAvailability;
+ (id)uncheckedAvailability;

- (void).cxx_destruct;
- (id)onboardingEligibilityForCountryCode:(id)a0;
- (id)regionAvailability;

@end
