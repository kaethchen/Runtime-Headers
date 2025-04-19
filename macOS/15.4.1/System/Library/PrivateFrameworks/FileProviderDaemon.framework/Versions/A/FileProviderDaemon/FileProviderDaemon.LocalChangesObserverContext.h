@interface FileProviderDaemon.LocalChangesObserverContext : NSObject <NSFileProviderChangeObserver> {
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ localFileEnumerator;
    void /* unknown type, empty encoding */ shouldUpdateFileIDInGenstore;
    void /* unknown type, empty encoding */ fsChangesEnumerator;
}

@property (nonatomic, readonly) long long suggestedBatchSize;

- (id)init;
- (void).cxx_destruct;
- (void)didUpdateItems:(id)a0;
- (void)didDeleteItemsWithIdentifiers:(id)a0;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)a0 moreComing:(BOOL)a1;
- (void)finishEnumeratingWithError:(id)a0;

@end
