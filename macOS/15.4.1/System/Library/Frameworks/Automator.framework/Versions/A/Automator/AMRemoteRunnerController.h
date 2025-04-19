@class NSString, AMWorkflowCompletionResults, AMWorkflow, NSXPCConnection, NSURL, AMRemoteRunnerXPCDelegate, NSObject;
@protocol OS_dispatch_queue, AMRemoteRunnerXPCProtocol, AMRunnerControllerDelegate;

@interface AMRemoteRunnerController : NSObject <NSXPCConnectionDelegate, AMRunnerController>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) AMRemoteRunnerXPCDelegate *remoteRunnerXPCDelegate;
@property (readonly, nonatomic) id<AMRemoteRunnerXPCProtocol> remoteRunnerProxy;
@property (retain) AMWorkflow *workflow;
@property (copy) id propertyList;
@property BOOL workflowRunInProgress;
@property (retain) NSURL *workingDirectoryURL;
@property (copy) id /* block */ completionHandler;
@property BOOL workflowDelegateHasFinished;
@property (retain) AMWorkflowCompletionResults *workflowCompletionResults;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL shouldDisplayProgressInMenuBar;
@property (weak, nonatomic) id<AMRunnerControllerDelegate> delegate;
@property (readonly, getter=isIdle) BOOL idle;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isPaused) BOOL paused;
@property (readonly, getter=isStopping) BOOL stopping;

+ (BOOL)currentProcessIsSandboxed;
+ (id)remoteRunnerControllerWithPropertyList:(id)a0 workflowURL:(id)a1 workingDirectoryURL:(id)a2 error:(id *)a3;
+ (id)remoteRunnerControllerWithWorkflow:(id)a0 workingDirectoryURL:(id)a1 error:(id *)a2;
+ (id)remoteRunnerControllerWithWorkflowURL:(id)a0 workingDirectoryURL:(id)a1 error:(id *)a2;
+ (id)resumedXPCConnectionWithRemoteRunnerXPCDelegate:(id)a0 queue:(id)a1;
+ (id)wrappedError:(id)a0 forRunningWorkflow:(id)a1;

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (void)step;
- (void)stopWithError:(id)a0;
- (void)_completeWorkflowIfAppropriate;
- (void)_completeWorkflowWithOuput:(id)a0 error:(id)a1;
- (id)initWithPropertyList:(id)a0 workflowURL:(id)a1 workingDirectoryURL:(id)a2;
- (id)initWithWorkflow:(id)a0 propertyList:(id)a1 workingDirectoryURL:(id)a2;
- (id)initWithWorkflow:(id)a0 workingDirectoryURL:(id)a1;
- (void)remoteRunnerXPCDelegateHasReceivedFinished;
- (void)runWithInput:(id)a0 steppingInitially:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
