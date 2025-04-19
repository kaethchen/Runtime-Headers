@class NSCharacterSet;

@interface APFormatter : NSFormatter {
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
}

@property unsigned long long maxLength;

+ (id)maxLengthFormatter:(int)a0;
+ (id)asciiFormatter:(int)a0;
+ (id)romanFormatter:(int)a0;
+ (id)pogoPasswordSet;
+ (id)ascii7BitFormatter:(int)a0;
+ (id)ascii7BitSet;
+ (id)asciiSet;
+ (id)domainNameFormatter:(int)a0;
+ (id)domainNameSet;
+ (id)hexFormatter:(int)a0;
+ (id)hexSet;
+ (id)ipAddressSet;
+ (id)ipFormatter:(int)a0;
+ (id)multipleIPFormatter:(int)a0;
+ (id)multipleIpAddressesSet;
+ (id)nonZeroNumberOnly:(int)a0;
+ (id)numberOnlyFormatter:(int)a0;
+ (id)phoneNumberFormatter:(int)a0;
+ (id)phoneNumberSet;
+ (id)romanSet;
+ (id)sharedDomainNameFormatter;
+ (id)sharedIPFormatter;
+ (id)sharedMultipleIPFormatter;
+ (id)sharedPhoneNumberFormatter;

- (void)dealloc;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)characterSet;
- (id)initWithMaxLength:(int)a0;
- (void)setCharacterSet:(id)a0;
- (id)initWithCharacterSet:(id)a0 withMaxLength:(int)a1;
- (id)initWithStringOfValidCharacters:(id)a0 withMaxLength:(int)a1;
- (id)invertedCharacterSet;
- (void)setInvertedCharacterSet:(id)a0;

@end
