@class NSString, HDCloudSyncStatus, HDCloudSyncCoordinator, NSObject, _HKBehavior;
@protocol OS_dispatch_queue;

@interface HDCloudSyncStatusProvider : NSObject <HDCloudSyncStatusProvider> {
    HDCloudSyncCoordinator *_coordinator;
    _HKBehavior *_behavior;
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncStatus *_lock_cloudSyncStatus;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_hasUpdatedCachedLastSuccessfulSyncDates;
}

@property (readonly, copy, nonatomic) HDCloudSyncStatus *syncStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id *)a0;
- (BOOL)_shouldPerformLastSyncDateCheckInternalSetting;
- (void)checkLastSyncDate;
- (id)currentSyncProgress;
- (void)fetchSyncStatusWithCompletion:(id /* block */)a0;
- (id)initWithCoordinator:(id)a0 behavior:(id)a1;
- (id)lastSuccessfulLitePushDate;
- (id)lastSuccessfulPullDate;
- (id)lastSuccessfulPushDate;
- (void)setDataUploadRequestStatus:(long long)a0 profileType:(long long)a1;
- (void)unitTest_setLastSuccessfulLitePushDate:(id)a0;
- (void)unitTest_setLastSuccessfulPullDate:(id)a0;
- (void)unitTest_setLastSuccessfulPushDate:(id)a0;
- (void)updateCachedLastSyncDatesWithCompletion:(id /* block */)a0;

@end
