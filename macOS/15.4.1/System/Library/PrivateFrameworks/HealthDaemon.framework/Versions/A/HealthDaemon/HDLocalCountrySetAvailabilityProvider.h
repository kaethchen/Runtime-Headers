@class NSUserDefaults, NSString, HKCountrySet, HDDaemon;
@protocol HDRegionAvailabilityProvidingDelegate;

@interface HDLocalCountrySetAvailabilityProvider : NSObject <HDOTAFeatureAvailabilityObserver, HDObservableRegionAvailabilityProviding> {
    NSString *_featureIdentifier;
    HKCountrySet *_defaultCountrySet;
    HDDaemon *_healthDaemon;
    NSUserDefaults *_overrideUserDefaults;
}

@property (readonly, copy, nonatomic) HKCountrySet *countrySet;
@property (weak, nonatomic) id<HDRegionAvailabilityProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)onboardingEligibilityForCountryCode:(id)a0;
- (void)OTAFeatureAvailabilityManagerDidUpdateFeatureAvailabilityInfo:(id)a0;
- (void)downloadLatestOTAAvailabilityInfoWithCompletion:(id /* block */)a0;
- (id)initWithFeatureIdentifier:(id)a0 defaultCountrySet:(id)a1 healthDaemon:(id)a2;
- (id)initWithFeatureIdentifier:(id)a0 defaultCountrySet:(id)a1 healthDaemon:(id)a2 overrideUserDefaults:(id)a3;
- (id)regionAvailability;

@end
