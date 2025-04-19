@class FCFeedDatabase, NSArray, FCEdgeCacheHint, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject, NSMutableSet, FCHeldRecords;
@protocol FCCoreConfiguration, NSCopying, FCContentContext;

@interface FCFeedRequestOperation : FCOperation {
    NSMutableArray *_mutableNetworkEvents;
    NSSet *_nonExpendableFeedIDs;
    NSDictionary *_feedRequestsByFeedID;
    NSDictionary *_databaseLookupsByFeedID;
    unsigned long long _queryBudget;
    NSMutableSet *_progressReportedFeedItems;
    NSMutableDictionary *_resultFeedResponses;
    FCHeldRecords *_resultHeldArticleRecords;
    FCHeldRecords *_resultHeldTagRecords;
    FCHeldRecords *_resultHeldIssueRecords;
}

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCFeedDatabase *feedDatabase;
@property (copy, nonatomic) NSObject<NSCopying> *prewarmRequestKey;
@property (copy, nonatomic) NSArray *feedRequests;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSArray *feedTransformations;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) unsigned long long expectedNetworkEventCount;
@property (readonly, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ requestCompletionHandler;
@property (copy, nonatomic) id /* block */ requestCompletionHandlerWithHeldRecords;

+ (id)feedRequestContentEnvironmentTokenWithContext:(id)a0;
+ (void)streamFeedItemsWithContext:(id)a0 feedRequests:(id)a1 feedItemHandler:(id /* block */)a2 networkEventHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)resetForRetry;
- (BOOL)validateOperation;

@end
