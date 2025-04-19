@class NSXPCInterface, NSXPCConnection;

@interface GDXPCLighthouseService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)collectDBStats:(id *)a0;
- (id)collectDBStatus:(id *)a0;
- (void)locked_establishConnection;

@end
