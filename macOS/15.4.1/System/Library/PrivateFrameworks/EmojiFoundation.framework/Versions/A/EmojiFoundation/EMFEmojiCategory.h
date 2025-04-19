@class NSString;

@interface EMFEmojiCategory : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *shortLocalizedName;

+ (id)_emojiSetForIdentifier:(id)a0;
+ (BOOL)_isCoupleMultiSkinToneEmoji:(id)a0;
+ (BOOL)_supportsCoupleSkinToneSelection:(id)a0;
+ (id)categoryIdentifierList;
+ (id)categoryWithIdentifier:(id)a0;
+ (id)NewlyAddedEmoji;
+ (id)CelebrationEmoji;
+ (id)DingbatsVariantEmoji;
+ (id)FlagsEmoji;
+ (id)GenderEmoji;
+ (id)NatureEmoji;
+ (BOOL)_isGenderEmoji:(id)a0;
+ (id)ObjectsEmoji;
+ (id)PrepopulatedEmoji;
+ (id)SkinToneEmoji;
+ (id)ProfessionEmoji;
+ (id)ActivityEmoji;
+ (id)CoupleMultiSkinToneEmoji;
+ (id)ExtendedCoupleMultiSkinToneEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)MultiPersonFamilySkinToneEmoji;
+ (id)NoneVariantEmoji;
+ (id)PeopleEmoji;
+ (id)ProfessionWithoutSkinToneEmoji;
+ (id)SymbolsEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)_baseLocalizationKeyForIdentifier:(id)a0;
+ (BOOL)_isBaseHandshakeOrHandshakeWithSkintonesEmoji:(id)a0;
+ (BOOL)_isComposedCoupleMultiSkinToneEmoji:(id)a0;
+ (BOOL)_isDingbatsVariantEmoji:(id)a0;
+ (BOOL)_isFlagEmoji:(id)a0;
+ (BOOL)_isHandholdingCoupleEmoji:(id)a0;
+ (BOOL)_isMultiPersonFamilySkinToneEmoji:(id)a0;
+ (BOOL)_isNoneVariantEmoji:(id)a0;
+ (BOOL)_isProfessionEmoji:(id)a0;
+ (BOOL)_isSkinToneEmoji:(id)a0;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)extraFlagsForCountryCode:(id)a0;
+ (id)flagEmojiCountryCodesCommon;
+ (void)insertToSortedCountries:(id)a0 withAdditionalFlags:(id)a1;
+ (id)insertionFlagsForCountryCodes:(id)a0 inSortedCountryCodes:(id)a1;
+ (id)localizedRecentsDescription;
+ (id)localizedSkinToneEmojiDescription;
+ (id)stringToRegionalIndicatorString:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)emojiTokensForLocaleData:(id)a0;

@end
