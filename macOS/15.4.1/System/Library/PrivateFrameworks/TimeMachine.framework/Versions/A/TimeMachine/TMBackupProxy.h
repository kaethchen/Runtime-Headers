@class NSString, NSURL, NSDate, TMBackupInfo;

@interface TMBackupProxy : NSObject <TMMountedBackupProtocol, TMBackupDataSourceBackup>

@property (readonly) NSURL *url;
@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *expectedBackupURL;
@property (readonly) NSString *name;
@property (readonly) BOOL isComplete;
@property (readonly) NSDate *dateCompleted;
@property (readonly) unsigned long long maximumFileID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSURL *machineStoreURL;
@property (readonly) NSDate *dateStarted;
@property (readonly) BOOL isTombstone;
@property (readonly) TMBackupInfo *info;
@property (readonly) unsigned long long kind;
@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *expectedBackupURL;
@property (readonly) NSString *name;
@property (readonly) BOOL isComplete;
@property (readonly) NSDate *dateCompleted;
@property (readonly) unsigned long long maximumFileID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxiesFromInfo:(id)a0 machineStoreURL:(id)a1;
+ (id)proxiesFromLocalSnapshotInfo:(id)a0;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (BOOL)deleteFromDisk:(id *)a0;
- (BOOL)finishBrowsing:(id *)a0;
- (BOOL)_deleteBackupFromDisk:(id *)a0;
- (BOOL)_deleteLocalSnapshotFromDisk:(id *)a0;
- (BOOL)_finishBrowsingBackup:(id *)a0;
- (BOOL)_finishBrowsingLocalSnapshot:(id *)a0;
- (id)_readyBackupForBrowsingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)_readyLocalSnapshotForBrowsingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initTombstoneWithName:(id)a0 date:(id)a1 expectedBackupURL:(id)a2 kind:(unsigned long long)a3;
- (id)initWithAPFSBackupDisk:(id)a0 machineStoreURL:(id)a1 error:(id *)a2;
- (id)initWithAPFSLocalSnapshotDisk:(id)a0 error:(id *)a1;
- (id)initWithBackupURL:(id)a0 machineStoreURL:(id)a1 error:(id *)a2;
- (id)initWithInfo:(id)a0 machineStoreURL:(id)a1;
- (id)initWithLocalSnapshotsInfo:(id)a0;
- (id)readyForBrowsingWithOptions:(unsigned long long)a0 error:(id *)a1;

@end
