@class NSMutableDictionary;

@interface ABDataSourcePluginIndex : NSObject {
    NSMutableDictionary *_bundlesByClass;
    NSMutableDictionary *_infoByClasses;
    BOOL _didIndexPlugins;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)log:(id)a0;
- (id)availablePluginClasses;
- (id)bundleForClassName:(id)a0;
- (id)debugPluginPaths;
- (void)indexPlugins;
- (id)infoForClassName:(id)a0;
- (BOOL)loadBundleForClassName:(id)a0 error:(id *)a1;
- (id)sourceBundlePaths;
- (id)systemPluginPaths;

@end
