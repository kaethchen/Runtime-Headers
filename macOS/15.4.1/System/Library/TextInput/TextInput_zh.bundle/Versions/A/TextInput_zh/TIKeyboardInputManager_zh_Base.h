@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (BOOL)acceptInputString:(id)a0;
- (id)inputsToReject;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (BOOL)supportsNumberKeySelection;
- (int)inputMethodType;
- (void *)initImplementation;
- (id)validCharacterSetForSegmentation;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;
- (BOOL)shouldSearchCompletionForSubstrings;

@end
