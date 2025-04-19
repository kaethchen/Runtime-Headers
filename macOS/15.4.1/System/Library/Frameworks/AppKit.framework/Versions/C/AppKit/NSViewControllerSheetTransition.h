@class NSWindow;

@interface NSViewControllerSheetTransition : NSViewControllerPresentationAnimatorObject {
    NSWindow *_windowPresented;
}

- (void)dealloc;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;

@end
