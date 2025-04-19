@class NSProgressIndicator;

@interface AVLoadingIndicatorView : NSView {
    NSProgressIndicator *_progressIndicatorView;
    BOOL _isAnimatingProgressIndicator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_setUpProgressIndicatorViewIfNeeded;
- (void)_updateAnimationStateIfNeeded;

@end
