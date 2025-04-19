@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSXPCInterface, NSString;

@interface STCommunicationServiceClient : NSObject <NSXPCListenerDelegate, STPasscodeAuthenticationResultReceiverProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCListener *activeListener;
@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (retain) id providedService;
@property (retain) NSXPCInterface *providedServiceInterface;
@property (copy) id /* block */ pendingAuthenticationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)currentConfigurationWithError:(id *)a0;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (void)receivePasscodeAuthenticationResult:(id)a0 completionHandler:(id /* block */)a1;

@end
