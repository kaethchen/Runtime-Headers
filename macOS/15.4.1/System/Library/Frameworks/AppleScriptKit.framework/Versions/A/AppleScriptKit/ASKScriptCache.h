@class NSMutableDictionary;

@interface ASKScriptCache : NSObject {
    NSMutableDictionary *_scripts;
    NSMutableDictionary *_scriptPaths;
    BOOL _hasLoadedAllScripts;
}

+ (id)scriptWithName:(id)a0 inBundleWithIdentifier:(id)a1;
+ (id)sharedScriptCache;

- (void)dealloc;
- (id)init;
- (void)addScript:(id)a0;
- (void)removeAllScripts;
- (id)scriptWithName:(id)a0;
- (void)addScript:(id)a0 withName:(id)a1;
- (void)addScriptPath:(id)a0 withName:(id)a1;
- (void)loadAllScriptPathsForBundle:(id)a0;
- (void)loadAllScriptsForBundle:(id)a0;
- (void)removeScriptWithName:(id)a0;

@end
