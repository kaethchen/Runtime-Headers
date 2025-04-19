@class NSString, _KSCloudKitManager, NSObject, _KSTextReplacementCoreDataStore;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol> {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property (retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore;
@property (nonatomic) BOOL ckMigrationStatusOnCloud;
@property (nonatomic) unsigned long long numPullRequests;
@property (retain, nonatomic) _KSCloudKitManager *cloudKitManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMigrationCompleted;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (void)accountDidChange:(id)a0;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void)_requestSync:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)_updateSyncCount:(unsigned long long)a0 success:(BOOL)a1;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)cloudEntriesFromLocalEntries:(id)a0;
- (id)cloudRecordIDsForLocalEntries:(id)a0;
- (unsigned long long)countLocalEntriesToBeSynced;
- (unsigned long long)decayedSyncCountForTime:(id)a0;
- (unsigned long long)getSyncCount;
- (unsigned long long)getSyncCountThresholdHalfLifeHours;
- (unsigned long long)getSyncCountThrottleThreshold;
- (void)importSampleShortcutsIfNecessary;
- (id)initWithDirectoryPath:(id)a0;
- (BOOL)isAccountAvailable;
- (id)localEntriesFromCloudEntries:(id)a0;
- (void)pullRemoteDataWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)pushAllLocalData;
- (void)pushLocalChangesWithPriority:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)pushMigrationStatusToCloud:(BOOL)a0;
- (void)queryCloudIfFirstPullOrAccountChanged:(BOOL)a0;
- (id)queryDeletedEntries;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)a0;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (id)queryUpdatedLocalEntries;
- (void)recordSyncStatus;
- (void)removeAllEntriesWithCompletionHandler:(id /* block */)a0;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (id)textReplacementEntries;
- (unsigned long long)totalPullRequestsUntilNow;
- (void)userDidDeleteRecordZone:(id)a0;

@end
