@class NSView, AVDetachedFullscreenController, NSLayoutConstraint;

@interface AVDetachedFullscreenContentContainerView : NSView {
    NSLayoutConstraint *_contentViewXConstraint;
    NSLayoutConstraint *_contentViewYConstraint;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
}

@property (readonly, weak, nonatomic) AVDetachedFullscreenController *fullscreenController;
@property (retain, nonatomic) NSView *contentView;

- (void).cxx_destruct;
- (void)layout;
- (void)keyUp:(id)a0;
- (void)viewDidMoveToWindow;
- (void)_constrainContentViewToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (BOOL)_isTransitioningToOrFromFullscreen;
- (void)_makeContentViewFirstResponderIfPossible;
- (id)initWithFullscreenController:(id)a0;

@end
