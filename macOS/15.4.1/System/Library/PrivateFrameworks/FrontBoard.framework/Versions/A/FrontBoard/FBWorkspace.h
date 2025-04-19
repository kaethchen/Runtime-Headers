@class NSMutableDictionary, FBWorkspaceEventDispatcherSource, FBProcess, NSObject, FBWorkspaceOutgoingConnection, BSCompoundAssertion, NSMutableArray, BSServiceConnectionEndpoint, NSString, FBSSerialQueue, BSAuditToken, RBSAssertion, FBWorkspaceIncomingConnection;
@protocol OS_dispatch_queue, FBWorkspaceDelegate, BSInvalidatable;

@interface FBWorkspace : NSObject <RBSAssertionObserving, FBSceneClient, FBSceneClientProvider> {
    id<FBWorkspaceDelegate> _weak_delegate;
    FBProcess *_weak_process;
    FBWorkspaceIncomingConnection *_lock_incomingConnection;
    FBWorkspaceEventDispatcherSource *_lock_eventDispatcherSource;
    NSMutableDictionary *_lock_identityToRemnantsMap;
    NSMutableArray *_lock_pendedRequests;
    id<BSInvalidatable> _workspaceServiceInjector;
    BSServiceConnectionEndpoint *_lock_outgoingEndpoint;
    FBWorkspaceOutgoingConnection *_lock_outgoingConnection;
    NSMutableDictionary *_lock_identityToSceneMap;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_workspaceQueue;
    BSCompoundAssertion *_compoundAssertion;
    RBSAssertion *_lock_lifeAssertion;
    RBSAssertion *_lock_connectAssertion;
    RBSAssertion *_lock_afterlifeAssertion;
    long long _lock_activeInterruptionPolicy;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _lock_activeAssertionState;
    BOOL _shouldInjectEndpoint;
    BOOL _lock_didReceiveHandshake;
    BOOL _lock_invalidated;
}

@property (nonatomic, setter=test_setRejectAllSceneClients:) BOOL test_rejectAllSceneClients;
@property (weak, nonatomic) id<FBWorkspaceDelegate> delegate;
@property (readonly, weak, nonatomic) FBProcess *process;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)assertionWillInvalidate:(id)a0;
- (oneway void)createSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (oneway void)handshakeWithRemnants:(id)a0;
- (oneway void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (oneway void)sceneID:(id)a0 didReceiveActions:(id)a1 forExtension:(id)a2;
- (oneway void)sceneID:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)sendActions:(id)a0;
- (oneway void)workspaceID:(id)a0 sendActions:(id)a1 completion:(id /* block */)a2;
- (void)unregisterHost:(id)a0;
- (void)_callOutQueue_requestScene:(id)a0;
- (void)_dropLaunchAssertion;
- (void)_handleSceneRequest:(id)a0;
- (void)_resolveSceneLifecycleStateAndInterruptionPolicy;
- (id)_sceneForHost:(id)a0;
- (id)_sceneForIdentity:(id)a0;
- (void)_terminateWithReason:(id)a0;
- (id)_unregisterSceneForHost:(id)a0;
- (void)_updateProcessAssertionState;
- (id)createServiceQueue;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)host:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)registerHost:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 fromRemnant:(id)a3 error:(out id *)a4;

@end
