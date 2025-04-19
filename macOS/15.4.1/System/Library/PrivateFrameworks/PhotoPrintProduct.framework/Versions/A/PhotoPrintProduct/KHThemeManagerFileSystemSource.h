@interface KHThemeManagerFileSystemSource : KHThemeManagerSource {
    unsigned long long _sourceType;
}

- (unsigned long long)sourceType;
- (id)initWithThemeSourceURL:(id)a0 manager:(id)a1;
- (id)URLForTheme:(id)a0;
- (id)URLForThemePreview:(id)a0;
- (id)_themeProvidersMatchingProductCodes:(id)a0 error:(id *)a1;
- (id)allThemeProviders;
- (id)categoriesForThemeProvider:(id)a0;
- (id)fetchThemeProvidersForProductCodes:(id)a0;
- (id)initWithPreviewSourceURL:(id)a0 manager:(id)a1;
- (BOOL)isThemeLocal:(id)a0;
- (BOOL)isThemePreviewLocal:(id)a0;
- (BOOL)isThemePreviewValid:(id)a0;
- (BOOL)isThemeValid:(id)a0;
- (id)localThemeProviders;
- (id)prepareThemePreviewsForProvider:(id)a0 parentProgress:(id)a1 completionHandler:(id /* block */)a2;
- (id)prepareThemesForProvider:(id)a0 parentProgress:(id)a1 completionHandler:(id /* block */)a2;
- (id)productCodesForThemeProvider:(id)a0;
- (id)remoteThemeProviders;
- (BOOL)sourceIsAvailable;
- (BOOL)sourceIsLocal;

@end
