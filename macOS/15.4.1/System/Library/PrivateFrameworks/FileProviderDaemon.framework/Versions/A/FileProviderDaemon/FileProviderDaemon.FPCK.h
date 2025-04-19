@class NSDictionary;

@interface FileProviderDaemon.FPCK : NSObject <FPFSCheckerDelegate> {
    void /* unknown type, empty encoding */ totalDatalessItems;
    void /* unknown type, empty encoding */ totalMaterializedItems;
    void /* unknown type, empty encoding */ accumulatedFileSizes;
    void /* unknown type, empty encoding */ accumulatedSizeOfDisk;
    void /* unknown type, empty encoding */ accumulatedDownloads;
    void /* unknown type, empty encoding */ accumulatedUploads;
    void /* unknown type, empty encoding */ multipleHardlinksExtensions;
    void /* unknown type, empty encoding */ pendingSetSize;
    void /* unknown type, empty encoding */ superPendingSetSize;
    void /* unknown type, empty encoding */ pendingSetItemPayload;
    void /* unknown type, empty encoding */ superPendingSetItemPayload;
    void /* unknown type, empty encoding */ telemetryReport;
    void /* unknown type, empty encoding */ pendingSetErrors;
    void /* unknown type, empty encoding */ superPendingSetErrors;
    void /* unknown type, empty encoding */ runID;
    void /* unknown type, empty encoding */ sqlDatabase;
    void /* unknown type, empty encoding */ fsSnapshotChecker;
    void /* unknown type, empty encoding */ fpSnapshotChecker;
    void /* unknown type, empty encoding */ openBackupDatabases;
    void /* unknown type, empty encoding */ providerDomainID;
    void /* unknown type, empty encoding */ domainUserInfo;
    void /* unknown type, empty encoding */ usingFPFS;
    void /* unknown type, empty encoding */ diskVsFSSnapshotIgnoredFilenames;
    void /* unknown type, empty encoding */ launchOptions;
    void /* unknown type, empty encoding */ reason;
    void /* unknown type, empty encoding */ targetedSPSErrors;
    void /* unknown type, empty encoding */ shouldPause;
    void /* unknown type, empty encoding */ sendDiagnostics;
    void /* unknown type, empty encoding */ saveCheckpoint;
    void /* unknown type, empty encoding */ isInvalidated;
    void /* unknown type, empty encoding */ discoveredDiskBrokenInvariantsCounters;
    void /* unknown type, empty encoding */ repairedDiskBrokenInvariantsCounters;
    void /* unknown type, empty encoding */ discoveredDiskVsFSSnapshotDiffCounters;
    void /* unknown type, empty encoding */ repairedDiskVsFSSnapshotDiffCounters;
    void /* unknown type, empty encoding */ discoveredFSSnapshotVsFPSnapshotDiffCounters;
    void /* unknown type, empty encoding */ discoveredReconciliationTableBrokenInvariantsCounters;
    void /* unknown type, empty encoding */ discoveredBackupManifestVsFSSnapshotDiffCounters;
    void /* unknown type, empty encoding */ providerVersion;
    void /* unknown type, empty encoding */ ioContext;
    void /* unknown type, empty encoding */ resultHandler;
    void /* unknown type, empty encoding */ skippedLockedItems;
    void /* unknown type, empty encoding */ rootURL;
    void /* unknown type, empty encoding */ rootURLs;
    void /* unknown type, empty encoding */ detachedRoots;
    void /* unknown type, empty encoding */ volumeRole;
    void /* unknown type, empty encoding */ repairStartTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_importIsRunning;
    void /* unknown type, empty encoding */ $__lazy_storage_$_vendorExcludedFolders;
    void /* unknown type, empty encoding */ itemIDsWithTargetedErros;
}

@property (nonatomic) void /* unknown type, empty encoding */ numberOfFilesChecked;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfBrokenFilesInFSAndFSSnapshotCheck;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfBrokenFilesInReconciliationTableCheck;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfBrokenFilesInBackupManifestCheck;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfReconciliationTableEntries;
@property (nonatomic, copy) NSDictionary *telemetryReport;

+ (BOOL)dumpDatabaseAt:(id)a0 fullDump:(BOOL)a1 writeTo:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)checker:(id)a0 handleItem:(int)a1 itemStatus:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; struct fpfs_fileattrs *x11; struct stat *x12; unsigned int x13; } *)a2 under:(id)a3 brokenInvariants:(unsigned long long)a4;
- (BOOL)checker:(id)a0 handleLockedItemAtPath:(id)a1 handle:(const struct fpfs_item_handle { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; char *x4; int x5; unsigned int x6; } *)a2;
- (id)initWithDatabasesBackupsPaths:(id)a0 volumeRole:(unsigned int)a1 providerDomainID:(id)a2 domainUserInfo:(id)a3 reason:(unsigned long long)a4 usingFPFS:(BOOL)a5 iCDPackageDetection:(BOOL)a6 useShouldPause:(BOOL)a7 shouldPause:(id /* block */)a8 sendDiagnostics:(id /* block */)a9 saveCheckpoint:(id /* block */)a10 isInvalidated:(id /* block */)a11;
- (BOOL)launchFromURLs:(id)a0 options:(unsigned long long)a1 error:(id *)a2 resultHandler:(id /* block */)a3;

@end
