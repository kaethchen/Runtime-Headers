@class WFDialogRequest, NSString, WFSageWorkflowRunnerClient, WFDialogResponse;

@interface ToolKit.SageWorkflowRunnerClientToolExecutionSession : NSObject <WFSageWorkflowRunnerClientDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ currentDialogHandler;
    void /* unknown type, empty encoding */ currentInvocation;
    void /* unknown type, empty encoding */ _eventStream;
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ closed;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ actionStateObservation;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)workflowRunnerClient:(WFSageWorkflowRunnerClient *)a0 postedDialogRequest:(WFDialogRequest *)a1 completionHandler:(void (^)(WFDialogResponse *))a2;
- (void)workflowRunnerClient:(id)a0 postedEvent:(long long)a1;

@end
