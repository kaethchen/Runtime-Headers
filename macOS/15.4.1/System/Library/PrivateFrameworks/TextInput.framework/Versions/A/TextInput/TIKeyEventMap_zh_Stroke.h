@interface TIKeyEventMap_zh_Stroke : TIKeyEventMap_zh

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (BOOL)isNumericWubi:(id)a0;
- (id)remapKeyWithString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;
- (id)wubiFromASCII:(id)a0;

@end
