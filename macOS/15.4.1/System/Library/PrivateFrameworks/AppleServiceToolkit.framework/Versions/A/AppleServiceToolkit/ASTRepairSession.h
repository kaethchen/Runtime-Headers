@class NSObject, NSSet, NSXPCConnection;
@protocol OS_dispatch_queue, ASTRepairProtocol;

@interface ASTRepairSession : ASTSession <ASTRepairDelegateProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *repairAliveCheckQueue;
@property (retain) id<ASTRepairProtocol> remoteRepairServer;
@property (retain, nonatomic) NSSet *suitesAvailable;

+ (void)downloadAsset:(id)a0 fileHandle:(id)a1 completionHandler:(id /* block */)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)start;
- (void)end;
- (void)archive;
- (void)cancelSuite;
- (void)completeTestSuite:(id)a0 description:(id)a1;
- (void)estimatedTimeRemainingForTest:(id)a0 completion:(id /* block */)a1;
- (void)progressForTest:(id)a0 completion:(id /* block */)a1;
- (void)requestSuiteStart:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSuiteSummary:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSuitesAvailableWithCompletionHandler:(id /* block */)a0;
- (BOOL)sendTestResult:(id)a0 error:(id *)a1;
- (BOOL)shouldShowResults;
- (void)showInstructionalPrompt:(id)a0 withConfirmation:(id /* block */)a1;
- (void)startTest:(id)a0 parameters:(id)a1;
- (void)updateTestSuiteImage:(id)a0;
- (void)updateTestSuiteProgress:(id)a0;

@end
