@class NSProtocolChecker, NSMutableDictionary, NSArray, NSConnection;
@protocol NSSpellServerDelegate;

@interface NSSpellServer : NSObject {
    id _delegate;
    NSConnection *_spellServerConnection;
    NSMutableDictionary *_dictionaries;
    NSArray *_learnedDictionaries;
    struct __ssFlags { unsigned char delegateLearnsWords : 1; unsigned char delegateForgetsWords : 1; unsigned char busy : 1; unsigned char caseSensitive : 1; unsigned int _reserved : 28; } _ssFlags;
    NSProtocolChecker *_checker;
}

@property id<NSSpellServerDelegate> delegate;

- (void)dealloc;
- (void)run;
- (bycopy id)_stringForInputString:(in bycopy id)a0 language:(in bycopy id)a1;
- (id)dictionaryInfo:(id)a0;
- (bycopy id)_alternativesForPinyinInputString:(in bycopy id)a0 language:(in bycopy id)a1;
- (BOOL)_appendWord:(in bycopy id)a0 toDictionary:(in bycopy id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_checkGrammarInString:(in id)a0 language:(in bycopy id)a1 details:(out bycopy id *)a2;
- (bycopy id)_checkString:(in id)a0 offset:(in unsigned long long)a1 types:(in unsigned long long)a2 options:(in bycopy id)a3 orthography:(in bycopy id)a4 learnedDictionaries:(in bycopy id)a5 wordCount:(out long long *)a6;
- (bycopy id)_dataFromCheckingString:(in id)a0 offset:(in unsigned long long)a1 types:(in unsigned long long)a2 options:(in bycopy id)a3 orthography:(in bycopy id)a4 learnedDictionaries:(in bycopy id)a5 wordCount:(out long long *)a6;
- (bycopy id)_dataFromCheckingString:(in id)a0 offset:(in unsigned long long)a1 types:(in unsigned long long)a2 optionsData:(in bycopy id)a3 orthography:(in bycopy id)a4 learnedDictionaries:(in bycopy id)a5 wordCount:(out long long *)a6;
- (bycopy id)_dataFromGeneratingCandidatesForSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in id)a1 offset:(in unsigned long long)a2 types:(in unsigned long long)a3 options:(in bycopy id)a4 orthography:(in bycopy id)a5 learnedDictionaries:(in bycopy id)a6;
- (bycopy id)_dataFromGeneratingCandidatesForSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in id)a1 offset:(in unsigned long long)a2 types:(in unsigned long long)a3 optionsData:(in bycopy id)a4 orthography:(in bycopy id)a5 learnedDictionaries:(in bycopy id)a6;
- (bycopy id)_extendedAlternativesForPinyinInputString:(in bycopy id)a0 language:(in bycopy id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_findMisspelledWordInString:(in id)a0 language:(in bycopy id)a1 learnedDictionaries:(in bycopy id)a2 wordCount:(out long long *)a3 countOnly:(in BOOL)a4;
- (BOOL)_forgetWord:(in bycopy id)a0 inDictionary:(in bycopy id)a1;
- (oneway void)_invalidateDictionary:(in bycopy id)a0 newTime:(in long long)a1;
- (BOOL)_isWord:(in bycopy id)a0 inDictionary:(in bycopy id)a1;
- (BOOL)_learnWord:(in bycopy id)a0 inDictionary:(in bycopy id)a1;
- (void)_normalizeUserDictionary:(id)a0;
- (bycopy id)_prefixesForPinyinInputString:(in bycopy id)a0 language:(in bycopy id)a1;
- (oneway void)_recordResponse:(in unsigned long long)a0 toCorrection:(in bycopy id)a1 forWord:(in bycopy id)a2 language:(in bycopy id)a3;
- (oneway void)_setWords:(in bycopy id)a0 inDictionary:(in bycopy id)a1;
- (bycopy id)_suggestCompletionDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2;
- (bycopy id)_suggestCompletionDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2 options:(in bycopy id)a3;
- (bycopy id)_suggestCompletionsForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2;
- (bycopy id)_suggestCompletionsForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2 options:(in bycopy id)a3;
- (bycopy id)_suggestGuessesForWord:(in bycopy id)a0 inLanguage:(in bycopy id)a1;
- (bycopy id)_suggestGuessesForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2;
- (bycopy id)_suggestGuessesForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2 options:(in bycopy id)a3;
- (bycopy id)_suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2;
- (bycopy id)_suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(in bycopy id)a1 language:(in bycopy id)a2 options:(in bycopy id)a3;
- (bycopy id)_wordsInDictionary:(in bycopy id)a0;
- (id)autocorrectionDictionaryForLanguage:(id)a0 isGerman:(BOOL *)a1;
- (id)checkString:(id)a0 offset:(unsigned long long)a1 types:(unsigned long long)a2 options:(id)a3 orthography:(id)a4 learnedDictionaries:(id)a5 wordCount:(long long *)a6;
- (id)checkString:(id)a0 offset:(unsigned long long)a1 types:(unsigned long long)a2 options:(id)a3 orthography:(id)a4 wordCount:(long long *)a5;
- (id)correctionForString:(id)a0 language:(id)a1;
- (struct __CFSet { } *)createDictHashTable:(BOOL)a0;
- (BOOL)isWord:(id)a0 inDictionaries:(id)a1 caseSensitive:(BOOL)a2;
- (BOOL)isWordInUserDictionaries:(id)a0 caseSensitive:(BOOL)a1;
- (void)normalizeUserDictionary:(id)a0;
- (id)openUserDictionary:(id)a0;
- (BOOL)registerLanguage:(id)a0 byVendor:(id)a1;
- (long long)sizeOfDictionary:(id)a0;

@end
