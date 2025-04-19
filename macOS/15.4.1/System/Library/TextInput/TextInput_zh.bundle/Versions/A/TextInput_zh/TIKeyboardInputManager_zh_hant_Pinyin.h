@interface TIKeyboardInputManager_zh_hant_Pinyin : TIKeyboardInputManagerPinyin

- (id)locale;
- (id)keyEventMap;
- (int)inputMethodType;
- (void *)initImplementation;
- (BOOL)usesComposingInput;
- (id)phoneticSortingMethod;

@end
