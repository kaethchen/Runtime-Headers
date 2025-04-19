@interface UAFPreinstalledAssetsCache : NSObject

+ (void)invalidateCache;
+ (BOOL)isEnabled;
+ (id)queryAssetType:(id)a0;
+ (id)assetSpecifier:(id)a0 assetSetConfiguration:(id)a1;
+ (id)assetSpecifiersFromRoots:(id)a0;
+ (BOOL)checkForAssetTypePath:(id)a0;
+ (void)initCache:(id)a0;
+ (void)populateCache:(id)a0;
+ (id)summary:(id)a0;

@end
