@class NSArray, NSString, NSRegularExpression, NSMutableArray;

@interface IPPronounValidator : NSObject

@property (retain, nonatomic) NSMutableArray *rememberedPronouns;
@property (retain, nonatomic) NSArray *knownPronouns;
@property (retain, nonatomic) NSString *propertyPreferenceName;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSRegularExpression *validationRegex;
@property (nonatomic) long long maxPronounLength;
@property (retain, nonatomic) NSArray *displayedMorphologies;
@property (retain, nonatomic) NSArray *exampleStrings;
@property (retain, nonatomic) NSArray *examplePlaceholders;

+ (BOOL)shouldDisplayPronounPickerByDefault;
+ (BOOL)languageSupportsPronounPicking:(id)a0;
+ (BOOL)canDisplayPronounPicker;
+ (BOOL)currentUILocaleSupportsPronounPicking;
+ (id)initialPronounPickerLanguage;
+ (id)preferredPronounLocalizationForLanguage:(id)a0;
+ (id)supportedPronounLocalizations;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (void)_clearUserEntries;
- (id)autofillPronouns:(id)a0;
- (void)fillInMissingEntriesInArray:(id)a0 fromArray:(id)a1;
- (id)morphologyFromString:(id)a0;
- (BOOL)pronounHasValidChars:(id)a0;
- (BOOL)pronounIsValidLength:(id)a0;
- (void)rememberUserEntry:(id)a0;
- (BOOL)userSuppliedPronouns:(id)a0 matchKnownPronouns:(id)a1;

@end
