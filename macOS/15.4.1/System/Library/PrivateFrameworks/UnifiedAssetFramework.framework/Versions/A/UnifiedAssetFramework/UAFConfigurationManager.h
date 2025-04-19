@class NSArray, NSMutableDictionary;

@interface UAFConfigurationManager : NSObject

@property (retain, nonatomic) NSArray *baseURLs;
@property (retain, nonatomic) NSMutableDictionary *assetSetCache;

+ (id)defaultManager;
+ (id)getAssetNameFromPath:(id)a0;
+ (id)getConfigurationDirURL:(id)a0;
+ (id)getDeprecatedUsageAliasNameFromPath:(id)a0;

- (void).cxx_destruct;
- (void)invalidateCache;
- (id)initWithURLs:(id)a0;
- (id)getAllAssetSets;
- (id)applySubscriptions:(id)a0;
- (void)assetSetCacheMiss:(id)a0;
- (id)getAssetSet:(id)a0;
- (id)getMinVersion:(id)a0 provider:(id)a1;
- (id)getPrestage:(id)a0;
- (id)getUsageAlias:(id)a0 includeDeprecatedValues:(BOOL)a1;
- (BOOL)isUsageLimitExceeded:(id)a0;
- (id)minVersions:(id)a0;
- (BOOL)shouldApplyFeatureFlags;

@end
