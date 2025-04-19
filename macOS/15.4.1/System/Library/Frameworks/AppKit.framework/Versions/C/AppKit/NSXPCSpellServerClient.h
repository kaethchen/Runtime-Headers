@class NSString, NSXPCConnection;

@interface NSXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

- (void)dealloc;
- (BOOL)isValid;
- (id)connection;
- (id)_stringForInputString:(id)a0 language:(id)a1;
- (id)_alternativesForPinyinInputString:(id)a0 language:(id)a1;
- (BOOL)_appendWord:(id)a0 toDictionary:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_checkGrammarInString:(id)a0 language:(id)a1 details:(id *)a2;
- (id)_checkString:(id)a0 offset:(unsigned long long)a1 types:(unsigned long long)a2 options:(id)a3 orthography:(id)a4 learnedDictionaries:(id)a5 wordCount:(long long *)a6;
- (id)_dataFromCheckingString:(id)a0 offset:(unsigned long long)a1 types:(unsigned long long)a2 options:(id)a3 orthography:(id)a4 learnedDictionaries:(id)a5 wordCount:(long long *)a6;
- (id)_dataFromCheckingString:(id)a0 offset:(unsigned long long)a1 types:(unsigned long long)a2 optionsData:(id)a3 orthography:(id)a4 learnedDictionaries:(id)a5 wordCount:(long long *)a6;
- (id)_dataFromGeneratingCandidatesForSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 offset:(unsigned long long)a2 types:(unsigned long long)a3 options:(id)a4 orthography:(id)a5 learnedDictionaries:(id)a6;
- (id)_dataFromGeneratingCandidatesForSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 offset:(unsigned long long)a2 types:(unsigned long long)a3 optionsData:(id)a4 orthography:(id)a5 learnedDictionaries:(id)a6;
- (id)_extendedAlternativesForPinyinInputString:(id)a0 language:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_findMisspelledWordInString:(id)a0 language:(id)a1 learnedDictionaries:(id)a2 wordCount:(long long *)a3 countOnly:(BOOL)a4;
- (BOOL)_forgetWord:(id)a0 inDictionary:(id)a1;
- (void)_invalidateDictionary:(id)a0 newTime:(long long)a1;
- (BOOL)_isWord:(id)a0 inDictionary:(id)a1;
- (BOOL)_learnWord:(id)a0 inDictionary:(id)a1;
- (id)_prefixesForPinyinInputString:(id)a0 language:(id)a1;
- (void)_recordResponse:(unsigned long long)a0 toCorrection:(id)a1 forWord:(id)a2 language:(id)a3;
- (void)_setWords:(id)a0 inDictionary:(id)a1;
- (id)_suggestCompletionDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)_suggestCompletionDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2 options:(id)a3;
- (id)_suggestCompletionsForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)_suggestCompletionsForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2 options:(id)a3;
- (id)_suggestGuessesForWord:(id)a0 inLanguage:(id)a1;
- (id)_suggestGuessesForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)_suggestGuessesForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2 options:(id)a3;
- (id)_suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)_suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2 options:(id)a3;
- (id)_wordsInDictionary:(id)a0;
- (id)_dataFromCheckingGrammarInString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 optionsData:(id)a3;
- (void)_dataFromCheckingGrammarInString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 optionsData:(id)a3 completionHandler:(id /* block */)a4;
- (void)_recordResponse:(unsigned long long)a0 toGrammarDetail:(id)a1 language:(id)a2;
- (id)contextForMessageName:(id)a0 waitForReply:(BOOL)a1;
- (id)contextForMessageName:(id)a0 waitForReply:(BOOL)a1 incrementIndexOnTimeout:(BOOL)a2 isPostEditing:(BOOL)a3;
- (id)initWithServerName:(id)a0;
- (id)serverName;

@end
