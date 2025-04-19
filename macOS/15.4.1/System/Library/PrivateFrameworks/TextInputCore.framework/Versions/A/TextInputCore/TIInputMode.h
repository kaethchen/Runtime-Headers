@class NSString, NSArray, NSDictionary, NSLocale;

@interface TIInputMode : NSObject <NSCopying> {
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
}

@property (readonly, nonatomic) NSString *normalizedIdentifier;
@property (copy, nonatomic) NSString *originalIdentifier;
@property (readonly, nonatomic) NSString *languageWithRegion;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) NSArray *additionalConfiguredLatinLanguages;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *preferredModelLocaleIdentifier;
@property (readonly, nonatomic) BOOL preferredModelLocaleIsMultilingual;
@property (readonly, nonatomic) BOOL isSiriMode;
@property (readonly, nonatomic) Class inputManagerClass;
@property (readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property (readonly, nonatomic) Class multilingualInputManagerClass;
@property (readonly, nonatomic) BOOL supportsPrediction;
@property (readonly, nonatomic) BOOL supportsMultilingualKeyboard;
@property (readonly, nonatomic) BOOL wantsMultilingualUnionOVS;
@property (readonly, nonatomic) BOOL spaceAutocorrectionEnabled;
@property (readonly, nonatomic) BOOL typedStringLMRankingEnabled;
@property (readonly, nonatomic) NSString *replacementForDoubleSpace;
@property (readonly, nonatomic) BOOL doesComposeText;
@property (readonly, nonatomic) BOOL deletesByComposedCharacterSequence;
@property (readonly, nonatomic) NSArray *allAccentKeyStrings;
@property (readonly, nonatomic) NSDictionary *layoutTags;
@property (readonly, nonatomic) NSDictionary *compositionMap;
@property (readonly, nonatomic) NSDictionary *reverseCompositionMap;
@property (readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property (readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property (readonly, nonatomic) NSString *wordMedialPunctuationCharacters;
@property (readonly, nonatomic) NSString *spaceDeletingCharacters;
@property (readonly, nonatomic) NSString *autocorrectionLocaleIdentifier;
@property (readonly, nonatomic) BOOL doesSupportInlineCompletion;

+ (id)inputModeWithIdentifier:(id)a0;
+ (id)inputModeWithIdentifier:(id)a0 isSiriMode:(BOOL)a1;
+ (id)inputModeWithIdentifier:(id)a0 isSiriMode:(BOOL)a1 originalIdentifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNormalizedIdentifier:(id)a0;
- (id)initWithNormalizedIdentifier:(id)a0 isSiriMode:(BOOL)a1;
- (Class)keyboardFeatureSpecializationClassFromInputModeProperties;
- (id)preferredMultilingualLanguageModelLocale;
- (void)setQuickTypeKeyboardFeatureSpecializationClass;

@end
