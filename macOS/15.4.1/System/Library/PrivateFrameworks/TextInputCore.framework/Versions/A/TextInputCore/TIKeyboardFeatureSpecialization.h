@class NSString, NSMutableDictionary, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject {
    NSString *m_softwareLayout;
    struct USet { } *m_precomposedCharacterSet;
    struct USet { } *m_acceptableCharacterSet;
    NSMutableDictionary *m_compositionMaps;
    NSMutableDictionary *m_reverseCompositionMaps;
}

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (nonatomic) long long currentUserInterfaceIdiom;
@property (nonatomic) BOOL useRelaxedOVSPolicy;
@property (nonatomic) BOOL skipCandidateQualityFilter;

+ (struct USet { } *)createAcceptableCharacterSetForKeyboardLocale:(id)a0;
+ (id)createSpecializationForInputMode:(id)a0;
+ (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInputMode:(id)a0;
- (BOOL)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)replacementForDoubleSpace;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)shouldExtendPriorWord;
- (id)supplementalLexiconWordExtraCharacters;
- (BOOL)supportsReversionUI;
- (id)terminatorsDeletingAutospace;
- (id)wordCharacters;
- (id)wordSeparator;
- (BOOL)doesComposeText;
- (id)wordMedialPunctuationCharacters;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (id)allAccentKeyStrings;
- (BOOL)allowsAutocorrectionOfValidWords;
- (BOOL)canConvertExternalToExternal;
- (id)compositionMapForLayout:(id)a0 reverse:(BOOL)a1;
- (struct USet { } *)createAcceptableCharacterSet;
- (void *)createInputManager:(id)a0;
- (BOOL)deletesByComposedCharacterSequence;
- (id)dictionaryInputMode;
- (BOOL)dictionaryUsesExternalEncoding;
- (id)externalStringToInternal:(id)a0;
- (id)externalStringToInternal:(id)a0 byConvertingEagerly:(BOOL)a1;
- (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1 byConvertingEagerly:(BOOL)a2;
- (id)internalStringToExternal:(id)a0;
- (id)layoutTags;
- (id)nonstopPunctuationCharacters;
- (const struct USet { } *)precomposedCharacterSet;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)a0;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (BOOL)shouldClearInput:(id)a0;
- (BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
- (BOOL)shouldConvertCandidateToExternal;
- (BOOL)shouldConvertEagerly;
- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (id)spaceDeletingCharacters;
- (void)specializeInputManager:(void *)a0 forLayoutState:(id)a1;
- (BOOL)supportsLearning;

@end
