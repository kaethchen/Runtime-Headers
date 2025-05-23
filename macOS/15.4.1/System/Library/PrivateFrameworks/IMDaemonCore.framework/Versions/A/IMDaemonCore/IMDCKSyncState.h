@class NSString, NSDictionary, IMKeyValueCollection, NSDate, NSArray;
@protocol IMDCKSyncStateDelegate;

@interface IMDCKSyncState : NSObject <SyncStateManaging, IMKeyValueCollectionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic) unsigned long long syncStatus;
@property (nonatomic) long long syncControllerRecordType;
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (nonatomic, getter=isStartingPeriodicSyncSetByCloudKitHooks) BOOL startingPeriodicSyncSetByCloudKitHooks;
@property (nonatomic, getter=isStartingInitialSyncSetByCloudKitHooks) BOOL startingInitialSyncSetByCloudKitHooks;
@property (readonly, nonatomic) IMKeyValueCollection *keyValueCollection;
@property (weak, nonatomic) id<IMDCKSyncStateDelegate> delegate;
@property (nonatomic, getter=isFeatureEnabled) BOOL featureEnabled;
@property (nonatomic) BOOL createdChatZone;
@property (nonatomic) BOOL deletedZones;
@property (nonatomic, getter=isEligibleForTruthZone) BOOL eligibleForTruthZone;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (nonatomic, getter=isRemovedFromBackup) BOOL removedFromBackup;
@property (nonatomic, getter=isInExitState) BOOL inExitState;
@property (nonatomic, getter=isSyncingPaused) BOOL syncingPaused;
@property (nonatomic) BOOL syncCancelled;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic, getter=isDisablingDevices) BOOL disablingDevices;
@property (nonatomic, getter=isStartingEnabledSettingChange) BOOL startingEnabledSettingChange;
@property (copy, nonatomic) NSDictionary *analyticSyncDatesDictionary;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (readonly, copy, nonatomic) NSDate *lastFullSyncDate;
@property (copy, nonatomic) NSString *syncSessionID;
@property (copy, nonatomic) NSString *micDeviceIdentifier;
@property (nonatomic) long long accountStatus;
@property (readonly, nonatomic) NSArray *syncErrors;
@property (nonatomic) long long syncControllerSyncType;
@property (readonly, nonatomic) unsigned long long syncType;
@property (readonly, nonatomic) unsigned long long syncJobState;
@property (nonatomic) BOOL hasAvailableRecordsToDownload;
@property (nonatomic) double lastDownloadProgress;
@property (copy, nonatomic) NSDictionary *syncStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logHandle;
+ (void)removeBuildObjectsFromDict:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)lastSyncDate;
- (unsigned long long)syncType;
- (long long)accountStatus;
- (void)commitChanges;
- (void)setAccountStatus:(long long)a0;
- (void)setSyncType:(unsigned long long)a0;
- (id)exitDate;
- (void)setExitDate:(id)a0;
- (void)setSyncStatus:(unsigned long long)a0;
- (void)setLastSyncDate:(id)a0;
- (id)logHandle;
- (void)setFeatureEnabled:(BOOL)a0;
- (void)setSyncing:(BOOL)a0;
- (void)clearLocalCloudKitSyncState;
- (void)keyValueCollection:(id)a0 didUpdateValues:(id)a1;
- (void)keyValueCollection:(id)a0 willUpdateValues:(id)a1;
- (void)setSyncingEnabled:(BOOL)a0;
- (unsigned long long)syncStatus;
- (BOOL)hasAvailableRecordsToDownload;
- (double)lastDownloadProgress;
- (id)lastFullSyncDate;
- (void)setEligibleForTruthZone:(BOOL)a0;
- (void)setSyncControllerSyncState:(unsigned long long)a0;
- (long long)syncControllerRecordType;
- (unsigned long long)syncControllerSyncState;
- (long long)syncControllerSyncType;
- (unsigned long long)syncJobState;
- (void)clearSyncErrors;
- (void)setAnalyticSyncDatesDictionary:(id)a0;
- (id)syncDateForKey:(id)a0;
- (void)clearSyncStateForAllRecordTypes;
- (BOOL)createdChatZone;
- (void)setInExitState:(BOOL)a0;
- (void)syncReportDictionaryForAttempt:(unsigned long long)a0 withSuccess:(BOOL)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)updateSyncType:(unsigned long long)a0;
- (id)_describeErrors:(id)a0;
- (void)_finishBatchChange;
- (void)_removeObjectForKey:(id)a0 forDictionary:(id)a1;
- (void)_setObject:(id)a0 forKey:(id)a1 forDictionary:(id)a2 shouldSetBuild:(BOOL)a3;
- (void)_setStartingSync;
- (BOOL)_shouldReportNewUserIfCreatedChatZones:(BOOL)a0 deletedZones:(BOOL)a1;
- (void)_startBatchChange;
- (void)addSyncError:(id)a0;
- (id)analyticSyncDatesDictionary;
- (void)appendError:(id)a0;
- (void)broadcastSyncState;
- (void)deleteAllCloudKitData;
- (BOOL)deletedZones;
- (id)describeErrors;
- (id)describeRecordCounts;
- (id)getAnalyticSyncDatesObjectForKey:(id)a0;
- (id)initWithKeyValueCollection:(id)a0;
- (id)micDeviceIdentifier;
- (void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)a0;
- (void)sendBroadcastToClient;
- (void)setAnalyticSyncDatesDictionaryObject:(id)a0 forKey:(id)a1 shouldOverrideIfExists:(BOOL)a2;
- (void)setCloudKitHasAvailableRecordsToDownload:(BOOL)a0;
- (void)setCloudKitSyncStatistics:(id)a0;
- (void)setCreatedChatZone:(BOOL)a0;
- (void)setDeletedZones:(BOOL)a0;
- (void)setDisablingDevices:(BOOL)a0;
- (void)setErrorToAccountNeedsRepair;
- (void)setErrorToKeyRollingError;
- (void)setHasAvailableRecordsToDownload:(BOOL)a0;
- (void)setLastDownloadProgress:(double)a0;
- (void)setLastSyncDownloadProgress:(double)a0;
- (void)setMiCDeviceIdentifier:(id)a0;
- (void)setRemovedFromBackup:(BOOL)a0;
- (void)setStartingEnabledSettingChange:(BOOL)a0;
- (void)setStartingInitialSyncSetByCloudKitHooks:(BOOL)a0;
- (void)setStartingInitialSyncWithRecordType:(long long)a0;
- (void)setStartingPeriodicSyncSetByCloudKitHooks:(BOOL)a0;
- (void)setStartingPeriodicSyncWithRecordType:(long long)a0;
- (void)setSyncCancelled:(BOOL)a0;
- (void)setSyncControllerRecordType:(long long)a0;
- (void)setSyncControllerSyncState:(unsigned long long)a0 withRecordType:(long long)a1;
- (void)setSyncControllerSyncType:(long long)a0;
- (void)setSyncDate:(id)a0 forKey:(id)a1 shouldOverride:(BOOL)a2;
- (void)setSyncJobState:(unsigned long long)a0;
- (void)setSyncJobStateWithState:(unsigned long long)a0;
- (void)setSyncPhaseType:(unsigned long long)a0;
- (void)setSyncSessionID:(id)a0;
- (void)setSyncStarted;
- (void)setSyncStopped;
- (void)setSyncingFinished;
- (void)setSyncingPaused:(BOOL)a0;
- (void)startChanges;
- (BOOL)syncCancelled;
- (id)syncReportDictionary;
- (id)syncReportDictionaryForAttempt:(unsigned long long)a0 withSuccess:(BOOL)a1 duration:(double)a2;
- (id)syncSessionID;
- (id)syncUserType;
- (void)updateLastDownloadProgress:(double)a0;
- (void)updateSyncJobState:(unsigned long long)a0;
- (void)updateSyncStatus:(unsigned long long)a0;

@end
