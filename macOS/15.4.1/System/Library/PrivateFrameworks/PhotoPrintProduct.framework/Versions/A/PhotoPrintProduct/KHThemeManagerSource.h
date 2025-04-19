@class NSURL, KHThemeManager, NSString;

@interface KHThemeManagerSource : NSObject <KHThemeManagerSource>

@property (retain, nonatomic) NSURL *sourceURL;
@property (weak, nonatomic) KHThemeManager *manager;
@property (readonly, nonatomic) BOOL sourceIsLocal;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)bundleForTheme:(id)a0;
- (id)URLForTheme:(id)a0;
- (id)URLForThemePreview:(id)a0;
- (id)allThemeProviders;
- (id)bundleForThemePreview:(id)a0;
- (id)categoriesForThemeProvider:(id)a0;
- (id)descriptionForThemeProvider:(id)a0;
- (id)fetchThemeProvidersForProductCodes:(id)a0;
- (id)initWithSourceURL:(id)a0 manager:(id)a1;
- (BOOL)isThemeLocal:(id)a0;
- (BOOL)isThemePreviewLocal:(id)a0;
- (BOOL)isThemePreviewValid:(id)a0;
- (BOOL)isThemeValid:(id)a0;
- (id)localThemeProviders;
- (void)prepareSourceWithCompletionBlock:(id /* block */)a0;
- (id)prepareThemeBundleForUse:(id)a0 completionHandler:(id /* block */)a1;
- (id)prepareThemeBundlePreviewsForUse:(id)a0 completionHandler:(id /* block */)a1;
- (id)prepareThemePreviewsForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)prepareThemesForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)productCodesForThemeProvider:(id)a0;
- (id)remoteThemeProviders;
- (BOOL)sourceIsAvailable;
- (id)titleForThemeProvider:(id)a0;

@end
