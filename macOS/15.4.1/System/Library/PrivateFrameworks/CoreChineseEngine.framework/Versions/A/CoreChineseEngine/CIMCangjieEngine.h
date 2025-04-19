@interface CIMCangjieEngine : CIMShapeBasedEngine

+ (id)ASCIIFromCangjie:(id)a0;
+ (id)cangjieToASCIIMap;

- (void)updateSettings;
- (id)helpAnchorName;
- (id)keyboardLayoutName;
- (int)mecabraInputMethodType;
- (unsigned long long)analysisOptions;
- (id)shownInlineText;
- (id)enumeratedCandidates;
- (id)getCharacterCodeForCharacter:(id)a0;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (BOOL)inlineBeginsWithWildcard;
- (id)inputCharacterSet;
- (unsigned long long)maxLengthOfInline;
- (unsigned long long)maximumLengthOfValidInputCodes;
- (id)punctuationListForKey:(unsigned short)a0;
- (BOOL)shouldGroupWindowMovement;
- (BOOL)shouldOptimizeLayoutForFixedSize;
- (BOOL)updateMarkedTextOnSelectionChange;
- (id)wildcardCharacterSet;

@end
