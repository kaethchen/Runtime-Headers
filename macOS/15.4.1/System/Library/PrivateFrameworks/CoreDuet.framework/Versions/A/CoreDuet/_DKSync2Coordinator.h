@class _DKKnowledgeStorage, APSConnection, NSObject, _DKSync2State, NSMutableArray, NSString, _DKDataProtectionStateMonitor, _DKSyncType, _DKSyncToggle, NSMutableSet, _DKThrottledActivity, _CDPeriodicSchedulerJob, NSUUID;
@protocol _DKSyncRemoteKnowledgeStorage, OS_xpc_object, _DKSyncLocalKnowledgeStorage, _DKKeyValueStore, NSObject;

@interface _DKSync2Coordinator : _DKSyncContextObject <_DKSyncRemoteKnowledgeStorageFetchDelegate, _DKKnowledgeStorageEventNotificationDelegate, APSConnectionDelegate, _DKSyncCoordinator> {
    _DKThrottledActivity *_activityThrottler;
    id<NSObject> _observerToken;
    NSMutableSet *_busyTransactions;
    NSMutableArray *_insertedSyncedEvents;
    NSMutableArray *_deletedSyncedEvents;
    NSMutableSet *_activatedPeers;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    BOOL _hasRegisteredOptionalObservers;
    BOOL _isEnabled;
    NSString *_triggeredSyncDelayActivityName;
    NSString *_syncActivityName;
    _DKSync2State *_syncState;
    double _periodicJobInterval;
    BOOL _databaseObserversRegistered;
    BOOL _cloudDeviceCountChangedObserverRegistered;
    BOOL _cloudSyncAvailablityObserverRegistered;
    BOOL _rapportAvailablityObserverRegistered;
    BOOL _siriSyncEnabledObserverRegistered;
    BOOL _syncPolicyChangedObserverRegistered;
    APSConnection *_connection;
    NSMutableSet *_streamNamesObservedForAdditions;
    NSMutableSet *_streamNamesObservedForDeletions;
    _DKSyncToggle *_syncEnabledToggler;
    _DKSyncToggle *_someTransportIsAvailableToggler;
    _DKSyncToggle *_cloudIsAvailableToggler;
    _DKSyncToggle *_rapportIsAvailableToggler;
    _CDPeriodicSchedulerJob *_periodicJob;
    BOOL _triggeredSyncActivityRegistered;
    NSObject<OS_xpc_object> *_triggeredSyncActivity;
    BOOL _isBusy;
    BOOL _hasSyncedUpHistoryToCloud;
    id<_DKKeyValueStore> _keyValueStore;
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transportCloudDown;
    id<_DKSyncRemoteKnowledgeStorage> _transportCloudUp;
    id<_DKSyncRemoteKnowledgeStorage> _transportRapport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _DKSyncType *syncType;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) _DKKnowledgeStorage *storage;
@property (readonly) BOOL isBusy;

+ (id)streamNamesToTombstone;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)_someTransportIsAvailableToggle;
- (id)sortedEventsFromSyncWindows:(id)a0 streamNames:(id)a1 limit:(unsigned long long)a2 fetchOrder:(long long)a3 error:(id *)a4;
- (void)_cloudIsAvailableToggle;
- (void)_cloudIsUnavailableToggle;
- (void)_cloudSyncAvailabilityDidChange:(id)a0;
- (void)_databaseDidDeleteFromStreamNameCounts:(id)a0;
- (void)_noTransportIsAvailableToggle;
- (void)_rapportIsAvailableToggle;
- (void)_rapportIsUnavailableToggle;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)_syncPolicyDidChange:(id)a0;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)deleteRemoteStateWithReply:(id /* block */)a0;
- (id)deletedEventIDsSinceDate:(id)a0 streamNames:(id)a1 limit:(unsigned long long)a2 endDate:(id *)a3 error:(id *)a4;
- (void)handleStatusChangeForPeer:(id)a0 previousTransports:(long long)a1;
- (id)initWithStorage:(id)a0;
- (void)knowledgeStorage:(id)a0 didDeleteEventsWithStreamNameCounts:(id)a1;
- (void)knowledgeStorage:(id)a0 didDeleteSyncedEvents:(id)a1;
- (void)knowledgeStorage:(id)a0 didHaveInsertsAndDeletesWithCount:(unsigned long long)a1;
- (void)knowledgeStorage:(id)a0 didInsertEventsWithStreamNameCounts:(id)a1;
- (void)knowledgeStorage:(id)a0 didInsertSyncedEvents:(id)a1;
- (id)policyForSyncTransportType:(long long)a0;
- (void)setupStorage;
- (id)sortedEventsFromSyncWindows:(id)a0 streamNames:(id)a1 compatibility:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 error:(id *)a5;
- (void)syncWithReply:(id /* block */)a0;
- (void)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 reply:(id /* block */)a2;

@end
