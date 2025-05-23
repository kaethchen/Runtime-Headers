@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString, NSExtension;

@interface RPBroadcastExtensionProxy : NSObject <NSXPCListenerDelegate, RPBroadcastExtensionProtocol, RPBroadcastDaemonProtocol>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSExtension *broadcastUploadExtension;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ connectionReadyHandler;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) id /* block */ serviceInfoHandler;
@property (copy, nonatomic) id /* block */ broadcastURLHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly, nonatomic) BOOL enableMixedRealityCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)invalidateConnection;
- (void)ping;
- (void)establishConnectionWithHandler:(id /* block */)a0;
- (void)finishBroadcastWithError:(id)a0;
- (id)initWithBroadcastUploadExtension:(id)a0;
- (id)initWithBroadcastUploadListenerEndpoint:(id)a0;
- (void)processPayload:(id)a0 completion:(id /* block */)a1;
- (void)setupNewConnection:(id)a0;
- (void)updateBroadcastURL:(id)a0;
- (void)updateServiceInfo:(id)a0;

@end
