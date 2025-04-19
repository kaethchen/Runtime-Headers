@class NSDate, NSObject;
@protocol OS_dispatch_semaphore;

@interface BOSSUCOperation : BOSOperation

@property (retain) NSObject<OS_dispatch_semaphore> *controllerOperationComplete;
@property (retain) NSObject<OS_dispatch_semaphore> *inProgressOperationComplete;
@property BOOL controllerOperationInProgress;
@property BOOL delegateQueueActivated;
@property (retain) NSDate *lastProgressLogDate;
@property (readonly) int controllerOperation;
@property (readonly) int controllerEndingState;
@property (readonly) BOOL controllerEndingStateMustMatchExactly;
@property (readonly) BOOL shouldWaitForInProgressOperationToFinish;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)bridgeOSSoftwareUpdateController:(id)a0 applyComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 applyProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 cancelComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 preflightComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 preflightProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 prepareComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 prepareProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 purgeComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBrainTransferProgress:(double)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 updateBundleTransferProgress:(double)a1;
- (void)controllerOperationDidProgress:(float)a0;
- (void)_activateDelegateQueue;
- (void)_reportRateLimitedProgressWithPercentComplete:(double)a0;
- (void)controllerOperationDidComplete;
- (int)endingState;
- (id)initWithRequest:(id)a0 controller:(id)a1;
- (void)startControllerOperation;

@end
