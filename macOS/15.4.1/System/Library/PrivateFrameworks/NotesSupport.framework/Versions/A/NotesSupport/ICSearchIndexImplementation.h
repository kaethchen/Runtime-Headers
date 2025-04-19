@class NSString, CSSearchableIndex;

@interface ICSearchIndexImplementation : NSObject <ICSearchIndex>

@property (retain, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginIndexBatch;
- (void)endIndexBatchWithClientState:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)slowFetchAttributes:(id)a0 protectionClass:(id)a1 bundleID:(id)a2 identifiers:(id)a3 completionHandler:(id /* block */)a4;

@end
