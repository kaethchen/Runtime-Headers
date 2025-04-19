@class NSXPCListener, NSString, IDDiagnosticsStore, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IDDiagnosticsServer : NSObject <NSXPCListenerDelegate, IDDiagnosticsProtocol>

@property (retain) NSXPCListener *listener;
@property (retain) NSMutableArray *clientConnections;
@property (retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly) BOOL installFinished;
@property (retain) IDDiagnosticsStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startNewInstall;
- (void)finishInstall;
- (void)clearDiagnosticMessages:(id /* block */)a0;
- (void)clearSingleDiagnosticMessage:(long long)a0 completionHandler:(id /* block */)a1;
- (void)finishMessageTransport;
- (void)recordDiagnosticMessage:(long long)a0 withData:(id)a1 completionHandler:(id /* block */)a2;
- (void)startMessageTransport;
- (void)startServer;

@end
