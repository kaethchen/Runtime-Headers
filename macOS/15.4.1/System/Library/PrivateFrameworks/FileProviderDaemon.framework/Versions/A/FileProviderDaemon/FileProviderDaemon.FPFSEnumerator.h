@class NSString;

@interface FileProviderDaemon.FPFSEnumerator : NSObject <FPXEnumerator> {
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ backend;
    void /* unknown type, empty encoding */ vfsItemID;
    void /* unknown type, empty encoding */ fpItemID;
    void /* unknown type, empty encoding */ extensionEnumerator;
    void /* unknown type, empty encoding */ lifetimeExtender;
    void /* unknown type, empty encoding */ keepAlive;
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ buildAndFilterAppLibraries;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ previousAnchor;
    void /* unknown type, empty encoding */ _currentAnchor;
    void /* unknown type, empty encoding */ changedItemsByID;
    void /* unknown type, empty encoding */ deletedItemsIDs;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)currentSyncAnchorWithCompletion:(id /* block */)a0;
- (void)enumerateChangesFromToken:(id)a0 suggestedBatchSize:(long long)a1 reply:(id /* block */)a2;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 reply:(id /* block */)a2;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 upTo:(long long)a2 reply:(id /* block */)a3;
- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)a0;

@end
