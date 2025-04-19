@interface CNPostalAddressMapping : NSObject

+ (id)defaultCountryCode;
+ (void)sanitizeStreet:(id)a0;
+ (id)URLWithAddress:(id)a0 isDirections:(BOOL)a1 defaultCountryCode:(id)a2;
+ (void)cleanseQuery:(id)a0;
+ (id)getDirectionsURLWithPostalAddress:(id)a0;
+ (id)makeQueryFromAddress:(id)a0;
+ (id)makeQueryFromAddress_jp:(id)a0;
+ (id)makeQueryFromAddress_mx:(id)a0;
+ (id)makeQueryFromAddress_nz:(id)a0;
+ (id)queryForSanitizedAddress:(id)a0;
+ (void)sanitizeCity:(id)a0;
+ (void)sanitizeCityInAddress:(id)a0;
+ (void)sanitizeCity_cz:(id)a0;
+ (void)sanitizeCity_jp:(id)a0;
+ (void)sanitizeCountryCodeInAddress:(id)a0 defaultCountryCode:(id)a1;
+ (void)sanitizeCountryInAddress:(id)a0;
+ (void)sanitizePostalCodeInAddress:(id)a0;
+ (void)sanitizeStateInAddress:(id)a0;
+ (void)sanitizeStreetInAddress:(id)a0;
+ (void)sanitizeStreet_cz:(id)a0;
+ (id)showLocationURLWithAddressDictionary:(id)a0;
+ (id)showLocationURLWithPostalAddress:(id)a0;
+ (id)showLocationURLWithPostalAddress:(id)a0 defaultCountryCode:(id)a1;
+ (void)trimEmptyFieldsFromQuery:(id)a0;

@end
