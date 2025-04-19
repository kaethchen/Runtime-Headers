@class NSString;

@interface KHThemeLayoutLegacyName : KHModel {
    long long _themeId;
    long long _layoutId;
    NSString *_legacyName;
}

- (void)dealloc;
- (long long)layoutId;
- (void)setLayoutId:(long long)a0;
- (id)legacyName;
- (long long)themeId;
- (void)cacheLayoutId:(long long)a0;
- (void)cacheLegacyName:(id)a0;
- (void)cacheThemeId:(long long)a0;
- (void)setLegacyName:(id)a0;
- (void)setThemeId:(long long)a0;

@end
