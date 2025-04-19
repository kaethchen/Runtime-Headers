@class NSString, NSObservation, NSMutableDictionary, HKCloudSyncObserverStatus, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HKCloudSyncObserverServerInterface, HDCloudSyncManagerObserver, HDCloudSyncCoordinatorObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HKCloudSyncObserverStatus *_status;
    NSObservation *_waitForSyncObservations;
    BOOL _observingSyncStatus;
    BOOL _hasRestoreCompleted;
    unsigned long long _filter;
    BOOL _isObservingSyncRequests;
    NSMutableDictionary *_progressTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)remote_retrieveProgressForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_startObservingSyncRequestsMatchingFilter:(unsigned long long)a0;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)a0;
- (id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_stopObservingSyncRequests;
- (void)_cloudKitIdentityUpdated:(id)a0;
- (void)cloudSyncCoordinator:(id)a0 syncRequestDidCompleteForRequest:(id)a1 success:(BOOL)a2 error:(id)a3;
- (void)cloudSyncCoordinator:(id)a0 syncStartedForRequest:(id)a1 progress:(id)a2;
- (void)cloudSyncManager:(id)a0 didUpdateDataUploadRequestStatus:(long long)a1 startDate:(id)a2 endDate:(id)a3;
- (void)cloudSyncManager:(id)a0 didUpdateErrorRequiringUserAction:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastLitePushDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPullDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPulledUpdateDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPushDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateRestoreCompletionDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateSyncEnabled:(BOOL)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
