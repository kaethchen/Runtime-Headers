@interface _NSPersonNameComponentsStyleFormatterAbbreviated : _NSPersonNameComponentsStyleFormatter

- (id)abbreviatedKeys;
- (id)_delimiterBetweenString:(id)a0 andString:(id)a1 isPhonetic:(BOOL)a2;
- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;
- (id)fallbackStyleFormatter;
- (id)keysOfInterest;
- (BOOL)shouldIgnoreComponentsContainingSpecialCharacters;

@end
