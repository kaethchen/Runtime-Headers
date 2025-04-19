@class TIWordSearch, NSString, TIKeyboardCandidate, NSArray;
@protocol TIMarkedTextBuffer;

@interface TIKeyboardInputManager_ja_Inline : TIKeyboardInputManager_ja_Base {
    TIWordSearch *_wordSearch;
}

@property (retain, nonatomic) id<TIMarkedTextBuffer> markedTextBuffer;
@property (retain, nonatomic) TIKeyboardCandidate *inlineCandidate;
@property (copy, nonatomic) NSString *remainingInput;
@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) BOOL romajiMode;

- (void).cxx_destruct;
- (void)syncToKeyboardState:(id)a0;
- (unsigned int)inputCount;
- (void)commitComposition;
- (id)inputString;
- (void)clearInput;
- (id)candidateResultSet;
- (unsigned int)inputIndex;
- (id)searchStringForMarkedText;
- (id)wordCharacters;
- (unsigned long long)phraseBoundary;
- (void)setMarkedText;
- (id)didAcceptCandidate:(id)a0;
- (void)abortComposition;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)geometryModelData;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (id)keyboardConfigurationLayoutTag;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (id)rawInputString;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)wordSearch;
- (id)convertString;
- (void)deleteLastCharacter:(unsigned long long *)a0;
- (void)generateInlineCandidate;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2 romajiMode:(BOOL)a3;
- (void)invokeEditMode;
- (BOOL)isEditMode;
- (unsigned int)rawInputIndex;
- (void)removeInlineCandidate:(id)a0;
- (BOOL)shouldSkipCandidateGeneration;
- (void)syncWithEditMode:(id)a0;

@end
