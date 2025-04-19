@class NSArray, OSIPersonalizedManifests;

@interface OSIUpdateFirmwareElement : OSIInstallQueueElement

@property (retain) NSArray *packageSpecifiers;
@property BOOL firmwareUpdatesQueued;
@property (retain) OSIPersonalizedManifests *personalizedManifests;
@property BOOL isMSUSpringboard;

+ (BOOL)cookieExists;
+ (BOOL)cookieExistsInProductAtURL:(id)a0;
+ (id)getFirmwareUpdateLauncherStatistics;
+ (BOOL)shouldUpdateFirmware;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (id)internalEFIDisk;
- (void)cleanUpESP;
- (id)createTempDirectoryAtMutableProductURL:(id)a0;
- (id)createTempDirectoryForMountPoint:(id)a0;
- (double)estimatedTimeToComplete;
- (BOOL)extractFirmwareUsingExpandedPackagePath:(id)a0 withFirmwareUpdatePkgURL:(id)a1 withError:(id *)a2;
- (id)initWithOptions:(id)a0 packageSpecifiers:(id)a1 personalizedManifests:(id)a2;
- (id)nextProgressPhaseAfterCompletion;
- (BOOL)okayToSkip;
- (void)purgeCachesOnEFIDisk:(id)a0;
- (void)repairESP;
- (void)unmountESP:(id)a0;

@end
