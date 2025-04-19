@interface BOSSUCPurgeOperation : BOSSUCOperation

- (id)description;
- (BOOL)shouldRun;
- (void)bridgeOSSoftwareUpdateController:(id)a0 purgeComplete:(id)a1;
- (int)controllerEndingState;
- (BOOL)controllerEndingStateMustMatchExactly;
- (int)controllerOperation;
- (BOOL)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;

@end
