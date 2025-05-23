@class NSString, NSArray, NSDictionary, TSUFormattingSymbols, TSUDecimalFormatter, TSULocale, NSMutableDictionary;

@interface TSUNumberFormatter : NSObject {
    TSULocale *_locale;
    TSUFormattingSymbols *_formattingSymbols;
    NSArray *_decimalFormatters;
    NSDictionary *_currencyFormatters;
    NSArray *_percentageFormatters;
    NSArray *_scientificFormatters;
    TSUDecimalFormatter *_fractionFormatter;
    NSMutableDictionary *_currencyCodeToSymbolMap;
    NSMutableDictionary *_currencyCodeToHalfWidthSymbolMap;
    NSString *_additionalCurrencyCode;
    NSDictionary *_additionalCurrencyCodeFormatters;
}

+ (void)initialize;
+ (void)lock;
+ (void)unlock;
+ (id)defaultFormatStringForValueType:(int)a0;
+ (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(unsigned char)a1;
+ (void)formatString:(id)a0 replaceOccurencesOfUnescapedString:(id)a1 withString:(id)a2;
+ (id)formatString:(id)a0 transformedForNegativeStyle:(unsigned char)a1;
+ (id)formatterForLocale:(id)a0;
+ (id)numberFormatStringSpecialSymbols;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)a0;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)a0;
+ (int)positionOfSymbol:(id)a0 inNumberFormatSubpattern:(id)a1;
+ (id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)a0;
+ (id)formatString:(id)a0 transformedForNegativeStyle:(unsigned char)a1 placeMinusSignAfterRLM:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (BOOL)currencyFromString:(id)a0 additionalCurrencyCode:(id)a1 value:(double *)a2 formatString:(id *)a3 currencyCode:(id *)a4;
- (BOOL)decimalFromString:(id)a0 value:(double *)a1 formatString:(id *)a2;
- (id)defaultFormatStringForValueType:(int)a0;
- (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(unsigned char)a1;
- (BOOL)fractionFromString:(id)a0 value:(double *)a1;
- (id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)a0;
- (id)p_currencyFormatters;
- (id)p_decimalFormatters;
- (id)p_findCurrencySymbolInString:(id)a0 additionalCurrencyCode:(id)a1 successfullString:(id *)a2 currencyCode:(id *)a3;
- (void)p_numberPreferencesChanged:(id)a0;
- (id)p_percentageFormatters;
- (id)p_scientificFormatters;
- (BOOL)p_valueFromString:(id)a0 formatters:(id)a1 value:(double *)a2 formatString:(id *)a3;
- (BOOL)percentageFromString:(id)a0 value:(double *)a1 formatString:(id *)a2;
- (BOOL)scientificFromString:(id)a0 value:(double *)a1 formatString:(id *)a2;

@end
