@class FCOfflineDownloadsConfiguration, NSString, FCThreadSafeMutableArray, NSObject;
@protocol OS_dispatch_queue, FCContentContext;

@interface FCOfflineRecipeFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    NSString *_recipeID;
    FCOfflineDownloadsConfiguration *_config;
    FCThreadSafeMutableArray *_resultInterestTokens;
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
- (id)initWithContext:(id)a0 recipeID:(id)a1;

@end
