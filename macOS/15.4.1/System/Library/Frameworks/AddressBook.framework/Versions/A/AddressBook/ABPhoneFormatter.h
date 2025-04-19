@class CNCache;

@interface ABPhoneFormatter : NSFormatter

@property (readonly, nonatomic) CNCache *formattedPhoneNumbersCache;

+ (id)sharedPhoneFormatter;
+ (id)phoneNumberDetector;
+ (id)formatPhoneNumber:(id)a0 options:(unsigned long long)a1;
+ (id)formatRawPhoneNumber:(id)a0;
+ (id)generateOnlyPhoneCharactersSet;
+ (id)localizedStringByStandardizingPhoneNumber:(id)a0;
+ (id)onlyPhoneCharactersSet;
+ (BOOL)stringContainsOnlyPhoneCharacters:(id)a0;
+ (id)stringForPhoneNumber:(id)a0 options:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (void)setFormatAutosaveName:(id)a0;

@end
