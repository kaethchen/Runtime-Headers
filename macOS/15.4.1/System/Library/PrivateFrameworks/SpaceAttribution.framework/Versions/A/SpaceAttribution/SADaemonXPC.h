@class NSXPCConnection, NSXPCInterface;

@interface SADaemonXPC : NSObject

@property (retain) NSXPCInterface *remoteInterface;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)newWithInvalidationHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithInvalidationHandler:(id /* block */)a0;

@end
