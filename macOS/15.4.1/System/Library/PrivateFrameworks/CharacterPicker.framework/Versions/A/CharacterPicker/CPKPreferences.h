@class EMFEmojiPreferences, CPKDefaultDataSource;

@interface CPKPreferences : NSObject {
    CPKDefaultDataSource *_defaultSource;
    EMFEmojiPreferences *_emojiPreference;
}

+ (id)sharedPreferences;

- (void)dealloc;
- (id)init;
- (id)stateInfo;
- (id)emojiPreference;
- (void)_characterViewerPrefsChanged:(id)a0;
- (id)_convertXPCCategoryDataDict:(id)a0;
- (id)_identifierOfDataSource:(id)a0;
- (void)_loadRecentsAndFavoritesForDataSource:(id)a0 recentsOnly:(BOOL)a1 asDictionaryNotAsEntity:(BOOL)a2 callAsync:(BOOL)a3 usingBlock:(id /* block */)a4;
- (void)_localeInfoUpdatedExternally:(id)a0;
- (void)clearRecentStrings;
- (id)defaultDataSource;
- (void)didDisplaySkinToneHelp;
- (id)favoritesOfDataSourceSync:(id)a0;
- (void)loadCategoryData:(id)a0 usingBlock:(id /* block */)a1;
- (id)loadEmojiCategoryData:(id)a0;
- (void)loadRecentsAndFavoritesForDataSource:(id)a0 usingBlock:(id /* block */)a1;
- (void)recentsAndFavoritesForDataSource:(id)a0 usingBlock:(id /* block */)a1;
- (void)recentsForDataSource:(id)a0 usingBlock:(id /* block */)a1;
- (id)recentsOfDataSourceSync:(id)a0;
- (void)saveStateInfo:(id)a0;
- (void)setFavorites:(id)a0 ofDataSource:(id)a1;
- (void)setRecentString:(id)a0;
- (void)setUserTemporaryParam:(id)a0 forKey:(id)a1 expire:(double)a2;
- (id)userTemporaryParamForKey:(id)a0;

@end
