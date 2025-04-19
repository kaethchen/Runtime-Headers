@class NSSet, NSCharacterSet;

@interface HelpTokenizerNonRomanNgrams : HelpTokenizer {
    NSSet *stopwords;
    NSSet *knownPhrases;
    NSCharacterSet *punctuationCharSet;
    NSCharacterSet *decimalDigitCharSet;
    struct __CFStringTokenizer { } *sentenceTokenizer;
    struct __CFStringTokenizer { } *wordTokenizer;
    BOOL isBootStrappingKnownPhrases;
}

- (void)dealloc;
- (id)initWithKnownPhraseArray:(id)a0 language:(id)a1;
- (id)nGramTokenCountFromString:(id)a0 options:(id)a1;
- (id)nGramsFromTokenizedString:(id)a0;
- (id)stringFromTokenizedString:(id)a0;
- (id)tokenizedStringFromString:(id)a0;

@end
