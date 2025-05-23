@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased

@property (nonatomic) BOOL suchengEnabled;
@property (nonatomic) BOOL supportsEnglish;

+ (Class)wordSearchClass;

- (id)keyboardBehaviors;
- (BOOL)supportsNumberKeySelection;
- (id)sortingMethods;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)nonstopPunctuationCharacters;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (void)updateMarkedText;
- (id)cangjieAlphabetSet;
- (unsigned long long)cangjieInputType:(id)a0 fromPopupVariant:(BOOL)a1;
- (id)cangjieSet;
- (BOOL)firstCandidateIsEnglish;
- (id)formattedSearchString;
- (BOOL)isPunctuationInput;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)selectedCandidateIsEnglish;
- (void)syncWordSearch;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;

@end
