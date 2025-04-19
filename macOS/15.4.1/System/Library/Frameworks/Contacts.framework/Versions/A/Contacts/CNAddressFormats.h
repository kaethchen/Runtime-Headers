@interface CNAddressFormats : NSObject

+ (id)addressFormats;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)countryCodeByLocaleLookup;
+ (id)fallbackCountryCode;
+ (id)usaStateAbbreviations;
+ (id)usaStateNames;
+ (id)defaultKeyboardSettingsDictionary;
+ (id)makeSupportedCountries;
+ (id)supportedCountries;

@end
