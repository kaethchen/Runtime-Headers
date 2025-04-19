@class CKSyncEngine, RTDefaultsManager, SMActiveSessionDetails, NSHashTable, NSString, CKRecord;

@interface SMActiveSessionZone : SMCloudKitZone <CKSyncEngineDelegate, SMActiveSessionZoneProtocol>

@property (nonatomic) BOOL activeSessionZoneAvailable;
@property (readonly, nonatomic) CKSyncEngine *syncEngine;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) SMActiveSessionDetails *latestActiveSessionDetails;
@property (retain, nonatomic) CKRecord *activeSessionRecord;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_removeObserver:(id)a0;
- (void)_setup;
- (void)syncEngine:(id)a0 handleEvent:(id)a1;
- (id)syncEngine:(id)a0 nextRecordZoneChangeBatchForContext:(id)a1;
- (BOOL)isActiveSessionDetailsOutOfSync;
- (void)_fetchActiveSessionDetailsWithRetryCount:(unsigned long long)a0 qosOptions:(id)a1 completion:(id /* block */)a2;
- (void)handleFetchedRecordZoneChanges:(id)a0;
- (void)_addObserver:(id)a0;
- (id)_createActiveSessionDetailsFromCKRecord:(id)a0;
- (void)_fetchActiveSessionDetailsRecordWithQos:(id)a0 completion:(id /* block */)a1;
- (id)_getLatestActiveSessionDetailsLocalCopy;
- (id)_getSyncEngineMetadata;
- (void)_handleFetchedRecordZoneChanges:(id)a0;
- (void)_handleStateUpdate:(id)a0;
- (void)_initializeSyncEngine;
- (BOOL)_isActiveSessionDetailsFetchedFromCloudKitSinceBoot;
- (BOOL)_isActiveSessionDetailsLocalRecordExpired;
- (void)_notifyObserversForActiveSessionDetailsFetchAttemptedFromCKCompleted:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_onActiveSessionDetailsFetchAttemptFromCKCompleted:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_persistSyncEngineMetadata:(id)a0;
- (void)_saveLatestActiveSessionDetailsLocalCopy;
- (void)_saveLatestActiveSessionDetailsStateToDefaults:(id)a0;
- (void)_updateActiveSessionDetailsFromCloudKitRecord;
- (void)_updateActiveSessionDetailsLocalCopy:(id)a0;
- (void)_writeActiveSessionDetails:(id)a0 pendingRetryCount:(long long)a1 qos:(id)a2 completion:(id /* block */)a3;
- (void)_writeActiveSessionDetailsOnCloudToInitiateHandoff:(id)a0 handler:(id /* block */)a1;
- (void)checkActiveSessionDetailsZoneAvailibilityWithQos:(id)a0 completion:(id /* block */)a1;
- (void)deleteActiveSessionDetailsRecordWithQos:(id)a0 completion:(id /* block */)a1;
- (void)fetchActiveSessionDetailsRecordWithQos:(id)a0 completion:(id /* block */)a1;
- (void)fetchActiveSessionDetailsWithHandler:(id /* block */)a0;
- (id)getLatestActiveSessionDetails;
- (void)handleStateUpdate:(id)a0;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1;
- (void)initializeSyncEngine;
- (BOOL)isEligibleForCacheUpdateForCurrentDeviceIdentifier:(id)a0 sessionManagerState:(id)a1;
- (void)setup;
- (void)setupZoneWithQos:(id)a0 completion:(id /* block */)a1;
- (void)updateActiveSessionDetailsFromCloudKitRecord;
- (void)writeActiveSessionDetailOnCloudToInitiateHandoff:(id)a0 handler:(id /* block */)a1;
- (void)writeActiveSessionDetailsRecord:(id)a0 qos:(id)a1 completion:(id /* block */)a2;

@end
