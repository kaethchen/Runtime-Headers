@class UINSSceneView, UINSGameModule, NSLayoutConstraint;

@interface _UINSGameModuleView : NSView {
    NSLayoutConstraint *_xConstraint;
    NSLayoutConstraint *_yConstraint;
}

@property (weak) UINSSceneView *sceneView;
@property (weak) UINSGameModule *gameModule;
@property struct CGPoint { double x0; double x1; } position;

- (void).cxx_destruct;
- (void)layout;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)dragModule:(id)a0;
- (id)initWithSceneView:(id)a0 gameModule:(id)a1;
- (void)layoutModuleControl;
- (void)presentConfigurationSheet;

@end
