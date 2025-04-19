@interface TIKeyEventMap_zh_Hant_Zhuyin : TIKeyEventMap_zh_Phonetic

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (BOOL)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)a0;
- (id)punctuationMap;
- (id)remapKeyWithString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;
- (BOOL)shouldInsertZhuyinCharacterAfter:(id)a0;

@end
