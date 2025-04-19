@class NSString, NSMutableDictionary, FBSSerialQueue, NSMutableArray, NSObject;
@protocol NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSSceneUpdater, FBSceneClient, FBSceneClientProvider> {
    BOOL _workspaceInitialized;
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    NSMutableDictionary *_localSceneInfoByIdentity;
    NSMutableDictionary *_hostsByIdentity;
    FBSSerialQueue *_callOutQueue;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)hostProcess;
- (id)callOutQueue;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (BOOL)canHaveAgent;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (id)sceneWithIdentity:(id)a0;
- (id)scenes;
- (void)sendActions:(id)a0 toWorkspaceID:(id)a1 completion:(id /* block */)a2;
- (void)unregisterHost:(id)a0;
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)a0;
- (id)createSceneFutureWithDefinition:(id)a0 completion:(id /* block */)a1;
- (id)fbsSceneForScene:(id)a0;
- (id)fbsSceneWithIdentifier:(id)a0;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)host:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)registerHost:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 fromRemnant:(id)a3 error:(out id *)a4;

@end
