@class NSString;

@interface CPKDefaultDataSource : NSObject <CPKDataSource> {
    id _contents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)state;
+ (void)setState:(id)a0;
+ (id)recents;
+ (id)favorites;
+ (struct { long long x0; id x1; id x2; long long x3; id x4; id x5; id x6; } *)_classGlobalPtr;
+ (id)_dataCategories;
+ (void)_cacheDataArrayOnlyFastData:(BOOL)a0 usingBlock:(id /* block */)a1;
+ (void **)_classGlobalBufferPtr;
+ (id)_expandNestedDataArray:(id)a0;
+ (id)_prefixCategories;
+ (BOOL)_prepareCategoriesWithFastData;
+ (void)changeActiveCategories;
+ (id)characterPaletteLaunchParamForKey:(id)a0;
+ (void)clearRecentStrings;
+ (id)copySkintoneHelpViewControllerForEmoji:(id)a0 usingBlock:(id /* block */)a1;
+ (void)didDisplaySkinToneHelp;
+ (void)emojiTokensForSearchString:(id)a0 inLanguages:(id)a1 maxResults:(unsigned long long)a2 usingBlock:(id /* block */)a3;
+ (long long)indexInArray:(id)a0 fromStandardItemIndex:(long long)a1;
+ (id)lastUsedSkinToneEmojiForEmoji:(id)a0;
+ (void)loadCategoryData:(id)a0 usingBlock:(id /* block */)a1;
+ (id)loadEmojiCategoryData:(id)a0;
+ (void)loadRecentsAndFavoritesUsingBlock:(id /* block */)a0;
+ (void)loadRecentsUsingBlock:(id /* block */)a0;
+ (id)localizedCharacterName:(id)a0;
+ (id)normalizedSkinToneString:(id)a0;
+ (struct __EmojiLocaleDataWrapper { } *)preferredEmojiLocale;
+ (id)preferredLanguagesForSearch;
+ (void)setCharacterPaletteLaunchParam:(id)a0 forKey:(id)a1;
+ (void)setFavorites:(id)a0;
+ (void)setRecentString:(id)a0;
+ (id)sharedEmojiPreference;
+ (id)standardItemArrayFromArray:(id)a0;

- (void)dealloc;
- (void)reset;
- (BOOL)_hasCachedData;
- (long long)numberOfCategories;
- (BOOL)_cacheDecomposedEntityDataWithCheckGlyph:(BOOL)a0 forceUpdate:(BOOL)a1;
- (id)_entityArrayInCategory:(long long)a0;
- (BOOL)_shouldOmitCharacter:(id)a0;
- (id)characterAtIndex:(long long)a0 inCategory:(long long)a1;
- (id)characterFromIdentifier:(id)a0;
- (unsigned long long)contentTypeForIndex:(unsigned long long)a0;
- (id)descriptionForCategory:(long long)a0;
- (BOOL)isEmojiCategory:(long long)a0;
- (BOOL)isEmojiOnlyDataSource;
- (BOOL)isStickersCategory:(long long)a0;
- (BOOL)needsSecondaryDataSourcePreparation;
- (long long)numberOfCharactersInCategory:(long long)a0;
- (void)prepareDataOnlyFastData:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)prepareDataUsingBlock:(id /* block */)a0;
- (void)prepareOnlyFastDataUsingBlock:(id /* block */)a0;
- (void)secondaryDataSourcePreparationUsingBlock:(id /* block */)a0;
- (id)storageIdentifier;
- (id)titleForCategory:(long long)a0;

@end
