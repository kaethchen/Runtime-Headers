@class NSString, NSXPCConnection;
@protocol _HKXPCExportable;

@interface _HKXPCConnection : NSObject {
    NSXPCConnection *_underlyingConnection;
}

@property (weak, nonatomic) id<_HKXPCExportable> exportedObject;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (id)initWithListenerEndpoint:(id)a0;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithServiceName:(id)a0;
- (id)_loggingPrefix;
- (id)initWithUnderlyingConnection:(id)a0;
- (void)resumeWithExportedInterface:(id)a0 remoteInterface:(id)a1;
- (void)unitTest_interrupt;

@end
