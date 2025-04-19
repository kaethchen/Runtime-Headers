@class SKDisk, NSError;

@interface OSICleanUpElement : OSIInstallQueueElement

@property (retain) SKDisk *alternateBlessTarget;
@property (retain) NSError *error;
@property BOOL done;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (void)_writeAutoLanguageChooserCookie;
- (void)_addRunningLanguageAndDirToGlobalPreferences;
- (void)_cleanUpPKGDMGSItemsAtPath:(id)a0;
- (void)_copyAPFSConverterLogToTarget;
- (void)_copyDiagnosticReportsToTarget;
- (void)_copyFSCKLogToTarget;
- (void)_flushIALogToTarget;
- (BOOL)_requestTRBXCompatibilityCheck;
- (void)_stampSeedingProgramToSeedingCookie:(id)a0 cookiePath:(id)a1;
- (void)_writeInstallResultsCookieForSpotlight;
- (void)_writeInstallTypeCookieForServerAndMacBuddy;
- (void)_writeTALRestoreApps;
- (void)_writeToSeedingPlist;
- (double)estimatedTimeToComplete;
- (BOOL)okayToSkip;
- (void)removeCleanupInstallerPlist:(id)a0;

@end
