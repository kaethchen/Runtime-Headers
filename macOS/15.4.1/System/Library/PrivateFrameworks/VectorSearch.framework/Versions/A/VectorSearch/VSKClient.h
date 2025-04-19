@class _TtC12VectorSearch21VSKSwiftClientWrapper;

@interface VSKClient : NSObject {
    _TtC12VectorSearch21VSKSwiftClientWrapper *clientWrapper;
}

- (void).cxx_destruct;
- (void)warmup;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (void)cooldown;
- (id)countWithError:(id *)a0;
- (id)countWithAttributeFilters:(id)a0 error:(id *)a1;
- (id)deleteStringIdentifiers:(id)a0 error:(id *)a1;
- (id)embeddingCountWithError:(id *)a0;
- (id)insertAssets:(id)a0 error:(id *)a1;
- (void)rebuildWithProgress:(id)a0 checkCancellationIntervalInMilliseconds:(unsigned long long)a1 shouldCancel:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)searchByBatch:(id)a0 stringIdentifiers:(id)a1 attributeFilters:(id)a2 limit:(int)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(id)a6 batchSize:(id)a7 numConcurrentReaders:(id)a8 error:(id *)a9;
- (id)statisticsWithError:(id *)a0;
- (id)stringIdentifiedAssetsWithIdentifiers:(id)a0 attributeFilters:(id)a1 pagination:(id)a2 error:(id *)a3;
- (void)warmupWithNumConcurrentReaders:(long long)a0;
- (id)assetsWithIdentifiers:(id)a0 attributeFilters:(id)a1 pagination:(id)a2 error:(id *)a3;
- (id)assetsWithIdentifiers:(id)a0 attributeFilters:(id)a1 pagination:(id)a2 includeVectors:(BOOL)a3 error:(id *)a4;
- (id)countWithError:(id)a0 error:(id *)a1;
- (BOOL)deleteAllWithError:(id *)a0;
- (id)deleteIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)dropWithError:(id *)a0;
- (id)identifiersApplyingFilters:(id)a0 error:(id *)a1;
- (BOOL)rebuildWithError:(id *)a0;
- (id)searchByBatch:(id)a0 attributeFilters:(id)a1 limit:(int)a2 batchSize:(id)a3 numConcurrentReaders:(id)a4 error:(id *)a5;
- (id)searchByBatch:(id)a0 attributeFilters:(id)a1 limit:(int)a2 includePayload:(BOOL)a3 numberOfProbes:(id)a4 batchSize:(id)a5 numConcurrentReaders:(id)a6 error:(id *)a7;
- (id)searchByBatch:(id)a0 identifiers:(id)a1 attributeFilters:(id)a2 limit:(int)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(id)a6 batchSize:(id)a7 numConcurrentReaders:(id)a8 error:(id *)a9;
- (id)searchByVector:(id)a0 attributeFilters:(id)a1 limit:(int)a2 error:(id *)a3;
- (id)searchByVector:(id)a0 attributeFilters:(id)a1 limit:(int)a2 includePayload:(BOOL)a3 numberOfProbes:(id)a4 batchSize:(id)a5 numConcurrentReaders:(id)a6 error:(id *)a7;
- (id)searchByVector:(id)a0 identifiers:(id)a1 attributeFilters:(id)a2 limit:(int)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(id)a6 batchSize:(id)a7 numConcurrentReaders:(id)a8 error:(id *)a9;
- (id)searchByVector:(id)a0 stringIdentifiers:(id)a1 attributeFilters:(id)a2 limit:(int)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(id)a6 batchSize:(id)a7 numConcurrentReaders:(id)a8 error:(id *)a9;
- (id)stringIdentifiedAssetsWithIdentifiers:(id)a0 attributeFilters:(id)a1 pagination:(id)a2 includeVectors:(BOOL)a3 error:(id *)a4;
- (id)stringIdentifiersApplyingFilters:(id)a0 error:(id *)a1;

@end
