@class NSXPCConnection, NSXPCInterface, CKProcessScopedDaemonProxy, NSMutableArray;

@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    BOOL _hasValidConnection;
    NSXPCConnection *_connection;
    NSMutableArray *_invalidationCompletionHandlers;
}

@property (class, readonly, nonatomic) CKXPCConnection *sharedXPCConnection;
@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonMuxerInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientMuxerInterface;

@property (readonly) int processIdentifier;
@property (readonly, nonatomic) CKProcessScopedDaemonProxy *processScopedDaemonProxy;

- (void)dealloc;
- (void).cxx_destruct;
- (void)activate;
- (void)invalidate:(id /* block */)a0;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getDaemonTestServerManagerProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initInternal;

@end
