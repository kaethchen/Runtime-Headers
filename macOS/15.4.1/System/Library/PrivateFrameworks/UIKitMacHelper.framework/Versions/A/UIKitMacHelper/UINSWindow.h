@class NSArray, UINSSceneWindowController;

@interface UINSWindow : NSWindow

@property (nonatomic, setter=_setIgnoreConstrainFrameToScreen:) BOOL _ignoreConstrainFrameToScreen;
@property (readonly) UINSSceneWindowController *sceneWindowController;
@property (readonly, nonatomic) NSArray *_contextIdsForHitTesting;

+ (struct CGSize { double x0; double x1; })_sceneSizeFromAutosaveName:(id)a0 defaultSize:(struct CGSize { double x0; double x1; })a1;
+ (id)keyPathsForValuesAffectingContentLayoutGuide;

- (id)description;
- (id)_contextForLayerHosting;
- (BOOL)_contextIDRemoteStatusChangeShouldAffectWindow:(unsigned int)a0;
- (id)_implicitTabbingIdentifier;
- (id)_layerHostedContext;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_layerTransformToHost;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_wantsFullScreenCleanupOnOrderOut;
- (BOOL)canBecomeKeyWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (BOOL)isMovableByWindowBackground;
- (void)newWindowForTab:(id)a0;
- (void)setInitialOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setWindowController:(id)a0;
- (void)toggleFullScreen:(id)a0;
- (id)_hostedServiceUIWindowContext;
- (double)_sceneToSceneViewScaleFactor;
- (void)_setContentMinSizeFromScene;
- (void)setInitialSceneContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)uiWindows;

@end
