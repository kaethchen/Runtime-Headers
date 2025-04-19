@class NSString;

@interface CNPhoneNumberHelper : NSObject

@property (class, readonly) NSString *homeCountryCode;
@property (class, readonly) NSString *currentCountryCode;

+ (id)countryCodeForNumber:(id)a0;
+ (id)defaultCountryCode;
+ (id)internationalizedFormattedNumber:(id)a0 countryCode:(id)a1;
+ (id)internationalizedUnformattedNumber:(id)a0 countryCode:(id)a1;
+ (BOOL)isStringPhoneNumber:(id)a0;
+ (id)lastFourDigitsForNumber:(id)a0;
+ (id)makePhoneNumberRegex;

@end
