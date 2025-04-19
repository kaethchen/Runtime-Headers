@class NSMutableDictionary;

@interface SAAppSizeBreakdownList : NSObject

@property (retain) NSMutableDictionary *appSizeBreakdownList;

- (id)init;
- (void).cxx_destruct;
- (id)generateDictionary;
- (void)removeBundleId:(id)a0;
- (void)addPath:(id)a0 fixedPath:(BOOL)a1 size:(unsigned long long)a2 bundleId:(id)a3;
- (void)addPluginSize:(unsigned long long)a0 bundleId:(id)a1;
- (void)addTagSize:(unsigned long long)a0 bundleId:(id)a1;
- (void)mergeBundleId:(id)a0 withBundleId:(id)a1 newBundleId:(id)a2;
- (void)updateBundleId:(id)a0 newId:(id)a1;
- (void)updatePath:(id)a0 cacheSize:(unsigned long long)a1 bundleId:(id)a2;
- (void)updatePath:(id)a0 cloneSize:(unsigned long long)a1 bundleId:(id)a2;
- (void)updateTagsWithCloneSize:(unsigned long long)a0 bundleId:(id)a1;

@end
