@class TIRevisionHistory, TIStickerCandidateGenerator, TILanguageSelectionController, TISmartPunctuationOptions, NSMutableArray, NSString, TILRUDictionary, TITextCheckerExemptions, TIKeyboardTouchEvent, TISmartSelector, TIAutoshiftRegularExpressionLoader, TICounterChangeCache, NSMutableSet, TIEmojiCandidateGenerator, NSArray, TISupplementalLexiconController, TIKeyboardLayout, TIFilterParameterLoader, TIKeyboardCandidate, TIKeyboardInputManagerConfig, TIKeyboardInputManagerState, NSMutableString, TIAutocorrectionList, TIKeyboardLayoutState, NSMutableDictionary, TIInputContextHistory, NSCharacterSet, TICharacterSetDescription, TITypingSessionMonitor, TIKeyboardState, TIKeyboardFeatureSpecialization;
@protocol TICandidateHandler;

@interface TIKeyboardInputManager : TIKeyboardInputManagerBase <TIRevisionHistoryDelegate, TILanguageSelectionControllerDelegate> {
    void *m_impl;
    NSMutableString *m_composedText;
    unsigned long long m_initialSelectedIndex;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIKeyboardInputManagerState *_currentState;
    TIKeyboardFeatureSpecialization *_keyboardFeatureSpecialization;
    NSCharacterSet *_allowPredictionCharacterSet;
    NSMutableDictionary *_cachedLayoutTags;
    struct shared_ptr<KB::TypologyLogger> { struct TypologyLogger *__ptr_; struct __shared_weak_count *__cntrl_; } m_typology_recorder;
    struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } m_lightweight_language_model;
    struct unique_ptr<TI::RejectionsDatabase, std::default_delete<TI::RejectionsDatabase>> { struct __compressed_pair<TI::RejectionsDatabase *, std::default_delete<TI::RejectionsDatabase>> { struct RejectionsDatabase *__value_; } __ptr_; } m_rejectionsDatabase;
    TILanguageSelectionController *_languageSelectionController;
    TIEmojiCandidateGenerator *_emojiCandidateGenerator;
    TIInputContextHistory *_synchronizedInputContextHistory;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_supplementalLexiconWordExtraCharacters;
    TICharacterSetDescription *_closingQuotes;
    TICharacterSetDescription *_openingQuotes;
    TISmartPunctuationOptions *_smartOptions;
    NSMutableDictionary *_testingStateObject;
    int _lastHitTestKeycode;
    BOOL _didInitialSync;
    struct vector<RecentMessage, std::allocator<RecentMessage>> { struct RecentMessage *__begin_; struct RecentMessage *__end_; struct __compressed_pair<RecentMessage *, std::allocator<RecentMessage>> { struct RecentMessage *__value_; } __end_cap_; } conversation_history;
    BOOL _skipStickerSuggestionGating;
    struct shared_ptr<KB::CandidateRefinery> { struct CandidateRefinery *__ptr_; struct __shared_weak_count *__cntrl_; } _refinery;
}

