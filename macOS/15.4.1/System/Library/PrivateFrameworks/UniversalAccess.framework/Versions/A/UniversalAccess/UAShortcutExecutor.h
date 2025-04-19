@class NSString, NSMutableDictionary;

@interface UAShortcutExecutor : NSObject <WFWorkflowRunnerClientDelegate>

@property (class, readonly, nonatomic) UAShortcutExecutor *shared;

@property (retain, nonatomic) NSMutableDictionary *_stateByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)_complete:(id)a0 success:(BOOL)a1 cancelled:(BOOL)a2 output:(id)a3 error:(id)a4;
- (void)_run:(id)a0 completionHandler:(id /* block */)a1;
- (void)run:(id)a0 completionHandler:(id /* block */)a1;

@end
