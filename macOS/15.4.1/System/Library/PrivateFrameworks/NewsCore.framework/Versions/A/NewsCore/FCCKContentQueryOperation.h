@class FCEdgeCacheHint, NSArray, NSDictionary, CKQueryCursor, FCCKContentDatabase, CKQuery;

@interface FCCKContentQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    id /* block */ _recordFetchedBlock;
    id /* block */ _queryCompletionBlock;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    long long _optimizationPolicy;
    unsigned long long _queryPriority;
    id /* block */ _networkActivityBlock;
}

@property (copy, nonatomic) NSArray *requestUUIDs;
@property (copy, nonatomic) NSArray *networkEvents;

+ (id)_requestOperationsForQuery:(id)a0 cursor:(id)a1 desiredKeys:(id)a2 resultsLimit:(unsigned long long)a3;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;
- (id)_ckCursorFromQueryResponse:(id)a0;

@end
