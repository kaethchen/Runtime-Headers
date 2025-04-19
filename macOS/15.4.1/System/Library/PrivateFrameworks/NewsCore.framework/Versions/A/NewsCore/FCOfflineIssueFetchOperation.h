@class FCOfflineDownloadsConfiguration, NSString, FCThreadSafeMutableArray, NSObject, FCCachePolicy;
@protocol OS_dispatch_queue, FCANFHelper, FCContentContext;

@interface FCOfflineIssueFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    id<FCANFHelper> _ANFHelper;
    NSString *_issueID;
    FCOfflineDownloadsConfiguration *_config;
    FCThreadSafeMutableArray *_resultInterestTokens;
    double _progress;
    FCCachePolicy *_issueRecordCachePolicy;
}

@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)resetForRetry;
- (BOOL)validateOperation;
- (id)initWithContext:(id)a0 ANFHelper:(id)a1 issue:(id)a2;
- (id)initWithContext:(id)a0 ANFHelper:(id)a1 issueID:(id)a2;

@end
