@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
    NSString *_remainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (void).cxx_destruct;
- (unsigned int)inputCount;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (BOOL)acceptInputString:(id)a0;
- (id)candidateResultSet;
- (BOOL)hasCandidates;
- (unsigned int)inputIndex;
- (id)keyboardBehaviors;
- (id)searchStringForMarkedText;
- (void)setInputIndex:(unsigned int)a0;
- (BOOL)shouldExtendPriorWord;
- (BOOL)suppliesCompletions;
- (BOOL)supportsReversionUI;
- (BOOL)usesAutoDeleteWord;
- (id)didAcceptCandidate:(id)a0;
- (id)sortingMethods;
- (void)acceptInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)inputLocationChanged;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfigurationLayoutTag;
- (void)loadDictionaries;
- (id)rawInputString;
- (BOOL)supportsLearning;
- (void)cancelCandidatesThread;
- (id)formattedSearchString;
- (id)markedTextWithAutoconvertedCandidates;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)shouldLookForCompletionCandidates;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;

@end
