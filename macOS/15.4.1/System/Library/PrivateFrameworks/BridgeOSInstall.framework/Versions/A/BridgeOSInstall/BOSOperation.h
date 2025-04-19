@class BOSRequest, NSString, BridgeOSSoftwareUpdateController, NSDate, NSError;

@interface BOSOperation : NSOperation <BridgeOSSoftwareUpdateControllerDelegate>

@property (retain) BOSRequest *request;
@property (retain) BridgeOSSoftwareUpdateController *controller;
@property (retain) NSDate *startDate;
@property (retain) NSDate *finishedDate;
@property (retain) NSError *error;
@property (readonly) BOOL shouldRun;
@property double totalEstimatedTime;
@property (readonly) double estimatedTimeRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (BOOL)isFinished;
- (id)initWithRequest:(id)a0 controller:(id)a1;

@end
