@class NSDate, BOSRequest, NSError, NSString, BOSOperation, NSObject, NSMutableArray, BridgeOSSoftwareUpdateController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BOSOperationController : NSObject <BridgeOSSoftwareUpdateControllerDelegate>

@property (retain) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain) BOSRequest *request;
@property (copy) id /* block */ progressHandler;
@property (retain) BridgeOSSoftwareUpdateController *controller;
@property (retain) NSMutableArray *operations;
@property (retain) BOSOperation *currentOperation;
@property (retain) NSError *error;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property double completedTime;
@property double totalEstimatedTime;
@property (retain) NSDate *lastTimeRemainingEstimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)totalEstimatedTimeForRequest:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cleanUp;
- (void)_runOperations;
- (void)bridgeOSSoftwareUpdateController:(id)a0 applyComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 applyProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 cancelComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 connectionFailure:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 preflightComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 preflightProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 prepareComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 prepareProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 purgeComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateControlGranted:(BOOL)a1 error:(id)a2;
- (BOOL)bridgeOSSoftwareUpdateController:(id)a0 updateControlRequested:(id)a1;
- (id)bridgeOSSoftwareUpdateControllerRequestSSOTicket:(id)a0;
- (void)_startReportingProgress;
- (void)_stopReportingProgress;
- (double)_calculateTotalEstimatedTime;
- (void)_enqueueOperations;
- (void)_handleCallbackWithSelector:(SEL)a0 block:(id /* block */)a1;
- (BOOL)_handleDebugNVRAMVariablesAndContinue;
- (float)_progressPercentage;
- (void)_reportProgressWithPercentComplete:(double)a0 timeRemaining:(double)a1;
- (void)_setBridgeOSSoftwareUpdateController:(id)a0;
- (double)_timeRemaining;
- (void)startWithRequest:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
