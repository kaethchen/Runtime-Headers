@class NSWindow;

@interface NSViewControllerModalWindowTransitionAnimator : NSViewControllerPresentationAnimatorObject

@property (retain, nonatomic) NSWindow *window;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_makeWindowWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_windowWillClose:(id)a0;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;

@end
