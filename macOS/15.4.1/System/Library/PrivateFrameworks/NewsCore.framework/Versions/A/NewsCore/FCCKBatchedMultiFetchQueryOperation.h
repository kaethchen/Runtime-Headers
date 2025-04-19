@class NSArray, NSDictionary, FCThreadSafeMutableArray, FCEdgeCacheHint, FCCKContentDatabase, FCThreadSafeMutableSet;

@interface FCCKBatchedMultiFetchQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    unsigned long long _maxBatchSize;
    unsigned long long _maxParallelBatches;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    long long _optimizationPolicy;
    id /* block */ _networkActivityBlock;
    id /* block */ _recordHandler;
    id /* block */ _batchCompletionHandler;
    id /* block */ _queryCompletionHandler;
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableSet *_resultMissingRecordIDs;
    FCThreadSafeMutableArray *_allErrors;
    FCThreadSafeMutableArray *_allNetworkEvents;
}

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end
