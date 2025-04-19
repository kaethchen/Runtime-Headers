@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (id)_overrideISOCountryCode;
+ (BOOL)isOverridePresent;
+ (id)overrideMobileCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentCountryCode;
- (id)currentEstimate;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;

@end
