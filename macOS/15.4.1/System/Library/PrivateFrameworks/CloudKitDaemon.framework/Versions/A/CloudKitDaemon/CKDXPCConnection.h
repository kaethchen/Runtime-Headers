@class NSString, NSMutableDictionary, NSXPCConnection, NSHashTable, NSOperationQueue, NSDate, CKDProcessScopedClientProxy;

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKPropertiesDescription, CKDXPCConnectionMuxer>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy;
@property (retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference;
@property (readonly, nonatomic) NSHashTable *containerProxies;
@property (retain, nonatomic) NSOperationQueue *systemAvailableQueue;
@property (readonly, nonatomic) NSDate *connectionDate;
@property (readonly, nonatomic) NSHashTable *sharedContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)redactedDescription;
- (id)initWithXPCConnection:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKStatusReportArray;
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)noteClientProcessScopedMetadata:(id)a0;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)a0;
- (id)containerProxyFromSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 outError:(id *)a2;
- (void)enumerateContainersUsingBlock:(id /* block */)a0;
- (void)enumerateContainersWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)a0;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;

@end
