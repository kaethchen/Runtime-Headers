@class FBSWorkspace, NSMutableDictionary, FBSScene;

@interface USSServicesClient : NSObject {
    FBSWorkspace *_workspace;
    FBSScene *_lock_defaultScene;
    NSMutableDictionary *_lock_scenesByID;
    NSMutableDictionary *_lock_scenesByPersistenceID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) USSServicesClient *sharedInstance;

@property (nonatomic) struct CGSize { double width; double height; } defaultSceneSize;

- (void).cxx_destruct;
- (id)_init;
- (void)connect;
- (void)_noteSceneWillDisconnect:(id)a0;
- (id)_defaultScene;
- (void)_noteSceneDidConnect:(id)a0;
- (void)_updateSceneWithID:(id)a0 withUpdater:(id /* block */)a1 completion:(id /* block */)a2;
- (void)createNewSceneOfSize:(struct CGSize { double x0; double x1; })a0 background:(BOOL)a1 persistenceIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)createNewSceneWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)forgetPersistentScenesWithIdentifiers:(id)a0;
- (unsigned int)hostingContextIDForSceneWithIdentifier:(id)a0 error:(id *)a1;
- (id)sceneForIdentifier:(id)a0;
- (void)submitActivityContinuationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitBackgroundLaunchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitEnableApplicationAccessibilityRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitOpenURLRequest:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)submitSceneActiveRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitSceneResizeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitUserNotificationResponseRequest:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)waitForServerToBeReady;

@end
