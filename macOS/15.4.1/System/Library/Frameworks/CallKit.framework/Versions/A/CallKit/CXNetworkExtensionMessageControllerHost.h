@class NSXPCListener, NSMapTable, NSString, NSMutableSet;

@interface CXNetworkExtensionMessageControllerHost : NSObject <NSXPCListenerDelegate, CXNetworkExtensionMessageControllerHostConnectionDelegate>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSMutableSet *connections;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)networkExtensionMessageControllerHostConnection:(id)a0 didReceiveIncomingMessage:(id)a1 forBundleIdentifier:(id)a2;
- (void)networkExtensionMessageControllerHostConnection:(id)a0 didReceiveIncomingPushToTalkMessage:(id)a1 forBundleIdentifier:(id)a2;
- (void)networkExtensionMessageControllerHostConnectionInvalidated:(id)a0;

@end
