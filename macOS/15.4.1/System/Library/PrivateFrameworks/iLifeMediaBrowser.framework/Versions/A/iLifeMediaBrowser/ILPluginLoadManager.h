@class NSLock;

@interface ILPluginLoadManager : NSObject {
    NSLock *_stateLock;
    int _loadState;
    BOOL _loadRequestPending;
    BOOL _cancelLoadRequestPending;
    BOOL _autoReloadEnabled;
    BOOL _needsReload;
    BOOL _loadDataCalled;
}

- (id)init;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (int)loadState;
- (BOOL)isUnloaded;
- (void)setNeedsReload:(BOOL)a0;
- (BOOL)needsReload;
- (BOOL)isAutoReloadEnabled;
- (BOOL)isCancelLoadRequestPending;
- (BOOL)isLoadRequestPending;
- (BOOL)loadDataCalled;
- (void)setAutoReloadEnabled:(BOOL)a0;
- (void)setCancelLoadRequestPending:(BOOL)a0;
- (void)setLoadDataCalled:(BOOL)a0;
- (void)setLoadRequestPending:(BOOL)a0;
- (void)setLoadState:(int)a0;

@end
