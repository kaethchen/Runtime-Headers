@class NSString, FCThreadSafeMutableArray, NSObject;
@protocol OS_dispatch_queue, FCContentContext;

@interface FCOfflineAudioFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    NSString *_articleID;
    FCThreadSafeMutableArray *_resultInterestTokens;
}

@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)initWithContext:(id)a0 articleID:(id)a1;

@end
