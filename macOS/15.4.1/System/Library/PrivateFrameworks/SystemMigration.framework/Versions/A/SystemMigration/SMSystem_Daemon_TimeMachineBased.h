@class NSString, TMSession, NSArray, NSDate, NSURL;
@protocol TMMachineStoreInfo, TMVolumeStoreInfo;

@interface SMSystem_Daemon_TimeMachineBased : SMSystem_Daemon

@property (retain) NSDate *backupCompletedDate;
@property (retain) NSString *machineName;
@property (retain) NSString *storageVolume;
@property (getter=isCaseSensitive) BOOL caseSensitive;
@property unsigned long long filesystemType;
@property (retain) TMSession *timeMachineSession;
@property (retain) id<TMMachineStoreInfo> machineStoreInfo;
@property (retain) id<TMVolumeStoreInfo> volumeStoreInfo;
@property (retain, nonatomic) NSArray *backups;
@property (retain) NSString *backupsDescription;
@property (retain) NSURL *mountPoint;
@property (retain) NSString *daDisk_ID;
@property (retain) NSString *backupProductVersion;
@property (retain) NSString *backupBuildVersion;
@property BOOL isLiteBackup;
@property BOOL isLatestBackup;

+ (unsigned long long)requiredScannerState;

- (id)description;
- (void).cxx_destruct;
- (id)systemVersion;
- (id)accessibilityDescription;
- (id)productVersion;
- (id)displayState;
- (id)buildVersion;
- (BOOL)isInternal;
- (void)unmount;
- (BOOL)hasDisconnected;
- (unsigned long long)systemType;
- (id)_getBuildVersion;
- (id)retrieveBackups;
- (id)_getProductVersion;
- (void)determineEnrolledBetaProgram;
- (double)estimatedTransferRate;
- (id)getTypeDescription;
- (id)getVersionDescription;
- (void)hasBeenFinalizedAsMigrationSource;
- (id)initWithTimeMachineSession:(id)a0 volumeStoreInfo:(id)a1 machineStoreInfo:(id)a2 mountPoint:(id)a3 daDiskID:(id)a4 remoteDiskID:(id)a5 isFinalSelectedSystem:(BOOL)a6 isLatestBackup:(BOOL)a7 ineligibilityReason:(id)a8;
- (BOOL)isOverNetworkedFS;
- (BOOL)mustPollForDisconnects;
- (id)terseDescription;
- (id)volumeIcon;

@end
