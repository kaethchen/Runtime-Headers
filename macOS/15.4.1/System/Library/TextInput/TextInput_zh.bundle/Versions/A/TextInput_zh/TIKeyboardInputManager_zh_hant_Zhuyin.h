@interface TIKeyboardInputManager_zh_hant_Zhuyin : TIKeyboardInputManager_zh_Base

@property (nonatomic, getter=isDynamic) BOOL dynamic;
@property (nonatomic, getter=isAssertDefaultKeyPlane) BOOL assertDefaultKeyPlane;
@property (nonatomic) BOOL liveConversionForceEnabled;
@property (nonatomic) BOOL liveConversionForceDisabled;

- (void)commitComposition;
- (unsigned long long)initialSelectedIndex;
- (BOOL)delayedCandidateList;
- (BOOL)usesLiveConversion;
- (BOOL)liveConversionEnabled;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (unsigned short)mapKeyboardLayoutKey:(unsigned short)a0;
- (BOOL)shouldResample;
- (BOOL)supportsCandidateGeneration;
- (id)syllableSeparator;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (BOOL)usesComposingInput;
- (id)validCharacterSetForAutocorrection;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (BOOL)shouldInsertFirstToneMark;
- (BOOL)shouldInvokeLiveConverison:(id)a0;

@end
