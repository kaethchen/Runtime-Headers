@class FCOfflineDownloadsConfiguration, NSString, FCThreadSafeMutableArray, NSObject, FCCachePolicy;
@protocol OS_dispatch_queue, FCContentContext;

@interface FCOfflinePuzzleFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    NSString *_puzzleID;
    FCOfflineDownloadsConfiguration *_config;
    FCThreadSafeMutableArray *_resultInterestTokens;
    double _progress;
    FCCachePolicy *_puzzleRecordCachePolicy;
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
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;
- (id)initWithContext:(id)a0 puzzle:(id)a1;
- (id)initWithContext:(id)a0 puzzleID:(id)a1;

@end
