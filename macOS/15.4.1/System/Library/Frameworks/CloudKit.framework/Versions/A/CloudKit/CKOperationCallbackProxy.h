@class NSXPCListener, NSString, CKOperationCallbackProxyEndpoint, NSHashTable;

@interface CKOperationCallbackProxy : CKWeakObjectCallbackProxy <NSXPCListenerDelegate>

@property (readonly, nonatomic) Class cls;
@property (readonly, nonatomic) NSHashTable *connections;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, copy, nonatomic) CKOperationCallbackProxyEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (id)initWithOperation:(id)a0 callbackProtocol:(id)a1;

@end
