@class NSString, NSMutableDictionary, NSURL, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, KHThemeManagerPathSourceProtocol;

@interface KHThemeManager : NSObject <KHThemeManagerPathSourceProtocol> {
    NSMutableDictionary *_themeProviderCache;
    NSMutableSet *_cachedLocalThemeProviders;
    NSObject<OS_dispatch_queue> *_themeManagerQueue;
    NSObject<OS_dispatch_queue> *_themeManagerLocalThemeCacheQueue;
}

@property (readonly) NSURL *delegateThemeManagerStagingPath;
@property (readonly) NSMutableArray *sources;
@property (weak, nonatomic) id<KHThemeManagerPathSourceProtocol> delegate;
@property (readonly, nonatomic) NSURL *bundledThemesURL;
@property (readonly, nonatomic) NSURL *bundledPrintsThemesURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_discoverDelegates;
- (id)allCachedLocalThemeProviders;
- (id)bundleForIdentifier:(id)a0;
- (id)cachedLocalThemeProviderForIdentifier:(id)a0;
- (id)cachedThemeProvidersForProductCode:(id)a0;
- (id)cachedThemeProvidersForProjectType:(long long)a0;
- (id)catalogForProductCodes:(id)a0;
- (id)fetchThemeCatalogs:(id /* block */)a0;
- (void)fetchThemeProvidersForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateAllCachedLocalThemeProviders;
- (id)localThemeProviderForURL:(id)a0 themeIdentifier:(id)a1 andProductCode:(id)a2;
- (void)prepareCatalogsForProjectType:(long long)a0;
- (id)productCodesForProductTypeWithinCachedThemeProviders:(long long)a0;
- (void)resetThemeCatalogs;
- (id)scanForNewThemeCatalogs:(id /* block */)a0;
- (id)watchDirectoriesForThemeManager:(id)a0;

@end
