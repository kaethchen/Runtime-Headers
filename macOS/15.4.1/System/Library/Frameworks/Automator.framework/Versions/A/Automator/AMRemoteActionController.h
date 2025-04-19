@class NSMapTable, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMRemoteActionController : NSObject <NSXPCConnectionDelegate>

@property (class, readonly, nonatomic) AMRemoteActionController *sharedRemoteActionController;

@property (retain, nonatomic) NSMutableDictionary *_connectionsByBundleIdentifier;
@property (retain, nonatomic) NSMapTable *_storageByRemoteAction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (void)_dummyHostViewControllerForRemoteAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_invalidateRemoteActionWithLock:(id)a0 fromXPCError:(BOOL)a1;
- (id)_remoteActionsForConnection:(id)a0;
- (void)_setNameForConnection:(id)a0 remoteAction:(id)a1;
- (id)_storageForRemoteActionWithLock:(id)a0 creatingIfNeeded:(BOOL)a1;
- (id)_xpcConnectionForRemoteActionWithLock:(id)a0;
- (id)_xpcProxyForRemoteAction:(id)a0 workflowUUID:(id)a1 synchronous:(BOOL)a2 proxyCreationError:(id *)a3 errorHandler:(id /* block */)a4;
- (id)_xpcProxyFromProxyCreatingObject:(id)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
- (id)_xpcServiceProxyForRemoteActionWithLock:(id)a0 errorHandler:(id /* block */)a1;
- (id)actionProxyForRemoteAction:(id)a0 workflowUUID:(id)a1 synchronous:(BOOL)a2 proxyCreationError:(id *)a3 errorHandler:(id /* block */)a4;
- (id)asynchronousXPCProxyForRemoteAction:(id)a0 workflowUUID:(id)a1 proxyCreationError:(id *)a2 errorHandler:(id /* block */)a3;
- (void)configureDummyViewControllerForRemoteAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)hostViewControllerForRemoteAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateRemoteAction:(id)a0;
- (BOOL)remoteActionIsRegistered:(id)a0;
- (id)variableControllerProxyForRemoteAction:(id)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
- (id)variableDelegateForRemoteAction:(id)a0;

@end
