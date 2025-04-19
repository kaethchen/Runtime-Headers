@interface KHThemeKeyword : KHModel {
    long long _themeId;
    long long _categoryId;
}

- (void)dealloc;
- (long long)categoryId;
- (void)setCategoryId:(long long)a0;
- (long long)themeId;
- (void)cacheCategoryId:(long long)a0;
- (void)cacheThemeId:(long long)a0;
- (void)setThemeId:(long long)a0;

@end
