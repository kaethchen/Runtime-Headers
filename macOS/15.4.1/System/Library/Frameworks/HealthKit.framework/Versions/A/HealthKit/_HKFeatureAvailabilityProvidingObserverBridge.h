@class NSString, HKObserverBridgeHandle;

@interface _HKFeatureAvailabilityProvidingObserverBridge : NSObject <HKFeatureAvailabilityProvidingObserver>

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (void)_notifyObserversWithFeatureAvailabilityProviding:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;

@end
