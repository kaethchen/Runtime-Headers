@class NSXPCListenerEndpoint, NSXPCListener, NSXPCConnection, NSXPCInterface, NSString;

@interface STSetupServiceClient : NSObject <NSXPCListenerDelegate, STPasscodeReceiverProtocol>

@property (retain) NSXPCConnection *connection;
@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (retain) NSXPCListener *activeListener;
@property (retain) id providedService;
@property (retain) NSXPCInterface *providedServiceInterface;
@property (copy) id /* block */ pendingProvidePasscodeCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)currentConfigurationForUser:(id)a0 error:(id *)a1;
- (BOOL)applyUpdatedConfiguration:(id)a0 error:(id *)a1;
- (void)collectPasscodeFromUserWithCompletionHandler:(id /* block */)a0;
- (void)receivePasscode:(id)a0 completionHandler:(id /* block */)a1;

@end
