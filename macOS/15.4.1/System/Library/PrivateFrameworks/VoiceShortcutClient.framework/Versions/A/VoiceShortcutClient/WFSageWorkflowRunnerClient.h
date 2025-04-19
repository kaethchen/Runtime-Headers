@class NSString, NSXPCListener;
@protocol WFSageWorkflowRunnerClientDelegate;

@interface WFSageWorkflowRunnerClient : WFWorkflowRunnerClient <WFOutOfProcessWorkflowControllerDelegate, NSXPCListenerDelegate, WFExternalUIPresenterInterface>

@property (copy, nonatomic) NSString *siriSessionID;
@property (readonly, nonatomic) NSXPCListener *dialogRequestListener;
@property (copy, nonatomic) id /* block */ startCompletionBlock;
@property (copy, nonatomic) id /* block */ stepCompletionBlock;
@property (weak, nonatomic) id<WFSageWorkflowRunnerClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)stop;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (void)completeStepExecutionForActionIdentifier:(id)a0 serializedVariable:(id)a1 executionResultMetadata:(id)a2 error:(id)a3;
- (id)createRunningContextFromRequestIfNecessary:(id)a0 descriptor:(id)a1;
- (void)didFinishActionWithIdentifier:(id)a0;
- (void)didStartActionWithIdentifier:(id)a0;
- (void)extractVariableContentFromEncodedReference:(id)a0 withResolutionRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDisplayValueForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchToolInvocationSummaryForInvocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)forTestingOnly_simulateXPCInterruption;
- (id)initWithClientIdentifier:(id)a0 siriSessionID:(id)a1 locale:(id)a2;
- (void)injectContentAsVariable:(id)a0 completionHandler:(id /* block */)a1;
- (void)outOfProcessWorkflowController:(id)a0 actionWithUUID:(id)a1 didFinishRunningWithError:(id)a2 serializedVariable:(id)a3 executionResultMetadata:(id)a4;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithResult:(id)a1 dialogAttribution:(id)a2 runResidency:(unsigned long long)a3;
- (void)outOfProcessWorkflowController:(id)a0 didStartFromWorkflowReference:(id)a1 dialogAttribution:(id)a2;
- (void)performDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performQuery:(id)a0 inValueSet:(id)a1 toolInvocation:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)performSiriRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveDeferredValueFromEncodedStorage:(id)a0 withResolutionRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)stepWithEncodedToolInvocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;

@end
