@interface ABCNAddressFormats : NSObject

+ (id)addressFormats;
+ (id)defaultCountryCode;
+ (void)setDefaultCountryCode:(id)a0;
+ (id)validCountryCodes;
+ (id)defaultCountryCodeFromDefaults:(id)a0;
+ (id)addressFormatForCountryCode:(id)a0;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)countryCodeByLocaleLookup;
+ (id)countryCodeFromDefaults:(id)a0;
+ (id)fallbackCountryCode;
+ (id)makeFormatsDictionary;
+ (void)setDefaultCountryCode:(id)a0 inDefaults:(id)a1;
+ (id)usaStateAbbreviations;
+ (id)usaStateNames;
+ (BOOL)wasCountryCodeChosenByUserInDefaults:(id)a0;

@end
