@interface ABCardViewPostalAddressFormatter : NSObject

+ (id)formatAddress:(id)a0 withFormatString:(id)a1;
+ (id)formatAddress:(id)a0;
+ (id)formatAddress:(id)a0 withDefaultCountryCode:(id)a1;
+ (id)formatAddress:(id)a0 withFormatDictionary:(id)a1;
+ (id)formatComponentToValueKeypathMap;
+ (id)formatDictionaryForAddress:(id)a0 withDefaultCountryCode:(id)a1;
+ (unsigned long long)numberOfLinesInFormattedAddress:(id)a0;

@end
