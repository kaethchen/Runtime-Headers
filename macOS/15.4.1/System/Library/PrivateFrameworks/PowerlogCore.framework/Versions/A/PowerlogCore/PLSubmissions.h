@class NSMutableArray, NSString, PLSQLiteConnection, DRConfigMonitor, NSNumber, PLStorageOperator;

@interface PLSubmissions : NSObject

@property (retain) PLSQLiteConnection *connection;
@property (retain) NSString *request;
@property (retain) NSString *filterQuery;
@property (retain) NSString *onDemandTasking;
@property (retain) NSNumber *capValue;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (weak) PLStorageOperator *storageOperator;
@property BOOL xpcActivityStarted;
@property (retain) NSMutableArray *submissionQueue;
@property double lastXPCActivityTimestamp;
@property double xpcActivityDelay;
@property (readonly) BOOL taskingStarted;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)workQueue;
- (void)removeFileAtPath:(id)a0;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (int)checkTaskingCompletionStatus;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)clearTaskingDRConfig;
- (id)configFromMonitor:(id)a0;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)disableHangtracer;
- (void)emitBlobDetectedEvent:(id)a0;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)emitCollisionEvent:(id)a0;
- (void)enableHangtracer;
- (id)enqueueFileForUpload:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)fileCleanupWithRecord:(id)a0;
- (void)finishXPCActivity:(id)a0;
- (BOOL)fullModeSubmissionBehavior;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (id)getCurrentDRConfig;
- (id)getLastBatteryTimestampSystem;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)handleXPCActivityCallback:(id)a0;
- (void)initSubmissionQueue;
- (BOOL)internalSubmissionBehavior;
- (void)logOTAStatus:(id)a0;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)performSubmission:(id)a0;
- (void)persistSubmissionInfo:(id)a0;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)registerUploadSchedulingActivity;
- (void)rejectTaskingDRConfig;
- (void)removeFileAtURL:(id)a0;
- (void)sendSubmissionIssueSignature:(id)a0;
- (void)setupDRTasking;
- (void)stopDRTasking;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (short)submitReasonForToday;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (void)submitWithTaskingConfig:(id)a0;
- (BOOL)taskingBlobDRExists;
- (BOOL)taskingBlobExists;
- (BOOL)taskingBlobLegacyExists;
- (void)taskingCleanup;
- (void)taskingModeSafeguard;
- (void)taskingModeSetup;
- (BOOL)taskingTypeSpecified;

@end
