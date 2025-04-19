@interface OSIUtilities : NSObject

+ (id)serialNumber;
+ (BOOL)isVirtualMachine;
+ (BOOL)isNetBooted;
+ (void)muteBootChimeForNextReboot;
+ (void)forceNVRAMSync;
+ (id)parseFirmlinkManifestForVolume:(id)a0 withError:(id *)a1;
+ (id)systemVersionForMountPoint:(id)a0;
+ (id)allDiskUUIDs:(id)a0;
+ (BOOL)bless2Device:(id)a0 once:(BOOL)a1;
+ (BOOL)blessDevice:(id)a0 once:(BOOL)a1;
+ (BOOL)blessLegacyMode:(id)a0 path:(id)a1 once:(BOOL)a2;
+ (BOOL)blessMountPoint:(id)a0 once:(BOOL)a1;
+ (void)enableDarkReboot;
+ (BOOL)forceAttributesOfSrcPath:(id)a0 toDstPath:(id)a1;
+ (id)getEFIVersion;
+ (void)inducePanicWithMessage:(id)a0 onInternalOnly:(BOOL)a1;
+ (BOOL)insistentUnmount:(id)a0 purpose:(id)a1;
+ (BOOL)isAPFSFusion:(id)a0;
+ (BOOL)isCSFusion:(id)a0;
+ (id)mapMountPointToROSVPath:(id)a0;
+ (id)mapPathToROSV:(id)a0;
+ (id)masterBOMSystemPath;
+ (id)mountDiskImageWithPath:(id)a0 withError:(id *)a1;
+ (BOOL)mountRequiredVolume:(id)a0 atLocation:(id)a1 disableFirmlinks:(BOOL)a2 andPurpose:(id)a3;
+ (BOOL)mountRequiredVolume:(id)a0 purpose:(id)a1;
+ (int)promoteDiskToReadWrite:(id)a0;
+ (void)rebootNow;
+ (BOOL)remountVolume:(id)a0 preferredMountpoint:(id)a1 disableFirmlinks:(BOOL)a2 andPurpose:(id)a3;
+ (void)setUseROSVPaths:(BOOL)a0;
+ (BOOL)shouldAllowInsecureCollections;
+ (BOOL)stopAutomationOnDisk:(id)a0 reblessUUID:(id)a1;
+ (id)systemVersionForDisk:(id)a0;
+ (void)takeRecoveryDiagnose;
+ (BOOL)unsupportedInstallEnvironmentForGatheringDiagnosticsWithError:(id *)a0;

@end
