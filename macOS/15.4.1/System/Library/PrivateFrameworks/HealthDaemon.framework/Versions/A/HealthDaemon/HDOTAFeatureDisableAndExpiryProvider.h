@class NSString, HDOTAFeatureAvailabilityManager, NSObject;
@protocol OS_os_log, HDPairedDeviceCapabilityProviding, HDFeatureDisableAndExpiryProvidingDelegate;

@interface HDOTAFeatureDisableAndExpiryProvider : NSObject <HDOTAFeatureAvailabilityObserver, HDFeatureDisableAndExpiryProviding> {
    NSString *_remoteDisableCondition;
    NSString *_seedExpirationCondition;
    NSObject<OS_os_log> *_loggingCategory;
    id<HDPairedDeviceCapabilityProviding> _nanoRegistryDeviceCapabilityProvider;
    HDOTAFeatureAvailabilityManager *_OTAFeatureAvailabilityManager;
}

@property (weak, nonatomic) id<HDFeatureDisableAndExpiryProvidingDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)OTAFeatureAvailabilityManagerDidUpdateFeatureAvailabilityInfo:(id)a0;
- (id)initWithDaemon:(id)a0 featureIdentifier:(id)a1;
- (id)initWithDaemon:(id)a0 remoteDisableCondition:(id)a1 seedExpirationCondition:(id)a2;
- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)a0 error:(id *)a1;

@end
