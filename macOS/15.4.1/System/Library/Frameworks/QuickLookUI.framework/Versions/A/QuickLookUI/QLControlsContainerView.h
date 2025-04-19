@class NSMutableArray, QLControlsController;

@interface QLControlsContainerView : NSView

@property (weak) QLControlsController *controlsController;
@property (retain) NSMutableArray *containerViewConstraints;

- (void)dealloc;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)_updateGlassyButtonStyleConstraints;
- (void)_updateNormalButtonStyleConstraints;

@end
