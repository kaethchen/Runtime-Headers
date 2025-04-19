@interface BOSSUCApplyOperation : BOSSUCOperation

- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 applyComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 applyProgress:(double)a1;
- (int)controllerEndingState;
- (int)controllerOperation;
- (id)initWithRequest:(id)a0 controller:(id)a1;
- (void)startControllerOperation;

@end
