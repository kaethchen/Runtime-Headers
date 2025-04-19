@interface IMDServiceReachabilityController : NSObject <IMServiceForSendingTaskDelegate> {
    void /* unknown type, empty encoding */ tasks;
}

@property (class, nonatomic, readonly) IMDServiceReachabilityController *sharedController;

@property (nonatomic, readonly) long long taskDeadlineSeconds;

- (id)init;
- (void).cxx_destruct;
- (long long)sortOrderForServiceName:(id)a0;
- (id)reachabilityContextForChat:(id)a0;
- (void)calculateServiceForSendingToChat:(id)a0 accounts:(id)a1 completionBlock:(id /* block */)a2;
- (void)calculateServiceForSendingToHandles:(id)a0 accounts:(id)a1 context:(id)a2 completionBlock:(id /* block */)a3;

@end
