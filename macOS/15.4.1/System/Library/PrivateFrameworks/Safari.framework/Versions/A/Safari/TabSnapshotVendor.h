@class NSString, NSObject;
@protocol OS_dispatch_queue, TabSnapshotImageStorage;

@interface TabSnapshotVendor : NSObject <TabSnapshotVending> {
    id /* block */ _storageInitializationBlock;
    id /* block */ _failureRecoveryBlock;
    id<TabSnapshotImageStorage> _storage;
    long long _storeInitializationStatus;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_apiQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_activateAPIQueue;
- (void)_attemptRecoveryFromStoreInitializationFailureWithStatus:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_fetchCachedSnapshotWithUniqueIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_generateSnapshotWithInformationProvider:(id)a0 uniqueIdentifier:(id)a1 shouldPersist:(BOOL)a2 width:(double)a3 completionHandler:(id /* block */)a4;
- (void)_handleFailedInitializationByGoingIntoSafeModeWithCompletionHandler:(id /* block */)a0;
- (void)finalizePendingOperationsBeforeTermination;
- (id)initWithSnapshotStorageInitializationBlock:(id /* block */)a0 failureRecoveryBlock:(id /* block */)a1;
- (void)loadImageWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestTabSnapshotWithInformationProvider:(id)a0 width:(double)a1 completionHandler:(id /* block */)a2;
- (void)setUpWithCompletionHandler:(id /* block */)a0;

@end
