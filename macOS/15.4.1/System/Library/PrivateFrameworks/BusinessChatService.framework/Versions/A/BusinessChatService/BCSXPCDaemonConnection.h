@class NSString, NSXPCConnection;
@protocol BCSXPCDaemonProtocol, BCSXPCDaemonBusinessEmailClientInterface;

@interface BCSXPCDaemonConnection : NSObject <BCSXPCDaemonConnectionProtocol>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, weak, nonatomic) id<BCSXPCDaemonBusinessEmailClientInterface> exportedClient;
@property (readonly, retain) id<BCSXPCDaemonProtocol> remoteObjectProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resume;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithMachServiceName:(id)a0 exportedClient:(id)a1;
- (void)setExportedClient:(id)a0;

@end
