@class NSProgress, NSError;

@interface VectorSearch.VSKSwiftClientWrapper : NSObject {
    void /* unknown type, empty encoding */ wrappedClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)warmup;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (void)cooldown;
- (id)countWithAttributeFilters:(id)a0 error:(id *)a1;
- (void)rebuildWithProgress:(NSProgress *)a0 checkCancellationIntervalInMilliseconds:(unsigned long long)a1 shouldCancel:(BOOL (^)(void))a2 completionHandler:(void (^)(NSError *))a3;
- (id)searchByBatch:(id)a0 stringIdentifiers:(id)a1 attributeFilters:(id)a2 limit:(long long)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(long long)a6 batchSize:(id)a7 numConcurrentReaders:(long long)a8 error:(id *)a9;
- (void)warmupWithNumConcurrentReaders:(long long)a0;
- (id)countAndReturnError:(id *)a0;
- (BOOL)deleteAllAndReturnError:(id *)a0;
- (id)deleteWithIdentifiers:(id)a0 error:(id *)a1;
- (id)deleteWithStringIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)dropAndReturnError:(id *)a0;
- (id)embeddingCountAndReturnError:(id *)a0;
- (id)getAssetsWithIdentifiers:(id)a0 attributeFilters:(id)a1 pagination:(id)a2 includeVectors:(BOOL)a3 error:(id *)a4;
- (id)getIdentifiersWithApplyingFilters:(id)a0 error:(id *)a1;
- (id)getStatisticsAndReturnError:(id *)a0;
- (id)getStringIdentifiedAssetsWithIdentifiers:(id)a0 attributeFilters:(id)a1 pagination:(id)a2 includeVectors:(BOOL)a3 error:(id *)a4;
- (id)getStringIdentifiersWithApplyingFilters:(id)a0 error:(id *)a1;
- (id)insertWithAssets:(id)a0 error:(id *)a1;
- (BOOL)rebuildAndReturnError:(id *)a0;
- (id)searchByBatch:(id)a0 identifiers:(id)a1 attributeFilters:(id)a2 limit:(long long)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(long long)a6 batchSize:(id)a7 numConcurrentReaders:(long long)a8 error:(id *)a9;
- (id)searchByVector:(id)a0 identifiers:(id)a1 attributeFilters:(id)a2 limit:(long long)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(long long)a6 batchSize:(id)a7 numConcurrentReaders:(long long)a8 error:(id *)a9;
- (id)searchByVector:(id)a0 stringIdentifiers:(id)a1 attributeFilters:(id)a2 limit:(long long)a3 fullScan:(BOOL)a4 includePayload:(BOOL)a5 numberOfProbes:(long long)a6 batchSize:(id)a7 numConcurrentReaders:(long long)a8 error:(id *)a9;

@end
