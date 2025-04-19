@class AMSURLTaskInfo, AMSMutablePromise, NSURLResponse;

@interface AMSMediaInvokeAuthenticationQueuedObject : NSObject

@property (retain) NSURLResponse *response;
@property (retain) AMSURLTaskInfo *taskInfo;
@property (retain) AMSMutablePromise *pendingPromise;
@property BOOL ignoringResult;

- (void).cxx_destruct;

@end
