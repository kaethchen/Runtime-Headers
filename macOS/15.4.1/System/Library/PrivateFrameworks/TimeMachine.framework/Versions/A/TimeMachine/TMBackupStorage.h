@class TMMachineStore, NSArray, NSDictionary, NSString, NSURL, TMBackup;

@interface TMBackupStorage : TMMonoStructure <TMCompleteBackupProvider, TMBackupStoreRoot>

@property (readonly) Class machineStoreClass;
@property (retain) TMMachineStore *currentMachineStore;
@property (readonly) NSArray *sortedCompleteBackups;
@property (readonly) NSDictionary *backupHistoryDictionary;
@property (readonly) NSArray *backupDateHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSURL *machineStoreURL;
@property (readonly) NSURL *inheritanceHistoryURL;
@property (readonly) NSURL *liveVolumeMountPoint;
@property (readonly) TMBackup *baselineBackupCandidate;

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (id)annotatedStateAtURL:(id)a0;

- (void).cxx_destruct;
- (long long)refreshFromDisk;
- (id)sortedWritableBackupsWithState:(unsigned long long)a0;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (BOOL)finishBrowsingBackups:(id *)a0;
- (id)latestWritableBackupWithState:(unsigned long long)a0;
- (id)prepareAllBackupsForBrowsing:(id *)a0;
- (id)prepareBackupForBrowsingWithDate:(id)a0 error:(id *)a1;
- (BOOL)prepareForReuse:(id *)a0;
- (id)removeInProgressBackups:(id *)a0;

@end
