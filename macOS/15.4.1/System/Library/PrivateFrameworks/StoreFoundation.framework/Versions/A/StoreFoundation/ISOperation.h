@class NSString, NSError, NSLock, NSRunLoop, ISServiceProxy, SSOperationProgress, ISStoreAccount, ISStoreClient;
@protocol ISOperationDelegate;

@interface ISOperation : NSOperation {
    NSLock *_lock;
    SSOperationProgress *_progress;
    ISServiceProxy *_serviceProxy;
    NSLock *_serviceProxyLock;
    ISStoreAccount *_storeAccount;
    NSLock *_storeAccountLock;
}

@property (retain) NSRunLoop *operationRunLoop;
@property (retain) ISOperation *subOperation;
@property (readonly, nonatomic) SSOperationProgress *progress;
@property (retain) ISOperation *parentOperation;
@property (weak) id<ISOperationDelegate> delegate;
@property (readonly) ISServiceProxy *serviceProxy;
@property (retain) ISStoreClient *storeClient;
@property (retain, nonatomic) ISStoreAccount *storeAccount;
@property void *operationContext;
@property (readonly) NSString *uniqueKey;
@property (readonly) id xpcReplyObject;
@property (retain) NSError *error;
@property BOOL success;
@property (readonly) long long progressWeight;
@property (readonly) double earlyTimeRemainingEstimate;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ progressHandler;
@property int requiredBagType;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)cancel;
- (void)main;
- (void)run:(BOOL)a0;
- (id)initWithStoreClient:(id)a0;
- (BOOL)runSubOperation:(id)a0 returningError:(id *)a1;
- (void)_sendErrorToDelegate:(id)a0;
- (void)_sendSuccessToDelegate;
- (void)_failAfterException;
- (BOOL)_loadRequredBagReturningError:(id *)a0;
- (void)_main:(BOOL)a0;
- (int)runRunLoopUntilStopped;
- (BOOL)runSyncReturningError:(id *)a0;
- (void)sendProgressToDelegate;
- (BOOL)showDialogInSeperateProcessForOperation:(id)a0;
- (void)stopRunLoop;
- (id)urlForURLBagKey:(id)a0;
- (id)urlForURLBagKey:(id)a0 dsID:(id)a1;
- (id)valueForURLBagKey:(id)a0;
- (id)valueForURLBagKey:(id)a0 dsID:(id)a1;

@end
