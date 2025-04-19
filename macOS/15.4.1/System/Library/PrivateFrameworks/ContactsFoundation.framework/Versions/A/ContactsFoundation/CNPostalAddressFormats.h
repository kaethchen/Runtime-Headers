@interface CNPostalAddressFormats : NSObject

+ (id)sharedLocalizer;
+ (id)_unitTestableLocalizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(BOOL)a1;
+ (id)addressFormats;
+ (id)localizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(BOOL)a1;
+ (id)makeLocalizer;

@end
