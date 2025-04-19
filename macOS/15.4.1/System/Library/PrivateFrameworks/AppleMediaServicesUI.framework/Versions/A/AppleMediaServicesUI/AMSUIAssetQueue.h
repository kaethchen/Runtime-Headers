@class NSCountedSet, NSMutableDictionary, NSString, NSOperationQueue;

@interface AMSUIAssetQueue : NSObject

@property (retain) NSOperationQueue *underlyingQueue;
@property (retain) NSMutableDictionary *pendingOperations;
@property (retain) NSCountedSet *priorityCounts;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (retain) NSString *name;
@property long long qualityOfService;
@property long long maxConcurrentOperationCount;
@property (getter=isSuspended) BOOL suspended;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_prepareToAddOperation:(id)a0 withKey:(id)a1;
- (void)_addObserverForOperation:(id)a0;
- (void)_decrementCountAt:(long long)a0;
- (void)_didBeginFetchingAssets;
- (void)_didFetchAllAssetsAtPriority:(long long)a0;
- (void)_didFetchAssetWithKey:(id)a0 producingImage:(id)a1 orError:(id)a2;
- (void)_didFinishFetchingAllAssets;
- (void)_incrementCountAt:(long long)a0;
- (void)_operationDidCancel:(id)a0;
- (void)_operationDidChangePriority:(id)a0;
- (void)_removeObserverForOperation:(id)a0;
- (void)addOperation:(id)a0 withKey:(id)a1;
- (id)operationWithKey:(id)a0;

@end
