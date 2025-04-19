@class WFWorkflowRunningContext;

@interface WFHandoffRunnerClient : WFWorkflowRunnerClient

@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext;
@property (copy, nonatomic) id /* block */ runningDidStartHandler;

- (void).cxx_destruct;
- (void)startWithHandler:(id /* block */)a0;
- (void)handleWorkflowDidStart:(id)a0;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)runWorkflowWithRequest:(id)a0 descriptor:(id)a1 completion:(id /* block */)a2;
- (id)initWithRunningContext:(id)a0 runRequest:(id)a1;
- (void)notifyStartHandlerWithProgress:(id)a0;
- (id)initWithWorkflowControllerState:(id)a0 runSource:(id)a1 remoteDialogPresenterEndpoint:(id)a2 error:(id *)a3;

@end
