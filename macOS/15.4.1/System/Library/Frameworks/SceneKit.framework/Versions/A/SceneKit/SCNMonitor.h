@class NSView, SCNView;

@interface SCNMonitor : NSWindowController {
    BOOL _nibLoaded;
    NSView *_modelViewContainer;
    NSView *_modelInspectors[10];
    SCNView *_scnView;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (struct __C3DScene { } *)scene;
- (void)sceneDidChange;
- (void)_updateResourceManager;
- (void)launchMonitor:(id)a0;
- (void)modelTypeChanged:(id)a0;
- (void)setSCNView:(id)a0;
- (void)showModelInspector:(int)a0;

@end
