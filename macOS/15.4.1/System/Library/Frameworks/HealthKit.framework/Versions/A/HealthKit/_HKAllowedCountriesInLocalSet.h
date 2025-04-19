@interface _HKAllowedCountriesInLocalSet : HKAllowedCountries

- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)a0;
- (id)initWithLocalCountrySet:(id)a0;
- (BOOL)someRegionIsSupported;

@end
