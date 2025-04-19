@class AMSPromise;

@interface AMSUIAssetFetchOperation : NSOperation

@property (getter=isLowLatency) BOOL lowLatency;
@property (retain) AMSPromise *operationPromise;

- (void).cxx_destruct;
- (void)setQueuePriority:(long long)a0;
- (void)cancel;
- (void)main;
- (void)_finishWithImage:(id)a0 error:(id)a1;

@end
