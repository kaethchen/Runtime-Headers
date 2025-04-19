@class NSError, NSArray, SMSystem_Daemon, NSMutableDictionary, NSDictionary, SMPaths, NSObject, OSITemplateMigrationOptions;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface OSITemplateMigrationController : OSIUABaseController <MigrationProgressEventsListener> {
    NSObject<OS_dispatch_queue> *_templateMigrationEngineQueue;
}

@property (retain) SMPaths *pather;
@property (retain) SMSystem_Daemon *targetSystem;
@property (retain) NSDictionary *progressExpectations;
@property (retain) NSMutableDictionary *progressReality;
@property unsigned long long totalFileEstimate;
@property (retain) NSObject<OS_dispatch_semaphore> *migrationInProgress;
@property (retain) NSError *fatalMigrationError;
@property (retain) NSArray *nonFatalMigrationErrors;
@property BOOL logsHaveAttached;
@property BOOL mountedWithoutFirmlinks;
@property BOOL hasSetupProgress;
@property BOOL currentStepIsInRecovery;
@property BOOL loginCredentialsCommitted;
@property (retain) OSITemplateMigrationOptions *options;

+ (id)progressPhaseName;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)startOperation;
- (void)setupProgress;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)enginePercentDone:(id)a0;
- (void)engineProcessingText:(id)a0;
- (void)engineProgressUpdate:(id)a0;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)_commitLoginCredentialsIfNeeded;
- (void)cleanupArchiveForRequest:(id)a0 error:(id *)a1;
- (void)pauseAfterStep:(id)a0;
- (BOOL)archiveExistingContent:(id *)a0;
- (void)cleanupIAFromTarget;
- (void)completeProgressForTask:(unsigned long long)a0;
- (BOOL)createMigrationRequest;
- (void)initializeInstallerDiagnostics;
- (void)installPOSPToken;
- (BOOL)instantiateTemplate:(id *)a0;
- (void)mergeInstallHistory;
- (BOOL)migrateArchivedContentToFreshTemplate:(id *)a0;
- (void)performAuxKernelCacheOperation;
- (void)performEraseInstall;
- (BOOL)performTasks:(id *)a0;
- (BOOL)performTransitionsAfter:(unsigned long long)a0 upTo:(unsigned long long)a1;
- (BOOL)performTransitionsBefore:(unsigned long long)a0;
- (BOOL)performTransitionsFor:(unsigned long long)a0;
- (void)persistDiagnostics;
- (void)persistSyslog;
- (void)quitOrReboot;
- (BOOL)reapExistingContent:(id *)a0;
- (void)recordInstallType;
- (void)setupBoottimeInstall;
- (void)setupPather;
- (void)setupSeedingProgram;
- (void)updateProgress:(id)a0 forTask:(unsigned long long)a1;
- (void)writeDefaultLanguage;

@end
