@class NSHashTable, NSString, FBSSceneHostHandle, FBSWorkspace, NSMutableDictionary, BSServiceConnection, FBSSerialQueue, FBSWorkspaceScenesClientIdentifier, NSObject, NSMutableArray;
@protocol FBSWorkspaceDelegate, FBSWorkspaceServiceClientInterface, NSCopying, OS_dispatch_queue;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceServiceServerInterface, FBSWorkspaceServiceTarget> {
    FBSWorkspace *_workspace;
    id<FBSWorkspaceDelegate> _workspaceDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    BSServiceConnection *_connection;
    FBSWorkspaceScenesClientIdentifier *_identifier;
    NSMutableDictionary *_scenesByIdentity;
    NSMutableDictionary *_clientSettingsByIdentity;
    NSHashTable *_reconnectingScenes;
    NSMutableArray *_pendedSendBlocks;
    FBSSceneHostHandle *_hostHandle;
    id<FBSWorkspaceServiceClientInterface> _handshakeLock_remoteTarget;
    NSMutableDictionary *_reportingLock_scenesByIdentity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handshakeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportingLock;
    BOOL _activated;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)hostProcess;
- (id)callOutQueue;
- (void)activateSceneFuture:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 completion:(id /* block */)a2;
- (BOOL)canHaveAgent;
- (id)createSceneFutureWithDefinition:(id)a0;
- (oneway void)createSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (oneway void)reconnectSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (oneway void)sceneID:(id)a0 destroyWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (oneway void)sceneID:(id)a0 sendActions:(id)a1 toExtension:(id)a2 completion:(id /* block */)a3;
- (oneway void)sceneID:(id)a0 updateWithSettingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)sceneWithIdentity:(id)a0;
- (id)scenes;
- (oneway void)sendActions:(id)a0 completion:(id /* block */)a1;
- (void)sendActions:(id)a0 toWorkspaceID:(id)a1 completion:(id /* block */)a2;
- (oneway void)willTerminateWithTransitionContext:(id)a0;

@end
