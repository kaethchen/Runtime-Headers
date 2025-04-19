@class NSString, NSXPCConnection, NSXPCInterface, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SGDaemonConnection : NSObject {
    NSString *_machServiceName;
    NSXPCInterface *_xpcInterface;
    NSObject<OS_dispatch_queue> *_connectLock;
    NSMutableArray *_abortBlocks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _abortLock;
    NSXPCConnection *_xpcConnection;
}

+ (void)_useSyncXPCWithBlock:(id /* block */)a0;
+ (BOOL)usingSyncXPC;

- (void)dealloc;
- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)disconnect;
- (id)xpcConnection;
- (void)_callAbortBlocks;
- (void)_connectToServer;
- (void)addConnectionInterruptedHandler:(id /* block */)a0;
- (id)initWithMachServiceName:(id)a0 xpcInterface:(id)a1;
- (id)waitUntilReturn:(id /* block */)a0 withTimeout:(double)a1 error:(id *)a2;

@end
