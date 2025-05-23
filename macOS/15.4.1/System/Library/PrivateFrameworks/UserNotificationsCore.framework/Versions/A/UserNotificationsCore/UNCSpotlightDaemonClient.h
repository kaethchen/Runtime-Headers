@class NSHashTable;

@interface UNCSpotlightDaemonClient : NSObject <SpotlightDaemonClient> {
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)searchableItemsDidUpdate:(id)a0 mask:(long long)a1;
- (void)provideDataForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)reindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)reindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 acknowledgementHandler:(id /* block */)a3;

@end
