@class NSString, NSArray, NSSet, NSCharacterSet;

@interface TIIndicScriptComposer : NSObject {
    NSCharacterSet *_consonantLettersSet;
    NSCharacterSet *_vowelLettersAndSigns;
    NSArray *_consonantLetters;
    NSArray *_contextualVowelLetters;
    id /* block */ _vowelLetterToSignConverter;
    id /* block */ _vowelModifierLetterToSignConverter;
    NSSet *_singleGlyphConjuncts;
}

@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) int scriptCode;
@property (readonly, nonatomic) BOOL composesConsonants;
@property (retain, nonatomic) NSString *languageIdentifier;
@property (copy, nonatomic) id /* block */ contextFetcher;

- (void).cxx_destruct;
- (id)contextualDisplayKeys;
- (BOOL)_isSingleGlyph:(id)a0;
- (BOOL)_characterBeforeCursorIsConsonant;
- (BOOL)_characterBeforeCursorIsVowel;
- (id)_consonantLetters;
- (id)_consonantLettersSet;
- (BOOL)_contextIsStartOfWord;
- (id)_contextualVowelLetters;
- (id /* block */)_letterToSignConverter;
- (id)_singleGlyphConjuncts;
- (id)_stringByStrippingTrailingVirama:(id)a0;
- (unsigned short)_viramaSign;
- (id /* block */)_vowelLetterToSignConverter;
- (id)_vowelLettersAndSigns;
- (id /* block */)_vowelModifierLetterToSignConverter;
- (id)initWithLanguage:(id)a0 contextFetcher:(id /* block */)a1;
- (id)stringByComposingInput:(id)a0;

@end
