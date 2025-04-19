@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {
    NSMutableArray *_externalIndexToInternalIndexMappingArray;
    unsigned long long _externalInputIndex;
    NSString *_externalString;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (Class)wordSearchClass;
+ (id)_convertToKana:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateState;
- (unsigned int)inputCount;
- (id)inputString;
- (BOOL)usesCandidateSelection;
- (id)transliterate:(id)a0;
- (void)clearInput;
- (id)uncommittedText;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)a0;
- (BOOL)shouldFixupIncompleteRomaji;
- (id)wordCharacters;
- (void)checkAutocorrectionDictionaries;
- (void)addInput:(id)a0 withContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (id)convertInput:(id)a0;
- (id)convertInputsToSyntheticInputUptoCount:(int)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)handleKeyboardInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)inputLocationChanged;
- (void)keyLayoutWillChangeTo:(id)a0 from:(id)a1;
- (void)loadDictionaries;
- (id)remainingInput;
- (void)updateComposedText;
- (BOOL)usesComposingInput;
- (id)validCharacterSetForAutocorrection;
- (id)_convertStringWithBoundary:(unsigned long long)a0;
- (unsigned long long)actualInternalInputIndex;
- (id)getInputStringFromTopCandidate;
- (id)liveConversionTextInputManager;
- (unsigned long long)remainingInputLengthOfCandidate:(id)a0;

@end
