@class NSMutableArray, QLControlsController;

@interface QLControlsCenteringView : NSView

@property (retain) NSMutableArray *controlsCenteringViewConstraints;
@property (weak) QLControlsController *controlsController;

- (void)dealloc;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)updateConstraints;

@end
