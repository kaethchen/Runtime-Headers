@class EDMessagePersistence, EDSearchableIndex;

@interface EDSpotlightDaemonClient : NSObject <SpotlightDaemonClient>

@property (retain, nonatomic) EDSearchableIndex *searchableIndex;
@property (retain, nonatomic) EDMessagePersistence *persistence;

- (void).cxx_destruct;
- (void)searchableItemsDidUpdate:(id)a0 mask:(long long)a1;
- (void)provideDataForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)reindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)reindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 acknowledgementHandler:(id /* block */)a3;
- (id)fetchRepresentationForSearchableItemId:(id)a0 typeIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithSearchableIndex:(id)a0 persistence:(id)a1;

@end
