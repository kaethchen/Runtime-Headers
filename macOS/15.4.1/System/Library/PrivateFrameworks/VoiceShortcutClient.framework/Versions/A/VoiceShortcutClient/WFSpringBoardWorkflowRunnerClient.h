@class WFSpringBoardWebClipMetadata, NSString;

@interface WFSpringBoardWorkflowRunnerClient : WFWorkflowRunnerClient <WFWorkflowRunnerClientDelegate>

@property (retain, nonatomic) WFSpringBoardWebClipMetadata *metadata;
@property (retain, nonatomic) WFSpringBoardWorkflowRunnerClient *retainedSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (id)initWithWebClipMetadata:(id)a0;
- (id)initWithWorkflowIdentifier:(id)a0;
- (void)showSingleStepCompletionWithCompletion:(id /* block */)a0;

@end
