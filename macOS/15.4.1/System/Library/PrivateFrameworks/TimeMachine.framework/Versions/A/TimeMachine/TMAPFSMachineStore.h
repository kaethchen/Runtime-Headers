@class NSString, NSArray, NSURL, TMBackup, TMDisk, NSDictionary;

@interface TMAPFSMachineStore : TMMachineStore <TMBackupStoreRoot>

@property (retain) TMDisk *liveVolumeDisk;
@property (readonly) NSURL *machineStoreURL;
@property (readonly) NSURL *inheritanceHistoryURL;
@property (readonly) NSURL *liveVolumeMountPoint;
@property (readonly) TMBackup *baselineBackupCandidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *sortedCompleteBackups;
@property (readonly) NSDictionary *backupHistoryDictionary;
@property (readonly) NSArray *backupDateHistory;

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (BOOL)_makeMachineStoreDirectoryAtURL:(id)a0 error:(id *)a1;
+ (BOOL)addMachineStoreRootACLsToURL:(id)a0 error:(id *)a1;
+ (id)annotatedStateAtURL:(id)a0;
+ (void)enumerateURLsForReuseUnderURL:(id)a0 enumerator:(id /* block */)a1;
+ (id)machineAddress;
+ (BOOL)validateMachineStoreAttributesAtURL:(id)a0;

- (void).cxx_destruct;
- (long long)refreshFromDisk;
- (id)sortedWritableBackupsWithState:(unsigned long long)a0;
- (id)_readOnlyBackups;
- (BOOL)_updateMachineStoreNameAtURL:(id)a0 previousComputerName:(id)a1 error:(id *)a2;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (id)completedBackups;
- (id)computerName;
- (BOOL)finishBrowsingBackups:(id *)a0;
- (id)machineUUID;
- (id)prepareAllBackupsForBrowsing:(id *)a0;
- (id)prepareBackupForBrowsingWithDate:(id)a0 error:(id *)a1;
- (BOOL)prepareForReuse:(id *)a0;
- (BOOL)rename:(id)a0 error:(id *)a1;
- (BOOL)revertToBackup:(id)a0 error:(id *)a1;
- (Class)snapshotClass;

@end
