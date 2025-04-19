@class NSXPCListener, NSString, NSXPCConnection, NSArray, NSObject;
@protocol OS_dispatch_queue, ASTRepairDelegateProtocol, ASTRepairProtocol;

@interface ASTRepairSessionProvider : NSObject <NSXPCListenerDelegate, ASTRepairProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceCheckQueue;
@property (retain, nonatomic) id<ASTRepairProtocol> clientConnection;
@property (retain, nonatomic) id<ASTRepairDelegateProtocol> listenerConnection;
@property (weak, nonatomic) id<ASTRepairDelegateProtocol> delegate;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSArray *entitlements;
@property (weak, nonatomic) id<ASTRepairProtocol> receiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServiceName:(id)a0;
- (void)startListening;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)establishConnectionWithCompletionHandler:(id /* block */)a0;
- (void)ping:(id /* block */)a0;
- (void)cancelSuite;
- (void)completeTestSuite:(id)a0 description:(id)a1;
- (void)endWithCompletionHandler:(id /* block */)a0;
- (void)estimatedTimeRemainingForTest:(id)a0 completion:(id /* block */)a1;
- (id)initWithServiceName:(id)a0 entitlements:(id)a1;
- (void)progressForTest:(id)a0 completion:(id /* block */)a1;
- (void)requestAsset:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestSuiteResult:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestSuiteStart:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestSuitesAvailableWithCompletionHandler:(id /* block */)a0;
- (void)sendTestResult:(id)a0 withCompletion:(id /* block */)a1;
- (void)showInstructionalPrompt:(id)a0 withConfirmation:(id /* block */)a1;
- (void)startTest:(id)a0 parameters:(id)a1;
- (void)updateTestSuiteImage:(id)a0;
- (void)updateTestSuiteProgress:(id)a0;

@end
