@interface TIKeyboardInputManagerPinyin : TIKeyboardInputManagerChinesePhonetic

- (unsigned long long)initialSelectedIndex;
- (BOOL)acceptAutocorrectionCommitsInline;
- (id)keyboardBehaviors;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)shouldResample;
- (BOOL)shouldRescaleTouchPoints;
- (id)validCharacterSetForAutocorrection;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)isSpecialInput:(id)a0;
- (BOOL)currentShuangpinTypeUsesSemicolon;
- (BOOL)isShuangpinSemicolon:(id)a0;
- (id)remapInput:(id)a0 isFacemarkInput:(BOOL *)a1;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)usesGeometryModelData;

@end
