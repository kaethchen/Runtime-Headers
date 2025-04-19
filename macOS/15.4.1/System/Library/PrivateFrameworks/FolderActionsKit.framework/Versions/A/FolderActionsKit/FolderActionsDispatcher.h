@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FolderActionsDispatcher : NSObject

@property (retain) NSMutableArray *frontEnds;
@property (retain) NSMutableArray *folderActions;
@property BOOL folderActionsEnabled;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) NSMutableArray *observedFrontEnds;

+ (id)sharedDispatcher;
+ (void)_enableFolderActionsDispatcherLaunchDJobIfNeeded;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addFolderAction:(id)a0;
- (void)enableFolderActions;
- (void)removeFolderActionWithURL:(id)a0;
- (void)removeFrontEnd:(id)a0;
- (void)addFolderActions:(id)a0;
- (void)addFrontEnd:(id)a0;
- (void)addScript:(id)a0 toFolderWithURL:(id)a1;
- (void)addScriptWithURL:(id)a0 toFolderWithURL:(id)a1;
- (void)addScripts:(id)a0 toFolderWithURL:(id)a1;
- (void)disableFolderActionWithURL:(id)a0;
- (void)disableScriptWithURL:(id)a0 forFolderWithURL:(id)a1;
- (void)enableFolderActionWithURL:(id)a0;
- (void)enableFolderActionWithURL:(id)a0 runOnUnprocessedItems:(BOOL)a1;
- (void)enableFolderActionsAndRunOnUnprocessedItems;
- (void)enableScriptWithURL:(id)a0 forFolderWithURL:(id)a1;
- (BOOL)hasFolderActionWithURL:(id)a0;
- (void)removeFolderActionAtIndex:(unsigned long long)a0;
- (void)removeFolderActionsAtIndexes:(id)a0;
- (void)removeScriptAtIndex:(unsigned long long)a0 fromFolderWithURL:(id)a1;
- (void)removeScriptWithURL:(id)a0 fromFolderWithURL:(id)a1;
- (void)removeScriptsAtIndexes:(id)a0 fromFolderWithURL:(id)a1;
- (void)seriallyDispatchBlock:(id /* block */)a0;
- (void)setName:(id)a0 ofFolderActionWithURL:(id)a1;
- (void)setURL:(id)a0 ofFolderActionWithURL:(id)a1;
- (void)setURL:(id)a0 ofScriptWithURL:(id)a1 forFolderActionWithURL:(id)a2;
- (void)startObservingFrontEnd:(id)a0;
- (void)stopObservingFrontEnd:(id)a0;
- (void)updateFolderActionsInfo:(id)a0;

@end
