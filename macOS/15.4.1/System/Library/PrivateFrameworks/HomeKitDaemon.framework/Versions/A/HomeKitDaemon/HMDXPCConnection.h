@class NSString, NSXPCConnection, NSXPCInterface, HMFProcessInfo, NSObject;
@protocol OS_dispatch_queue;

@interface HMDXPCConnection : HMFObject <HMDXPCConnection> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) HMFProcessInfo *processInfo;
@property (readonly) int processIdentifier;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly) id remoteObjectProxy;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)activate;
- (id)initWithXPCConnection:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)valueForEntitlement:(id)a0;
- (id)attributeDescriptions;

@end
