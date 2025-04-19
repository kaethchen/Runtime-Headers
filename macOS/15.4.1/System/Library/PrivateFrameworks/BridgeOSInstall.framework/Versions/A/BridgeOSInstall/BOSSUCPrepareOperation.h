@interface BOSSUCPrepareOperation : BOSSUCOperation

- (id)description;
- (void)bridgeOSSoftwareUpdateController:(id)a0 prepareComplete:(id)a1;
- (void)bridgeOSSoftwareUpdateController:(id)a0 prepareProgress:(double)a1;
- (int)controllerEndingState;
- (int)controllerOperation;
- (id)initWithRequest:(id)a0 controller:(id)a1;
- (void)startControllerOperation;

@end
