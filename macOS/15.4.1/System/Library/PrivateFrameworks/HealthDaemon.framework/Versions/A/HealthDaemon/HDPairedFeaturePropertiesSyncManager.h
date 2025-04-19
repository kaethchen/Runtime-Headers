@class HKPairedFeatureAttributes, NSString, HKCountrySet, HDLocalCountrySetAvailabilityProvider, HKFeatureAttributes;
@protocol HDAllowedCountriesDataSourceObserver, HDFeaturePropertiesWriting;

@interface HDPairedFeaturePropertiesSyncManager : NSObject <HDRegionAvailabilityProvidingDelegate, HDPairedFeatureAttributesProviding, HDAllowedCountriesDataSource> {
    HKFeatureAttributes *_localFeatureAttributes;
    HDLocalCountrySetAvailabilityProvider *_localCountrySetAvailabilityProvider;
    id /* block */ _activeRemoteReadSourceProvider;
    id<HDFeaturePropertiesWriting> _localWriteSource;
    int _nanoPreferencesSyncChangeNotificationToken;
}

@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (weak, nonatomic) id<HDAllowedCountriesDataSourceObserver> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0 localFeatureAttributes:(id)a1 localCountrySetAvailabilityProvider:(id)a2;
- (id)initWithFeatureIdentifier:(id)a0 localFeatureAttributes:(id)a1 localCountrySetAvailabilityProvider:(id)a2 activeRemoteReadSourceProvider:(id /* block */)a3 localWriteSource:(id)a4;
- (void)regionAvailabilityProvidingDidUpdate:(id)a0;
- (void)reloadLocalCountrySetWithCompletion:(id /* block */)a0;
- (void)synchronizeLocalProperties;

@end
