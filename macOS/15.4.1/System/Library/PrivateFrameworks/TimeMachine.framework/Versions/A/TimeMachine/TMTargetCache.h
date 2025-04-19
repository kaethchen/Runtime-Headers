@class NSMutableDictionary, NSString, NSMutableSet, NSDate, NSDictionary;
@protocol TMMountableBackupProtocol;

@interface TMTargetCache : NSObject

@property (copy) NSDate *currentlySelectedDate;
@property (readonly) NSMutableSet *spotlightQueryRootPaths;
@property (readonly) NSMutableDictionary *backupEntries;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } entriesLock;
@property BOOL isLiveSystemInfoPrimed;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } liveSystemInfoLock;
@property (copy) NSString *currentDataVolumeUUID;
@property (copy) NSString *currentDataVolumeMountPoint;
@property (copy) NSDictionary *uuidsToMostRecentVolumeNames;
@property BOOL addBackupsOnPrime;
@property (readonly) id<TMMountableBackupProtocol> currentlySelected;

+ (id)_volumeUUIDForVolumeStoreAtURL:(id)a0;
+ (id)_escapingSpecialCharacters:(id)a0;
+ (struct TMPathExtraction { id x0; id x1; id x2; id x3; })_extractFromBackupPath:(id)a0;
+ (id)_inheritanceHistoryForBackupURL:(id)a0 error:(id *)a1;
+ (id)_machineStoreURLForBackupURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)_unprimedEntry:(id)a0;
- (id)_backupMappedLocationsForLocation:(id)a0 queryKind:(long long)a1 backup:(id)a2 homeTarget:(id)a3;
- (id)_computerScopeLocationsForBackup:(id)a0 queryKind:(long long)a1;
- (id)_mostRecentVolumeUUIDForBackupRootURL:(id)a0 volumeStoreName:(id)a1 inheritanceHistory:(id)a2;
- (id)_primedTargetCacheEntry:(id)a0;
- (struct TMTargetExtraction { id x0; id x1; })_targetWithPathInBackup:(id)a0;
- (id)addBackups:(id)a0 unprimedInfo:(id)a1;
- (id)clientInfoForDate:(id)a0;
- (struct __MDQuery { } *)createOldestNewestDatesQueryForScopePaths:(id)a0 currentQueryString:(id)a1 backup:(id)a2;
- (BOOL)doesBackupContainAnyHitsForTargets:(id)a0 backup:(id)a1;
- (id)initWithCurrentDataVolumeUUID:(id)a0 mountPoint:(id)a1 mostRecentVolumeNamesByUUID:(id)a2;
- (id)livePathForTarget:(id)a0;
- (id)machineStoreURLForBackedUpItemURL:(id)a0 error:(id *)a1;
- (id)machineStoreURLForURLInMachineStore:(id)a0 error:(id *)a1;
- (id)mapScopeKind:(long long)a0 locations:(id)a1 toBackup:(id)a2 homeTarget:(id)a3 isTagSearch:(BOOL)a4;
- (id)pathForTarget:(id)a0 inBackup:(id)a1;
- (void)primeCacheAndKickBackup:(id)a0;
- (void)primeCacheForBackup:(id)a0;
- (void)primeCacheForBackupURL:(id)a0;
- (void)primeCacheForTestingWithBackupURL:(id)a0 bestVolumeUUIDToVolumeStorePath:(id)a1 backupVolumeUUID:(id)a2;
- (void)primeLiveSystemInfoCache;
- (id)queryTargetWithLiveTarget:(id)a0 deviceID:(int)a1 fileID:(unsigned long long)a2 revisionDate:(id)a3;
- (id)queryTargetWithPathInBackup:(id)a0 deviceID:(int)a1 fileID:(unsigned long long)a2 revisionDate:(id)a3;
- (id)removeBackups:(id)a0;
- (id)resolvePathForQueryTarget:(id)a0 inBackup:(id)a1;
- (void)selectDate:(id)a0;
- (id)targetWithPathInBackup:(id)a0;

@end
