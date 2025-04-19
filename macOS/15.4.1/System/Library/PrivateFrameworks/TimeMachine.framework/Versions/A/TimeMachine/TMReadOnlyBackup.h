@class NSString, NSURL, TMSnapshot, TMAPFSBackup, NSDate;

@interface TMReadOnlyBackup : TMStructure <TMAPFSSnapshotProtocol, TMMountableBackupProtocol>

@property (readonly) TMSnapshot *snapshot;
@property BOOL isInWorkingSet;
@property (readonly) unsigned long long maximumFileID;
@property (readonly) TMAPFSBackup *nestedBackup;
@property (readonly, copy) NSURL *liveVolumeMountPoint;
@property (readonly) unsigned long long xid;
@property (readonly) unsigned long long fileID;
@property (readonly, copy) NSString *snapshotName;
@property (readonly) int flags;
@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *expectedBackupURL;
@property (readonly) NSString *name;
@property (readonly) BOOL isComplete;
@property (readonly) NSDate *dateCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)structureType;
+ (id)_URLForSnapshot:(id)a0 liveVolumeMountPoint:(id)a1 liveVolumeUUID:(id)a2;
+ (id)_liveVolumeUUIDForURL:(id)a0;
+ (id)_snapshotForURL:(id)a0;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)dateFromBackupName:(id)a0;
+ (id)dateFromBackupSnapshotName:(id)a0;
+ (void)enumerateUnderURL:(id)a0 parent:(id)a1 enumerator:(id /* block */)a2;
+ (id)expectedBackupURLForDate:(id)a0 backupDataVolumeUUID:(id)a1 inUnitTest:(BOOL)a2;
+ (id)expectedBackupURLForTimestamp:(id)a0 backupDataVolumeUUID:(id)a1 inUnitTest:(BOOL)a2;
+ (id)expectedNestedBackupURLFromLiveVolumeMountPoint:(id)a0 snapshot:(id)a1;
+ (id)mountPointFromLiveVolumeMountPoint:(id)a0 snapshot:(id)a1;
+ (id)readAtURL:(id)a0 parent:(id)a1 error:(id *)a2;
+ (id)readOnlyBackupNameWithDate:(id)a0;
+ (BOOL)validateSnapshotName:(id)a0;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (BOOL)delete:(id *)a0;
- (BOOL)finishBrowsing:(id *)a0;
- (id)deleteFromDiskWithCancelBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)makeDataless:(id *)a0;
- (BOOL)mountAtURL:(id)a0 error:(id *)a1;
- (id)readyForBrowsingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)waitForDeletionUntil:(id)a0 error:(id *)a1;

@end
