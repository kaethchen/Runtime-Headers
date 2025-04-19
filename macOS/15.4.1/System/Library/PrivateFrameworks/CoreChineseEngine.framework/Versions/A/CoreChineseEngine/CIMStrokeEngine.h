@interface CIMStrokeEngine : CIMShapeBasedEngine

- (id)helpAnchorName;
- (id)keyboardLayoutName;
- (int)mecabraInputMethodType;
- (BOOL)handleNumberKey:(unsigned short)a0;
- (unsigned long long)analysisOptions;
- (BOOL)canTypeNonMappedCharacters;
- (id)candidatesForInput:(id)a0;
- (id)getCharacterCodeForCharacter:(id)a0;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (id)inputCharacterSet;
- (id)keyMappings;
- (unsigned long long)maxLengthOfInline;
- (id)readingStringFromReading:(id)a0;
- (BOOL)shouldFadeLongReadings;
- (id)wildcardCharacterSet;

@end
