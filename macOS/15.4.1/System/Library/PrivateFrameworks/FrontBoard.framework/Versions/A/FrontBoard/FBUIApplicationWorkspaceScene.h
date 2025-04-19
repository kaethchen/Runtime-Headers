@class NSMutableSet, NSMutableArray;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet *_allWatchdogs;
    NSMutableArray *_watchdogStack;
    BOOL _sentSceneCreate;
}

- (void).cxx_destruct;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)a0;
- (id)_workspaceQueue_createWatchdogForProcess:(id)a0 sceneAction:(unsigned char)a1 transitionContext:(id)a2;
- (void)_workspaceQueue_invalidate;
- (id)initWithConnection:(id)a0 host:(id)a1 settings:(id)a2 clientSettings:(id)a3 fromRemnant:(BOOL)a4;

@end
