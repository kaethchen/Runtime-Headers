@interface IMKEnclosingCharactersInputMethod : IMKAbstractInputMethod

+ (unsigned int)_closingBracketOf:(unsigned int)a0;
+ (unsigned int)_closingCharacterOf:(unsigned int)a0;
+ (unsigned int)_closingQuoteOf:(unsigned int)a0;
+ (BOOL)_isClosingBracket:(unsigned int)a0;
+ (BOOL)_isClosingCharacter:(unsigned int)a0;
+ (BOOL)_isClosingQuote:(unsigned int)a0;
+ (BOOL)_isOpeningBracket:(unsigned int)a0;
+ (BOOL)_isOpeningCharacter:(unsigned int)a0;
+ (BOOL)_isOpeningQuote:(unsigned int)a0;
+ (unsigned int)_openingBracketOf:(unsigned int)a0;
+ (unsigned int)_openingCharacterOf:(unsigned int)a0;
+ (unsigned int)_openingQuoteOf:(unsigned int)a0;

- (BOOL)_closesOpenedEnclosingCharacterWith:(unsigned int)a0;
- (BOOL)_isTypingWithinEnclosingCharacters;
- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;

@end
