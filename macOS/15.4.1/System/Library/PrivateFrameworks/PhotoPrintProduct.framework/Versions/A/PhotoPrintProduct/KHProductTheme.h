@interface KHProductTheme : KHModel {
    long long _productId;
    long long _themeId;
}

- (void)dealloc;
- (long long)productId;
- (void)setProductId:(long long)a0;
- (void)cacheProductId:(long long)a0;
- (long long)themeId;
- (void)cacheThemeId:(long long)a0;
- (id)productsForTheme:(id)a0;
- (void)setThemeId:(long long)a0;
- (id)themesForProduct:(id)a0;

@end
