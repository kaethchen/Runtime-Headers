@class NSError, SMEngineDelegateProxy, NSArray, NSDate, NSString, NSMutableArray, NSObject, SMMigrationRequest, NSMutableSet;
@protocol OS_dispatch_queue;

@interface SMEngine : NSObject <SMSystemScannerDaemonClient, SMSystemScannerChangesProtocol, SMPathsProgressInfoDelegateProtocol>

@property (retain) SMMigrationRequest *migrationRequest;
@property (retain) NSObject<OS_dispatch_queue> *enginePropertiesQueue;
@property (retain) NSObject<OS_dispatch_queue> *engineQueue;
@property unsigned long long state;
@property unsigned long long enginePhase;
@property unsigned long long totalBytes;
@property unsigned long long deletedBytes;
@property unsigned long long finishedBytes;
@property BOOL engineWaitingForPathing;
@property (retain) SMEngineDelegateProxy *delegate;
@property (retain) NSMutableArray *engineSteps;
@property (retain) NSArray *engineStepsForCurrentMigration;
@property unsigned long long requestedDaemonScannerState;
@property (retain) NSDate *startTime;
@property (retain) NSError *error;
@property (retain) NSString *tracingUUID;
@property (retain) NSDate *pathingStartTime;
@property double timeDelayedByPathing;
@property (readonly) BOOL useSandbox;
@property (readonly) BOOL engineShouldContinue;
@property (readonly) BOOL shouldContinueSteps;
@property (retain) NSMutableSet *pathsInSandbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)suspend;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)addDelegate:(id)a0;
- (id)userCanceledError;
- (void)finally;
- (id)errorWithMessage:(id)a0;
- (id)notEnoughFreeSpaceOnTargetError;
- (id)_engineStepPhaseToString:(unsigned long long)a0;
- (void)acceptNewMigrationRequest:(id)a0;
- (void)acknowledgeCompletedRequest;
- (void)addRootUserToUsersToTransferInMigrationRequest;
- (void)aggregateEngineErrorsAndWarnings;
- (void)awaitSystemAvailability;
- (void)copyCompletedForPath:(id)a0;
- (BOOL)copyWasCompletedForPath:(id)a0;
- (void)doneWithCurrentRequest;
- (BOOL)engineSourceSystemAvailable;
- (BOOL)ensureSourceIsMounted;
- (id)errorWithMessage:(id)a0 underlyingError:(id)a1;
- (id)fdeNeedsToBeReeanbled;
- (void)finalizeAndSendTelemetry;
- (void)gatherCompletionMessageTracerData;
- (id)getCurrentSystemFromScanner;
- (BOOL)isEngineState:(unsigned long long)a0;
- (void)messageTraceCancellation;
- (void)messageTraceStateCompletion;
- (void)pathingProgressFormatKey:(id)a0 arguments:(id)a1;
- (void)predetermineTranslatedUIDs;
- (void)printEngineDescription;
- (void)processAnalyticsData;
- (void)processErrors;
- (void)runEngine;
- (BOOL)runEngineSteps;
- (void)runPather;
- (void)saveFinalMigrationDetailsToTheRequestBeforeWeReboot;
- (void)setEngineSteps;
- (void)setupEngineBeforeRunningSteps;
- (BOOL)setupForDataTransfer;
- (void)setupMessageTracing;
- (BOOL)spaceIsSufficient;
- (void)startupNewRequest;
- (id)stepError:(id)a0 exception:(id)a1 phase:(id)a2;
- (void)stopAllSteps;
- (void)stopOrSuspend:(unsigned long long)a0;
- (void)systemScannerAddedSystem:(id)a0;
- (void)systemScannerRemovedSystem:(id)a0;
- (void)systemScannerSystemChanged:(id)a0 onSystem:(id)a1;
- (void)systemsAreAvailable;
- (void)updateUsersToTransferInMigrationRequest;
- (void)waitIfSuspended:(BOOL *)a0 sourceDisappeared:(BOOL *)a1;

@end
