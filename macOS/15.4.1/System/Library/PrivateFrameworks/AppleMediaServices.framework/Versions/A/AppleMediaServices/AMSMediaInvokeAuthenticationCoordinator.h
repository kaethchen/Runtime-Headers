@class AMSPromise, NSMutableArray;

@interface AMSMediaInvokeAuthenticationCoordinator : NSObject

@property (class, readonly) AMSMediaInvokeAuthenticationCoordinator *sharedInstance;

@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } queueLock;
@property (readonly) NSMutableArray *invokeAuthQueue;
@property (retain) AMSPromise *inflightAuthPromise;

- (id)init;
- (void).cxx_destruct;
- (void)_finishQueueWithAuthResult:(id)a0 queuedObjects:(id)a1;
- (id)addToQueueAndPerformAuthFromResponseIfNeeded:(id)a0 taskInfo:(id)a1;
- (id)performAuthFromResponse:(id)a0 taskInfo:(id)a1;
- (void)updateQueueIfNeeded;

@end
