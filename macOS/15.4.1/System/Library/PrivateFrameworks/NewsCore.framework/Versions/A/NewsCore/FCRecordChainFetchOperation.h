@class NSMutableArray, NSArray, NSDictionary, FCHeldRecords, FCEdgeCacheHint, FCCachePolicy, NSMutableSet;
@protocol FCContentContext;

@interface FCRecordChainFetchOperation : FCOperation {
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    NSDictionary *_pbRecordTypesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSMutableSet *_actualTopLevelRecordIDs;
    NSMutableSet *_skippedTopLevelRecordIDs;
    NSMutableSet *_missingCachedOnlyTopLevelRecordIDs;
    NSDictionary *_resultHeldRecordsByType;
    NSMutableArray *_mutableNetworkEvents;
}

@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *topLevelRecordIDs;
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType;
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordID;
@property (copy, nonatomic) id /* block */ dynamicCachePolicyBlock;
@property (nonatomic) BOOL shouldReturnErrorWhenSomeRecordsMissing;
@property (nonatomic) BOOL shouldFailOnLimitExceededError;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (retain, nonatomic) NSArray *additionalRecordSources;
@property (nonatomic) int networkEventType;
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id /* block */ networkActivityBlock;
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence;
@property (copy, nonatomic) id /* block */ cachedRecordsLookupBlock;
@property (copy, nonatomic) id /* block */ recordChainCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end
