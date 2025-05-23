@class NSString, NSUUID, NSObject;
@protocol HDPairedFeatureAttributesProviding, OS_os_log, HDFeatureDisableAndExpiryProviding, HDRegionAvailabilityProviding, HDPairedDeviceCapabilityProviding;

@interface HDFeatureAvailabilityOnboardingEligibilityDeterminer : NSObject {
    NSString *_featureIdentifier;
    NSUUID *_pairedDeviceCapability;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    id<HDPairedFeatureAttributesProviding> _pairedFeatureAttributesProvider;
    id<HDRegionAvailabilityProviding> _regionAvailabilityProvider;
    id<HDFeatureDisableAndExpiryProviding> _disableAndExpiryProvider;
    NSObject<OS_os_log> *_loggingCategory;
}

@property (nonatomic) long long currentOnboardingVersion;

- (id)description;
- (void).cxx_destruct;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (BOOL)_isActiveRemoteDevicePresent;
- (id)_onboardingEligibilitiesForOnboardingCompletions:(id)a0 onboardingEligibilityRetrievalBlock:(id /* block */)a1 error:(id *)a2;
- (id)_onboardingEligibilityForRegionEligibility:(id)a0 rescindedStatus:(id)a1 isCapabilitySupported:(id)a2 isActiveRemoteDevicePresent:(id)a3;
- (id)initWithFeatureIdentifier:(id)a0 currentOnboardingVersion:(long long)a1 pairedDeviceCapability:(id)a2 pairedDeviceCapabilityProvider:(id)a3 regionAvailabilityProvider:(id)a4 disableAndExpiryProvider:(id)a5 loggingCategory:(id)a6;
- (id)onboardingEligibilitiesForOnboardingCompletions:(id)a0 error:(id *)a1;

@end
