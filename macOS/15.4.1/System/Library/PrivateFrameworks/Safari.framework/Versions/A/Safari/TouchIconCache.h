@interface TouchIconCache : WBSTouchIconCache

@property (class, readonly, nonatomic) TouchIconCache *sharedCache;

+ (id)_deprecatedImageDirectoryURL;
+ (id)_generateDefaultFavoritesIcon;
+ (id)_imageDirectoryURL;
+ (id)_monogramConfiguration;
+ (id)_paddedUncoloredFavoritesGlyph;
+ (void)deleteDeprecatedCacheDirectory;

- (id)_didGenerateResponse:(id)a0 forRequest:(id)a1;
- (id)_operationWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithImageDirectoryURL:(id)a0;

@end
