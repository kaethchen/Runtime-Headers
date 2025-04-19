@interface BOSSUCCancelOperation : BOSSUCOperation

- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 cancelComplete:(id)a1;
- (int)controllerEndingState;
- (BOOL)controllerEndingStateMustMatchExactly;
- (int)controllerOperation;
- (BOOL)shouldWaitForInProgressOperationToFinish;
- (void)startControllerOperation;

@end
