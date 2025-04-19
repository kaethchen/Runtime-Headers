@class NSString;

@interface MMPhoneNumberFormatter : NSFormatter

@property (copy, nonatomic) NSString *countryCode;

+ (id)defaultCountryCode;
+ (id)availableCountryCodes;
+ (id)countryCodesFromPlist;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringForObjectValue:(id)a0;
- (BOOL)isPhoneNumberValid:(id)a0 withPreFix:(id)a1;
- (id)stringForObjectValue:(id)a0 withObfuscations:(BOOL)a1 obfuscatedLength:(long long)a2;

@end
