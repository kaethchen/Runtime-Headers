@class NSString, NSXPCConnection;

@interface WFOutOfProcessWorkflowControllerXPCProxy : NSObject <WFOutOfProcessWorkflowControllerVendor>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL isSynchronous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)proxyWithErrorHandler:(id /* block */)a0;
- (oneway void)stopWithError:(id)a0;
- (oneway void)computeFinderResizedSizesForImages:(id)a0 inSizes:(id)a1 completion:(id /* block */)a2;
- (oneway void)extractVariableContentFromEncodedReference:(id)a0 withResolutionRequest:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)fetchDisplayValueForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)fetchToolInvocationSummaryForInvocation:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)getCurrentProgressCompletedWithCompletionHandler:(id /* block */)a0;
- (oneway void)handleIncomingFileForRemoteExecutionWithURL:(id)a0 withIdentifier:(id)a1;
- (id)initWithConnection:(id)a0 isSynchronous:(BOOL)a1;
- (oneway void)injectContentAsVariable:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)pauseWorkflowAndWriteStateToDisk:(id)a0;
- (oneway void)performQuery:(id)a0 inValueSet:(id)a1 toolInvocation:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)prewarmRunnerWithCompletion:(id /* block */)a0;
- (oneway void)reindexToolKitDatabaseWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)resolveDeferredValueFromEncodedStorage:(id)a0 withResolutionRequest:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)resumeRunningFromContext:(id)a0 withRequest:(id)a1 completion:(id /* block */)a2;
- (oneway void)runActionFromRunRequestData:(id)a0 runningContext:(id)a1 completion:(id /* block */)a2;
- (oneway void)runToolWithInvocation:(id)a0;
- (oneway void)runWorkflowWithDescriptor:(id)a0 request:(id)a1 inEnvironment:(id)a2 runningContext:(id)a3 completion:(id /* block */)a4;
- (oneway void)updateRunViewSource:(id)a0;

@end
