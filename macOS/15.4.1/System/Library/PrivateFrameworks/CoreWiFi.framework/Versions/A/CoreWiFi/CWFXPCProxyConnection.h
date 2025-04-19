@class CWFXPCProxy;

@interface CWFXPCProxyConnection : NSObject <NSXPCProxyCreating> {
    CWFXPCProxy *_XPCProxy;
    CWFXPCProxy *_synchronousXPCProxy;
}

@property (copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithForwardingTarget:(id)a0;

@end
