@class NSString, FBSSceneSettings, FBSSceneIdentity, FBSSceneDefinition, FBSSceneSpecification, NSMutableArray, FBSSerialQueue, FBSSceneClientSettings, FBWorkspaceConnection;
@protocol FBSceneHost, BSInvalidatable, FBSSceneHostAgent;

@interface FBWorkspaceScene : NSObject <FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding> {
    FBWorkspaceConnection *_lock_connection;
    FBSSceneDefinition *_definition;
    NSString *_logProem;
    id<FBSSceneHostAgent> _hostAgent;
    NSMutableArray *_agentSessions;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSMutableArray *_lock_sceneCreatedBlocks;
    id<BSInvalidatable> _queue_workspaceAssertion;
    unsigned long long _queue_inFlightUpdateEvents;
    unsigned long long _queue_inFlightLifecycleEvents;
    unsigned long long _queue_inFlightUpdateAllowsThrottling;
    unsigned long long _queue_inFlightUpdateDisallowsThrottling;
    unsigned long long _queue_inFlightExternallyManagedEvents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _lock_lifecycleState;
    unsigned char _queue_assertionState;
    char _queue_activityMode;
    BOOL _lock_sentSceneCreate;
    BOOL _reconnect;
    BOOL _lock_invalidated;
    FBSSerialQueue *_workspaceQueue;
}

@property (readonly, nonatomic) BOOL usesOutgoingConnection;
@property (readonly, weak, nonatomic) id<FBSceneHost> host;
@property (readonly, copy, nonatomic) FBSSceneIdentity *identity;
@property (readonly, copy, nonatomic) FBSSceneSettings *settings;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned char)_sceneActionForLifecycleFromState:(unsigned char)a0 toState:(unsigned char)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)identifier;
- (void)invalidate;
- (id)parameters;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)definition;
- (id)hostProcess;
- (id)callOutQueue;
- (void)agent:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)agent:(id)a0 registerMessageHandler:(id /* block */)a1;
- (id)clientProcess;
- (void)closeSession:(id)a0;
- (id)counterpartAgent;
- (id)openSessionWithName:(id)a0 executionPolicy:(id)a1;
- (void)_workspaceQueue_updateAssertion;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)a0;
- (id)_workspaceQueue_createWatchdogForProcess:(id)a0 sceneAction:(unsigned char)a1 transitionContext:(id)a2;
- (void)_workspaceQueue_decrementInFlightUpdatesForAction:(unsigned char)a0 allowThrottling:(BOOL)a1 externallyManaged:(BOOL)a2;
- (void)_workspaceQueue_incrementInFlightUpdatesForAction:(unsigned char)a0 allowThrottling:(BOOL)a1 externallyManaged:(BOOL)a2;
- (void)_workspaceQueue_invalidate;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)a0;
- (void)_workspaceQueue_sendMessageToClient:(id /* block */)a0;
- (void)_workspaceQueue_sendSceneCreateToClient:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)_workspaceQueue_sendSceneUpdateToClient:(id)a0 settingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)initWithConnection:(id)a0 host:(id)a1 settings:(id)a2 clientSettings:(id)a3 fromRemnant:(BOOL)a4;

@end
