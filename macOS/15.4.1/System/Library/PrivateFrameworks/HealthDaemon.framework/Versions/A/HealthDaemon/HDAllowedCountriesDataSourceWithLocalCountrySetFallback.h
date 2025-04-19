@class NSString, HKCountrySet, NSObject;
@protocol HDAllowedCountriesDataSource, OS_os_log, HDAllowedCountriesDataSourceObserver, HDPairedDeviceCapabilityProviding;

@interface HDAllowedCountriesDataSourceWithLocalCountrySetFallback : NSObject <HDAllowedCountriesDataSource> {
    id<HDAllowedCountriesDataSource> _allowedCountriesDataSource;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    NSObject<OS_os_log> *_loggingCategory;
}

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (weak, nonatomic) id<HDAllowedCountriesDataSourceObserver> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0 allowedCountriesDataSource:(id)a1 loggingCategory:(id)a2;
- (void)reloadLocalCountrySetWithCompletion:(id /* block */)a0;

@end
