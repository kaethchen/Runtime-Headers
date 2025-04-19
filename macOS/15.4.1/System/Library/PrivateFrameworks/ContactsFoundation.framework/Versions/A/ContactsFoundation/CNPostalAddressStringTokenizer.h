@interface CNPostalAddressStringTokenizer : NSObject

+ (id)countryCodeByLookingUpCountryName:(id)a0;
+ (id)countryCodeForCountryName:(id)a0;
+ (id)countryCodeFromCurrentLocale;
+ (id)postalAddressFromString:(id)a0 error:(id *)a1;
+ (id)tokenNameForScannerResultType:(id)a0;

- (id)postalAddressFromString:(id)a0 error:(id *)a1;

@end
