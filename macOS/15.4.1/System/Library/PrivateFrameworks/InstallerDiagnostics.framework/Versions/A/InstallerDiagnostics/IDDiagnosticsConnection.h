@class NSString, NSXPCConnection;

@interface IDDiagnosticsConnection : NSObject <IDDiagnosticsProtocol>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)connectionWithErrorHandler:(id /* block */)a0;
- (void)startNewInstall;
- (void)finishInstall;
- (void)clearDiagnosticMessages:(id /* block */)a0;
- (void)clearSingleDiagnosticMessage:(long long)a0 completionHandler:(id /* block */)a1;
- (void)finishMessageTransport;
- (void)recordDiagnosticMessage:(long long)a0 withData:(id)a1 completionHandler:(id /* block */)a2;
- (void)startMessageTransport;

@end
