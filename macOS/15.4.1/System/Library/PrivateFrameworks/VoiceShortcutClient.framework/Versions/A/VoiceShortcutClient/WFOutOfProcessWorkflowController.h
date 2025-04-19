@class WFWorkflowDescriptor, WFWorkflowRunningContext, NSString, WFOutOfProcessWorkflowControllerStateMachine, WFDialogAttribution, WFWorkflowRunDescriptor, WFWorkflowRunRequest, WFRunnerConnection, WFSandboxExtensionManager;
@protocol WFOutOfProcessWorkflowControllerVendor, WFOutOfProcessWorkflowControllerDelegate;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerStateMachineDelegate, WFOutOfProcessWorkflowControllerHost>

@property (retain, nonatomic) id<WFOutOfProcessWorkflowControllerVendor> runner;
@property (readonly, nonatomic) long long environment;
@property (retain, nonatomic) WFRunnerConnection *serviceConnection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } serviceConnectionLock;
@property (retain, nonatomic) WFWorkflowRunDescriptor *runDescriptor;
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest;
@property (retain, nonatomic) WFWorkflowDescriptor *currentWorkflow;
@property (nonatomic) BOOL isAutomation;
@property (copy, nonatomic) WFDialogAttribution *currentDialogAttribution;
@property (readonly, nonatomic) WFSandboxExtensionManager *sandboxExtensionManager;
@property (readonly, nonatomic) WFOutOfProcessWorkflowControllerStateMachine *stateMachine;
@property (weak, nonatomic) id<WFOutOfProcessWorkflowControllerDelegate> delegate;
@property (nonatomic) long long presentationMode;
@property (readonly, copy, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (BOOL)resumeRunningWithRequest:(id)a0 error:(out id *)a1;
- (oneway void)actionWithUUID:(id)a0 didFinishRunningWithError:(id)a1 serializedVariable:(id)a2 executionResultMetadata:(id)a3;
- (id)asynchronousRunnerWithError:(out id *)a0 reason:(id)a1;
- (void)controllerStateMachine:(id)a0 didFinishRunningShortcutWithResult:(id)a1;
- (void)controllerStateMachine:(id)a0 didRequestStoppingShortcutWithError:(id)a1;
- (void)controllerStateMachine:(id)a0 shouldNotifyDelegateWithResult:(id)a1 currentDialogAttribution:(id)a2;
- (void)controllerStateMachineDidRequestRunnerTearDown:(id)a0;
- (void)extractVariableContentFromEncodedReference:(id)a0 withResolutionRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDisplayValueForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchToolInvocationSummaryForInvocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)forTestingOnly_simulateXPCInterruption;
- (void)getCurrentProgressCompletedWithCompletionHandler:(id /* block */)a0;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)a0 withIdentifier:(id)a1;
- (id)initWithEnvironment:(long long)a0 runningContext:(id)a1 presentationMode:(long long)a2;
- (id)initWithEnvironment:(long long)a0 runningContext:(id)a1 presentationMode:(long long)a2 existingConnection:(id)a3;
- (void)injectContentAsVariable:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedTimeoutErrorDescription;
- (id)localizedXPCInterruptionErrorDescription;
- (void)pauseWorkflowAndWriteStateToDisk;
- (void)performQuery:(id)a0 inValueSet:(id)a1 toolInvocation:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (oneway void)presenterRequestedUpdatedRunViewSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)reindexToolKitDatabaseWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveDeferredValueFromEncodedStorage:(id)a0 withResolutionRequest:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)runActionWithRunRequestData:(id)a0 error:(out id *)a1;
- (void)runToolWithInvocation:(id)a0;
- (BOOL)runWorkflowWithDescriptor:(id)a0 request:(id)a1 error:(out id *)a2;
- (oneway void)runnerDidPunchToShortcutsJr;
- (oneway void)runnerWillExit;
- (id)runnerWithError:(out id *)a0 synchronous:(BOOL)a1 reason:(id)a2;
- (id)synchronousRunnerWithError:(out id *)a0 reason:(id)a1;
- (void)updateRunViewSource:(id)a0;
- (oneway void)workflowDidPause;
- (oneway void)workflowDidStartRunning:(id)a0 isAutomation:(id)a1 dialogAttribution:(id)a2;

@end
