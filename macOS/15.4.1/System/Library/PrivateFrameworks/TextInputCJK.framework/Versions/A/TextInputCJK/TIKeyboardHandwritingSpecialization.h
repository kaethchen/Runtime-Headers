@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)replacementForDoubleSpace;
- (BOOL)shouldExtendPriorWord;
- (BOOL)supportsReversionUI;
- (id)wordSeparator;
- (id)nonstopPunctuationCharacters;
- (BOOL)supportsLearning;

@end