@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (readonly, nonatomic) TIRevisionHistory *revisionHistory;
@property (readonly, nonatomic) TILRUDictionary *autocorrectionHistory;
@property (readonly, nonatomic) TILRUDictionary *recentAutocorrections;
@property (readonly, nonatomic) TILRUDictionary *recentPredictiveInputSelections;
@property (readonly, nonatomic) TILRUDictionary *rejectedAutocorrections;
@property (readonly, nonatomic) TILRUDictionary *autocorrectionListsSuggestedForCurrentInput;
@property (readonly, nonatomic) TILRUDictionary *autocorrectionListsForWordsInDocument;
@property (nonatomic, getter=isWordLearningEnabled) BOOL wordLearningEnabled;
@property (nonatomic) BOOL isEditingWordPrefix;
@property (retain, nonatomic) TIAutoshiftRegularExpressionLoader *autoshiftRegexLoader;
@property (readonly, nonatomic) TITextCheckerExemptions *textCheckerExemptions;
@property (readonly, nonatomic) NSCharacterSet *allowPredictionCharacterSet;
@property (readonly, nonatomic) unsigned long long linguisticResourceStatus;
@property (nonatomic) long long deleteKeyCount;
@property (retain, nonatomic) TIKeyboardCandidate *hitTestCorrectedInputMatchingCandidate;
@property (retain, nonatomic) NSMutableSet *rejectedConversionsForCurrentContinuousPath;
@property (retain, nonatomic) TITypingSessionMonitor *typingSessionMonitor;
@property (retain, nonatomic) TICounterChangeCache *counterChangeCache;
@property (retain, nonatomic) TISmartSelector *smartSelector;
@property (copy, nonatomic) id /* block */ proactiveSuggestionsGenerationBlock;
@property (retain, nonatomic) TIAutocorrectionList *lastContinuousPathAutocorrection;
@property (nonatomic) unsigned long long lastNumCandidatesRequest;
@property (readonly, nonatomic) TISmartPunctuationOptions *smartOptions;
@property (readonly, nonatomic) TIFilterParameterLoader *filterParameterLoader;
@property (nonatomic) long long userInterfaceIdiom;
@property (retain, nonatomic) NSString *lastInputString;
@property (readonly, nonatomic) TIEmojiCandidateGenerator *emojiCandidateGenerator;
@property (readonly, nonatomic) TIStickerCandidateGenerator *stickerCandidateGenerator;
@property (retain, nonatomic) TIAutocorrectionList *pregeneratedTypingAutocorrections;
@property (retain, nonatomic) TILRUDictionary *autocorrectionForCurrentStem;
@property (retain, nonatomic) TILRUDictionary *rejectedAutocorrectionsDisplayedOrInserted;
@property (retain, nonatomic) TILRUDictionary *rejectedAutocorrectionsDisplayedOrInsertedInverse;
@property (retain, nonatomic) TIAutocorrectionList *lastAutocorrectionList;
@property (retain, nonatomic) TIKeyboardTouchEvent *previousTouchEvent;
@property (copy, nonatomic) TIKeyboardCandidate *lastAcceptedText;
@property (retain, nonatomic) id<TICandidateHandler> candidateHandlerForOpenRequest;
@property (retain, nonatomic) NSMutableArray *candidateHandlerForOpenRequestStack;
@property (readonly, nonatomic) TIKeyboardInputManagerConfig *config;
@property (readonly, nonatomic) TILanguageSelectionController *languageSelectionController;
@property (readonly, nonatomic) NSArray *languageModelAssets;
@property (readonly, weak, nonatomic) TISupplementalLexiconController *currentCandidateGenerationContextSupplementalLexicons;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (readonly, nonatomic) TIKeyboardInputManagerState *currentState;
@property (readonly, nonatomic) unsigned short supplementalPrefix;
@property (readonly, nonatomic) TIKeyboardFeatureSpecialization *keyboardFeatureSpecialization;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } candidateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllDynamicDictionaries;
+ (id)vulgarWordUsageDatabaseFileName;
+ (void)clearRecentsFileForIdentifier:(id)a0;
+ (id)dynamicDictionaryFilePathForInputMode:(id)a0;
+ (id)keyboardUserDirectory;
+ (id)offlineLearningHandleForInputMode:(id)a0;
+ (id)recentsFilePathForIdentifier:(id)a0;
+ (void)removeDynamicDictionaryForInputMode:(id)a0;
+ (void)resetResponseKit;
+ (int)shiftContextForShiftState:(int)a0 autocapitalizationType:(unsigned long long)a1;
+ (id)userDictionaryWordKeyPairsFilePath;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)suspend;
- (id)autocorrection;
- (id)candidates;
- (id)inputContext;
- (id)markedText;
- (void)syncToKeyboardState:(id)a0;
- (void)tearDown;
- (void)setInput:(id)a0;
- (unsigned int)inputCount;
- (id)inputString;
- (void)setAutocapitalizationType:(unsigned long long)a0;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer *x0; })getDictionary;
- (BOOL)ignoresDeadKeys;
- (id)trialParameters;
- (BOOL)stringEndsWord:(id)a0;
- (BOOL)acceptAutocorrectionCommitsInline;
- (BOOL)acceptInputString:(id)a0;
- (void)acceptingCandidateWithTrigger:(id)a0;
- (unsigned long long)autoquoteType;
- (BOOL)canHandleKeyHitTest;
- (void)candidateRejected:(id)a0;
- (id)candidateResultSet;
- (void)changingContextWithTrigger:(id)a0;
- (BOOL)commitsAcceptedCandidate;
- (id)contextualDisplayKeys;
- (id)defaultCandidate;
- (BOOL)delayedCandidateList;
- (id)generateInlineCompletions:(id)a0 withPrefix:(id)a1;
- (unsigned long long)initialCandidateBatchCount;
- (unsigned int)inputIndex;
- (id)inputsToReject;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (id)keyboardConfiguration;
- (void)logDiscoverabilityEvent:(int)a0 userInfo:(id)a1;
- (BOOL)newInputAcceptsUserSelectedCandidate;
- (BOOL)nextInputWouldStartSentence;
- (void)registerLearning:(id)a0 fullCandidate:(id)a1 keyboardState:(id)a2 mode:(id)a3;
- (void)registerLearningForCompletion:(id)a0 fullCompletion:(id)a1 context:(id)a2 prefix:(id)a3 mode:(id)a4;
- (id)replacementForDoubleSpace;
- (id)searchStringForMarkedText;
- (void)setAutocapitalizationEnabled:(BOOL)a0;
- (void)setInputIndex:(unsigned int)a0;
- (void)setKeyboardEventsLagging:(BOOL)a0;
- (void)setOriginalInput:(id)a0;
- (id)shadowTyping;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)shouldExtendPriorWord;
- (BOOL)shouldFixupIncompleteRomaji;
- (BOOL)shouldSkipCandidateSelection;
- (void)skipHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (id)supplementalLexiconWordExtraCharacters;
- (BOOL)suppliesCompletions;
- (BOOL)supportsNumberKeySelection;
- (BOOL)supportsReversionUI;
- (BOOL)suppressCompletionsForFieldEditor;
- (BOOL)suppressPlaceholderCandidate;
- (BOOL)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesContinuousPath;
- (BOOL)usesLiveConversion;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)wordCharacters;
- (id)wordSeparator;
- (id)autocorrectionList;
- (id)autocorrectionRecordForWord:(id)a0;
- (unsigned long long)phraseBoundary;
- (void)setInHardwareKeyboardMode:(BOOL)a0;
- (void)setInSplitKeyboardMode:(BOOL)a0;
- (void)setMarkedText;
- (id)didAcceptCandidate:(id)a0;
- (id)sortingMethods;
- (BOOL)canGenerateCompletionCandidates;
- (void)checkAutocorrectionDictionaries;
- (id)contextBeforeWithDesiredLength:(unsigned long long)a0;
- (id)currentWordStem;
- (BOOL)doesComposeText;
- (unsigned long long)internalIndexOfInputStemSuffix:(id)a0;
- (id)sortMethodsGroupsForCandidates:(id)a0;
- (void)forceInstallTypologyTraceLogger;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (BOOL)shouldGenerateInlineCompletions;
- (BOOL)usesMLTapTyping;
- (int)TIInlineCompletionAcceptanceRejectionTypefromTIRegisterLearningMode:(id)a0;
- (BOOL)_canStartSentenceAfterString:(id)a0 maxRecursionDepth:(unsigned long long)a1;
- (BOOL)_hasSupplementalPrefix;
- (void)_recalcSupplementalPrefix;
- (id)_supplementalCompletionCandidates:(unsigned long long)a0;
- (void)acceptCurrentCandidateIfSelectedWithContext:(id)a0;
- (void)acceptCurrentCandidateWithContext:(id)a0;
- (void)acceptInput;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })acceptableRangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 withSelectionLocation:(unsigned long long)a2;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (BOOL)acceptsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1;
- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)addItemToConversationHistoryWithText:(id)a0 timestamp:(id)a1 senderID:(id)a2 recipientIdentifiers:(id)a3;
- (void)addMultilingualLexiconsFromDiskToVector:(void *)a0 excluding:(const void *)a1;
- (void)addSynthesizedTouchToInput:(id)a0 keyboardState:(id)a1;
- (long long)addTouch:(id)a0 shouldHitTest:(BOOL)a1;
- (struct TITokenID { unsigned int x0; unsigned int x1; })addWord:(id)a0 contextTokens:(id)a1 surfaceFormPtr:(id *)a2;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (unsigned int)adjustedSourceMaskFromCandidate:(id)a0;
- (BOOL)allowsAutocorrectionForCurrentInputString;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (void)appendToInputContext:(id)a0;
- (id)autocorrectionCandidateForInput:(id)a0 rawInput:(id)a1 withCandidate:(const void *)a2;
- (id)autocorrectionCandidateForInput:(id)a0 rawInput:(id)a1 withCandidate:(const void *)a2 insertingSpace:(BOOL)a3 sharedPrefixLength:(unsigned long long)a4;
- (id)autocorrectionCandidates;
- (id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(unsigned long long)a0;
- (id)autocorrectionListForSelectedText;
- (id)autocorrectionListWithCandidateCount:(unsigned long long)a0;
- (BOOL)autocorrectionWasRecentlyRejected:(id)a0;
- (BOOL)autocorrectionWasRecentlyRejectedForCurrentInput;
- (BOOL)blockedByNegativeLearning:(id)a0 correction:(id)a1 ignoreSoft:(BOOL)a2;
- (id)cachedAutocorrectionListResponseFor:(id)a0;
- (BOOL)canComputeSentenceContextForInputStem:(id)a0;
- (BOOL)canRetrocorrectInputAtIndex:(unsigned int)a0;
- (BOOL)canStartSentenceAfterString:(id)a0;
- (BOOL)canTrimInputAtIndex:(unsigned int)a0;
- (id)candidateResultSetFromCandidates:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (id)candidatesForString:(id)a0;
- (void)candidatesOfferedFeedback:(id)a0 keyboardState:(id)a1;
- (id)cannedResponseCandidatesForString:(id)a0;
- (void)checkAndUpdateAdditionalLexicons;
- (id)checkRejectionHistory:(id)a0;
- (void)clearDynamicDictionary;
- (void)clearHumanReadableTrace;
- (void)clearInputContext;
- (void)clearSoftLearning;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0 forced:(BOOL)a1;
- (id)closingQuotes;
- (id)completionCandidates:(unsigned long long)a0;
- (id)configurationPropertyList;
- (void)continuousPathCandidateRejected:(id)a0;
- (id)continuousPathCandidates:(unsigned long long)a0;
- (double)continuousPathLanguageWeight;
- (unsigned long long)countOfWordsIninputStem:(id)a0;
- (id)currentInputModeIdentifier;
- (void)decrementLanguageModelCount:(id)a0 latinInputString:(id)a1 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a2 contextTokens:(id)a3;
- (void)decrementLanguageModelCount:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 contextTokens:(id)a2;
- (id)deleteComposedTextFromIndex:(unsigned long long)a0 count:(unsigned long long *)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)deleteFromInputWithContext:(id)a0;
- (id)deletedSuffixOfInputContext:(id)a0 whenDeletingFromInputString:(id)a1 withInputIndex:(unsigned long long)a2 deletionCount:(unsigned long long)a3;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (id)deltaDictionaryPathForInputMode:(id)a0;
- (BOOL)dictionaryContainsWord:(id)a0;
- (id)dictionaryInputMode;
- (id)dictionaryStringForExternalString:(id)a0;
- (BOOL)dictionaryUsesExternalEncoding;
- (void)didDropInputStem;
- (void)didUpdateInputModeProbabilities:(id)a0;
- (void)didUpdateInputModes:(id)a0;
- (BOOL)directlyBlockedByNegativeLearning:(id)a0 correction:(id)a1 ignoreSoft:(BOOL)a2 retrocorrectionComponent:(BOOL)a3;
- (void)displayedCandidateRejected;
- (BOOL)doesSelectedTextGenerateEmojiCandidates;
- (void)dropInput;
- (void)dropInputPrefix:(unsigned int)a0;
- (void)dynamicDictionariesRemoved:(id)a0;
- (id)dynamicDictionaryPathForInputMode:(id)a0;
- (void)dynamicResourceDirectorySet:(id)a0;
- (id)dynamicResourcePath;
- (BOOL)enablesProactiveQuickType;
- (void)endTypingSessionWithInteractionObservers:(id)a0;
- (void)enumerateWordSuffixesOfString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (id)extendedAutocorrection:(id)a0 spanningInputsForCandidates:(id)a1 emojis:(id)a2;
- (unsigned int)externalIndexToInternal:(unsigned int)a0;
- (id)externalStringForDictionaryString:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (id)externalStringToInternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (void)fetchAssetAvailabilityStatusForInputMode:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchTypingSessionParams:(id /* block */)a0;
- (void)fillReversedConversationHistoryInContext:(id)a0;
- (id)filterDuplicatePredictions:(id)a0 autocorrection:(id)a1;
- (struct TITokenID { unsigned int x0; unsigned int x1; })findTokenIDForWord:(id)a0 contextTokens:(id)a1 tokenLookupMode:(unsigned int)a2;
- (struct TITokenID { unsigned int x0; unsigned int x1; })findTokenIDForWord:(id)a0 contextTokens:(id)a1 tokenLookupMode:(unsigned int)a2 surfaceFormPtr:(id *)a3 hasCaseInsensitiveStaticVariant:(BOOL *)a4;
- (void)finishGeneratingAutocorrectionsWithCandidates:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (void)finishGeneratingCandidates;
- (id)finishGeneratingInlineCompletions:(id)a0 completion:(id /* block */)a1 syncResponse:(BOOL)a2;
- (void)finishGeneratingResponseKitProactiveSuggestions:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completion:(id /* block */)a2;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)a0 withAdditionalPredictions:(id)a1 withInput:(id)a2;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(id)a0 withAdditionalPredictions:(id)a1 withInput:(id)a2 async:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (BOOL)generateAutofillFormWithKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (void)generateCannedResponseCandidatesAsyncForString:(id)a0 completionHandler:(id /* block */)a1;
- (id)generateReplacementsForString:(id)a0 keyLayout:(id)a1;
- (id)generateTypingAutocorrectionsWithCandidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)getTestingStateObject;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (void)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 completion:(id /* block */)a2;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (void)handleTrialParametersUpdateCallback;
- (BOOL)hasLegacyInputStem;
- (BOOL)hasLegacyInputString;
- (id)humanReadableTrace;
- (BOOL)inHardwareKeyboardMode;
- (void)incrementLanguageModelCount:(id)a0 latinInputString:(id)a1 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a2 contextTokens:(id)a3 saveToDifferentialPrivacy:(int)a4;
- (void)incrementLanguageModelCount:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 contextTokens:(id)a2 saveToDifferentialPrivacy:(int)a3;
- (void)incrementUsageTrackingKey:(id)a0;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(BOOL)a0;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)a0 autocorrectionTypes:(unsigned int)a1;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (id)indexTitlesForGroupTitles:(id)a0 sortingMethod:(id)a1;
- (id)indexesOfDuplicatesInCandidates:(id)a0;
- (void *)initImplementation;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 languageSelectionController:(id)a2;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1;
- (struct TIInlineCompletionAnalyticsMetadata { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x5; unsigned char x6; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x7; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x8; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x9; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x10; })inlineCompletionMetadataFrom:(id)a0 andBundleId:(id)a1;
- (id)inlineCompletions:(struct CandidateCollection { struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct __compressed_pair<KB::Candidate *, std::allocator<KB::Candidate>> { struct Candidate *x0; } x2; } x0; struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct __compressed_pair<KB::Candidate *, std::allocator<KB::Candidate>> { struct Candidate *x0; } x2; } x1; struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct __compressed_pair<KB::Candidate *, std::allocator<KB::Candidate>> { struct Candidate *x0; } x2; } x2; struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct __compressed_pair<KB::Candidate *, std::allocator<KB::Candidate>> { struct Candidate *x0; } x2; } x3; int x4; unsigned int x5; })a0 matchedStem:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; })a1;
- (void)inputLocationChanged;
- (id)inputStem;
- (id)inputStringFromDocumentState:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })inputStringRangeFromRevisionHistory;
- (void)installTypologyTraceLogger;
- (unsigned int)internalIndexToExternal:(unsigned int)a0;
- (id)internalInputContext;
- (id)internalStringToExternal:(id)a0;
- (id)internalStringToExternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (BOOL)isContinuousPathCandidate:(id)a0 replacementForOriginalConversion:(id)a1;
- (BOOL)isEditingExistingWord;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (BOOL)isHighMemoryManager;
- (BOOL)isLinguisticResourceUpdateScheduled;
- (BOOL)isProgressivelyPathing;
- (BOOL)isStickerSuggestionsEnabled;
- (BOOL)isStringBasedModel;
- (BOOL)isTransliterationManager;
- (BOOL)isTypologyEnabled;
- (void)keyLayoutDidChangeTo:(id)a0;
- (void)keyLayoutWillChangeTo:(id)a0 from:(id)a1;
- (id)keyboardConfigurationAccentKeyString;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (id)languageModelAssetsForInputMode:(id)a0;
- (id)layoutTagsForLayout:(id)a0;
- (void)learnRecentMessageUserIsRespondingTo;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })legacyInputRangeForTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; unsigned int x5; BOOL x6; float x7; })lexiconInfoForInputMode:(id)a0;
- (struct { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; unsigned int x5; BOOL x6; float x7; })lexiconInfoForMultilingualDynamic:(id)a0;
- (struct { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; unsigned int x5; BOOL x6; float x7; })lexiconInformation;
- (id)lexiconLocales;
- (id)linguisticContext;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })loadNewLanguageModel;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })loadedLightweightLanguageModel;
- (void)logInlineCompletionsToTypology:(id)a0 candidate:(id)a1;
- (void)logTestingParametersToTypology;
- (void)logToTypologyRecorderWithString:(id)a0;
- (unsigned short)mapKeyboardLayoutKey:(unsigned short)a0;
- (unsigned long long)maximumShortcutLengthAllowed;
- (void)mobileAssetsChanged:(id)a0;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })multilingualLocalesOnDisk;
- (id)newInputManagerState;
- (id)newKeyboardContext;
- (BOOL)nextInputWouldStartSentenceAfterInput:(id)a0;
- (id)nonstopPunctuationCharacters;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (id)openingQuotes;
- (id)originatingAutocorrectionListForCandidate:(id)a0;
- (void)parseRecentMessage:(void *)a0;
- (id)pathToDeltaStaticDictionary;
- (id)pathToDynamicDictionary;
- (id)pathToPhraseDictionary;
- (id)pathToStaticDictionary;
- (id)pathedWordSeparator;
- (long long)performHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (id)phraseCandidateCompletedByWord:(const struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } *)a0 allowNoSuggest:(BOOL)a1 forAutocorrection:(BOOL)a2 shiftContext:(int)a3;
- (id)phraseDictionaryPathForInputMode:(id)a0;
- (void)popCandidateGenerationContextFromStack;
- (int)precisionPointFromTrialOverride:(id)a0;
- (const struct USet { } *)precomposedCharacterSet;
- (id)predictionCandidates:(unsigned long long)a0 predictionType:(int)a1;
- (unsigned int)predominantLexiconInContext;
- (unsigned long long)prefixLengthOfInput:(id)a0 sharedWithCandidate:(const void *)a1;
- (unsigned long long)prefixLengthOfInput:(id)a0 sharedWithCandidate:(const void *)a1 useCandidateLength:(BOOL)a2;
- (void)prepareForKeyboardActivity;
- (void)prepareForKeyboardInactivity:(int)a0;
- (id)primaryInputMode;
- (id)promoteAutocorrectionsToInlineCompletions:(id)a0 matchedStem:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; })a1;
- (void)promoteInlineCompletionToAutocorrections:(id)a0 predictions:(id)a1 inlineCompletion:(id)a2 outReconciledAutocorrections:(id *)a3 outReconciledPredictions:(id *)a4 matchedStem:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; })a5;
- (void)pushCandidateGenerationContextOnStack;
- (void)pushCandidateGenerationContextWithResults:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUnclosedQuoteMatchingQuote:(id)a0 inString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)rawInputString;
- (void)reconcileCandidates:(void *)a0 forTypedString:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } *)a1 withPhraseCandidate:(void *)a2 replacing:(const struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } *)a3;
- (void)reconcileConversions:(id)a0;
- (void)reconcileInlineCompletionAndAutocorrections:(id)a0 inlineCompletions:(id)a1 predictions:(id)a2 outReconciledAutocorrections:(id *)a3 outReconciledInlineCompletions:(id *)a4 outReconciledPredictions:(id *)a5 matchedStem:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; })a6;
- (void)recordAcceptedAutocorrection:(id)a0 fromPredictiveInputBar:(BOOL)a1;
- (void)recordRejectedAutocorrectionForAcceptedText:(id)a0 fromPredictiveInputBar:(BOOL)a1;
- (void)recordSuggestedAutocorrectionList:(id)a0;
- (void)refreshInputManagerState;
- (void)registerNegativeEvidence:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 contextTokens:(id)a2 intended:(id)a3 intendedTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a4 hint:(int)a5;
- (void)registerRevisionFrom:(id)a0 to:(id)a1 contextTokens:(id)a2;
- (void *)rejectionsDatabase;
- (void)releaseAndRemoveRejectionsDatabase;
- (void)releaseDynamicLanguageModel;
- (void)releaseMRLBuffers;
- (id)remainingInput;
- (void)removeDynamicResourceDirectory;
- (BOOL)removeSuffixOfInputContext:(id)a0;
- (void)resetConversationHistory;
- (void)resetLMCache:(int)a0;
- (id)resourceInputModes;
- (id)revisionListFromAutocorrectionList:(id)a0 afterAcceptingCandidate:(id)a1;
- (void)runMaintenanceTask;
- (void)scheduleLinguisticResourceUpdate;
- (void)scheduleLinguisticResourceUpdateWithReason:(id)a0;
- (void)scoreCandidates:(void *)a0;
- (struct LanguageModelContext { struct shared_ptr<std::vector<KB::LanguageModelContext>> { void *x0; struct __shared_weak_count *x1; } x0; struct vector<TITokenID, std::allocator<TITokenID>> { struct TITokenID *x0; struct TITokenID *x1; struct __compressed_pair<TITokenID *, std::allocator<TITokenID>> { struct TITokenID *x0; } x2; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct LinguisticContext { struct unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> { struct __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>> { struct LinguisticContextImpl *x0; } x0; } x0; } x5; struct LinguisticContext { struct unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> { struct __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>> { struct LinguisticContextImpl *x0; } x0; } x0; } x6; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x7; })sentenceContextForInputStem:(id)a0 inputContext:(id)a1;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (void)setAutoCorrects:(BOOL)a0;
- (void)setAutoshiftFromInputContext;
- (void)setDynamicResourceDirectory:(id)a0;
- (void)setInTypeToSiriMode:(BOOL)a0;
- (void)setInput:(id)a0 withIndex:(unsigned int)a1;
- (void)setInputStringFromDocumentState:(id)a0 isDeleteEvent:(BOOL)a1;
- (void)setInputStringFromDocumentState:(id)a0 isDeleteEvent:(BOOL)a1 didDeleteLastAcceptedPath:(BOOL)a2;
- (void)setLearnsCorrection:(BOOL)a0;
- (void)setLinguisticResourceStatus:(unsigned long long)a0 reason:(id)a1;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)setPhraseBoundaryIfNecessary;
- (void)setRejectedAutocorrection:(id)a0 forInput:(id)a1;
- (void)setTestingStateObject:(id)a0;
- (int)shiftContext;
- (id)shortcutCompletionsForDocumentState:(id)a0;
- (id)shortcutConversionForDocumentState:(id)a0;
- (id)shortcutConversionForInput:(id)a0 andExistingString:(id)a1 existingStringStartsInMiddleOfWord:(BOOL)a2;
- (id)shortcutConversionForString:(id)a0 stringStartsInMiddleOfWord:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })shortcutSearchRangeForString:(id)a0;
- (BOOL)shouldAllowContextWord:(id)a0;
- (BOOL)shouldAllowCorrectionOfAcceptedCandidate:(id)a0;
- (BOOL)shouldAutocapitalizePredictionAfterSpace;
- (BOOL)shouldBlockAutocorrection:(id)a0;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (BOOL)shouldCommitInputString;
- (BOOL)shouldDelayUpdateComposedText;
- (BOOL)shouldDropInputStem;
- (BOOL)shouldGeneratePredictionsForCurrentContext;
- (BOOL)shouldGenerateSuggestionsForSelectedText;
- (BOOL)shouldInsertSpaceBeforeInput:(id)a0;
- (BOOL)shouldInsertSpaceBeforePredictions;
- (BOOL)shouldLearnWord:(id)a0;
- (BOOL)shouldMonitorTypingSession;
- (BOOL)shouldOfferStickers;
- (BOOL)shouldOmitEmojiCandidates;
- (BOOL)shouldPromoteAutocorrectionsToInlineCompletions:(id)a0;
- (BOOL)shouldPromoteInlineCompletionsToAutocorrections:(id)a0 inlineCompletions:(id)a1;
- (BOOL)shouldSkipShortcutConversionForDocumentState:(id)a0;
- (BOOL)shouldSuppressLanguageSelectionEvidence;
- (unsigned long long)shouldSuppressLearning;
- (BOOL)shouldSuppressTokenIDLookups;
- (BOOL)shouldUpdateDictionary;
- (BOOL)shouldUpdateLanguageModel;
- (unsigned int)simulateAutoshiftIfNecessaryForFlags:(unsigned int)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })smartSelectionRangeForTextInDocument:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 tokenizedRanges:(id)a3 options:(unsigned long long)a4;
- (void)softLearningRegisterAccepted:(id)a0 typed:(id)a1;
- (void)softLearningRegisterDeleted:(id)a0;
- (id)sortMethodIndexes;
- (id)sortMethodTitles;
- (id)sortMethodsShowExtensionCandidates;
- (unsigned int)sourceMaskForWord:(struct Word { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct ByteString { union { struct { unsigned short x0; char *x1; } x0; struct { unsigned short x0; unsigned char x1[14]; } x1; } x0; } x1; float x2; float x3; float x4; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x5; float x6; float x7; unsigned int x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct TITokenID { unsigned int x0; unsigned int x1; } x14; int x15; unsigned long long x16; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x17; BOOL x18; struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::equal_to<unsigned long long>> { float x0; } x3; } x0; } x19; })a0;
- (unsigned int)sourceMaskForWordString:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; })a0 caseSensitive:(BOOL)a1;
- (BOOL)spaceAndNextInputWouldStartSentence;
- (id)spaceDeletingCharacters;
- (id)staticDictionaryPathForInputMode:(id)a0;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (BOOL)stringEndsWithClosingQuote:(id)a0;
- (id)suffixOfDesiredString:(id)a0 toAppendToInputString:(id)a1 withInputIndex:(unsigned long long)a2 afterDeletionCount:(unsigned long long *)a3;
- (BOOL)suggestionBlocklistMatchesStrings:(id)a0;
- (id)supplementalAutocorrection;
- (id)supplementalAutocorrectionCandidates;
- (BOOL)supportsLearning;
- (BOOL)supportsShortcutConversion;
- (void)syncInputStringToKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (void)synchronizeConversationHistoryWithInputContextHistory:(id)a0;
- (id)terminatorsPrecedingAutospace;
- (id)testingParameters;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (id)titleForSortingMethod:(id)a0;
- (void)tokenizeString:(const struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } *)a0 context:(void *)a1 sentences:(unsigned int *)a2;
- (void)trackProactiveMetrics:(id)a0 keyboardState:(id)a1;
- (void)transferErrorCorrectionFlagsToInputCandidate:(void *)a0;
- (void)trimInput;
- (void)trimInputAfterLathamConversion;
- (id)trimmedInputStem;
- (id)trimmedInputStemAfterLathamConversion;
- (id)typedStringForEmptyAutocorrection;
- (BOOL)updateAdaptationContextToKeyboardState:(id)a0 from:(id)a1;
- (void)updateComposedText;
- (void)updateDictionaryAndLanguageModel;
- (void)updateForRevisitedString:(id)a0;
- (void)updateInlineCompletionOperatingPointForPrimaryLocale;
- (void)updateInputContext;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)updateResponseModelForKeyboardState:(id)a0;
- (void)updateTrialFavoniusLanguagePowerForPrimaryLocale;
- (void)updateTrialNegativeLearningFlagForPrimaryLocale;
- (id)usageTrackingKeyForStatistic:(id)a0;
- (unsigned long long)userFrequencyOfWord:(id)a0;
- (unsigned long long)userFrequencyOfWord:(id)a0 lexiconID:(unsigned int)a1;
- (BOOL)usesFavonius;
- (BOOL)usesRetrocorrection;
- (void)willChangeToKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (void)willDropInputStem;
- (id)wordInInputStem:(id)a0 atIndex:(unsigned long long)a1;

@end
