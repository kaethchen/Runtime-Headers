@class TCTagger, NSMutableDictionary, NSDictionary, TCSentenceCache, NSTimer, TCXPCClient;

@interface TCPostEditor : NSObject {
    NSDictionary *_options;
    NSMutableDictionary *_editors;
    TCTagger *_tagger;
    TCSentenceCache *_sentenceCache;
    TCXPCClient *_xpcClient;
    NSTimer *_idleTimer;
    double _timeoutInterval;
    double _minTimeoutInterval;
    double _maxTimeoutInterval;
}

+ (id)enabledLanguages;
+ (void)logIgnoredSentence:(id)a0 taggerFlags:(unsigned long long)a1;
+ (BOOL)checkingEnabledForLanguage:(id)a0;
+ (BOOL)deviceHasSuitableANE;
+ (id)sharedEditor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)recordResponse:(long long)a0 toGrammarDetail:(id)a1 language:(id)a2;
- (void)resetCache;
- (id)xpcClient;
- (void)resetIdleTimer;
- (BOOL)useServer;
- (id)finalResultsFromCheckingString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 options:(id)a3;
- (void)idleTimerFired:(id)a0;
- (void)_setTimeoutValuesWithOptions:(id)a0;
- (id)allEditorTypes;
- (void)checkString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 options:(id)a4 mutableResults:(id)a5;
- (void)clearTagger;
- (id)combinedResultsForResults:(id)a0 useAutocorrection:(BOOL)a1;
- (id)conditionalFinalResultsFromCheckingString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 options:(id)a3;
- (void)controlRepeatedAutocorrectionResultsForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 offset:(unsigned long long)a3 mutableResults:(id)a4;
- (BOOL)controlRepeatedAutocorrectionsWithOptions:(id)a0;
- (id)defaultEditorTypesForAppKit;
- (id)defaultLocalEditorTypes;
- (id)defaultRemoteEditorTypes;
- (id)editorOfType:(id)a0;
- (id)enabledLanguageForLanguage:(id)a0;
- (id)finalResultsFromCheckingString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 conditionalOnTerminationEstimation:(BOOL)a3 options:(id)a4;
- (id)grammarDetailForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 tagger:(id)a3;
- (id)grammarDetailForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2;
- (void)increaseIdleTimeoutInterval:(id)a0;
- (id)initWithChecker:(id)a0;
- (id)localAndCachedResultsFromCheckingString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 offset:(unsigned long long)a3 options:(id)a4;
- (void)localRecordResponse:(long long)a0 toGrammarDetail:(id)a1 language:(id)a2 appIdentifier:(id)a3;
- (id)localResultsFromCheckingString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 offset:(unsigned long long)a3 options:(id)a4;
- (BOOL)performPhraseAnalysis;
- (void)recordResponse:(long long)a0 toResult:(id)a1 language:(id)a2;
- (void)remoteCheckString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 options:(id)a4 mutableResults:(id)a5 completionHandler:(id /* block */)a6;
- (void)requestCheckingOfString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestCheckingOfString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 optionsData:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestCheckingOfString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 offset:(unsigned long long)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)requestCheckingOfString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)requireANE;
- (BOOL)requiredANENotPresent;
- (void)resetEditors;
- (void)resetRepeatedAutocorrectionCache;
- (id)resultByCombiningCorrectionResultsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromResults:(id)a1 alreadyAddedResults:(id)a2;
- (id)resultByCombiningGrammarResultsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromResults:(id)a1;
- (id)resultsFromCheckingString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 options:(id)a3;
- (void)retrieveCachedResultsForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 offset:(unsigned long long)a3 mutableResults:(id)a4 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5;
- (id)reversionForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2;
- (void)storeCachedResults:(id)a0 forString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 language:(id)a3 offset:(unsigned long long)a4;
- (BOOL)suppressTelemetryWithOptions:(id)a0;
- (id)taggerWithString:(id)a0 language:(id)a1;
- (BOOL)useAutocorrectionWithOptions:(id)a0;
- (BOOL)useCacheWithOptions:(id)a0;
- (void)warmEditorsInBackground:(BOOL)a0;

@end
