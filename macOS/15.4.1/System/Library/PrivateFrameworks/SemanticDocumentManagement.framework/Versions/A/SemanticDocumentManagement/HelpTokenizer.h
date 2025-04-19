@class NSCharacterSet;

@interface HelpTokenizer : NSObject {
    NSCharacterSet *whitespaceCharSet;
    unsigned int languageProcessingFlags;
}

+ (int)countOfGramsInTokenString:(id)a0;
+ (int)countOfGramsInTokenString:(id)a0 usingSeparator:(id)a1;
+ (id)sdmLocalizationForLanguage:(id)a0;
+ (id)tokenizerForLanguage:(id)a0;

- (void)dealloc;
- (id)initWithKnownPhraseArray:(id)a0 language:(id)a1;
- (BOOL)isValidSuggestionTokenString:(id)a0;
- (id)nGramTokenCountFromString:(id)a0 options:(id)a1;
- (id)nGramsFromTokenizedString:(id)a0;
- (id)stringFromTokenizedString:(id)a0;
- (id)tokenCountFromString:(id)a0 options:(id)a1;
- (id)tokenizedStringFromString:(id)a0;

@end
