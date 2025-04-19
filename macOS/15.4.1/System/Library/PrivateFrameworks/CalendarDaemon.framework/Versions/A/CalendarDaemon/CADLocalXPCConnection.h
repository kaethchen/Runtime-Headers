@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CADLocalXPCConnection : NSObject <CADXPCConnection> {
    id _remoteObject;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL isValid;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) int processIdentifier;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithRemoteObject:(id)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0 synchronous:(BOOL)a1;

@end
