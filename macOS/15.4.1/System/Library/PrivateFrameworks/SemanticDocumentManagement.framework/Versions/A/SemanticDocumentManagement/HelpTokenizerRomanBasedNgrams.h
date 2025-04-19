@class NSSet, NSDictionary, NSCharacterSet;

@interface HelpTokenizerRomanBasedNgrams : HelpTokenizer {
    NSSet *stopwords;
    NSSet *knownPhrases;
    NSDictionary *suggestionRules;
    NSCharacterSet *alphaCharSet;
    NSCharacterSet *decimalDigitCharSet;
    struct __CFStringTokenizer { } *sentenceTokenizer;
    struct __CFStringTokenizer { } *wordTokenizer;
    BOOL isBootStrappingKnownPhrases;
}

- (void)dealloc;
- (id)initWithKnownPhraseArray:(id)a0 language:(id)a1;
- (BOOL)isValidSuggestionTokenString:(id)a0;
- (id)nGramTokenCountFromString:(id)a0 options:(id)a1;

@end
