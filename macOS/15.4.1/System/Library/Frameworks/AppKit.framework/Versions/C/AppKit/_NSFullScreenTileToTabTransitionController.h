@class _NSFullScreenSpace, NSWindow, _NSFullScreenTileToTabTransitionOverlayWindow;

@interface _NSFullScreenTileToTabTransitionController : _NSFullScreenTransitionController {
    NSWindow *_sourceWindow;
    _NSFullScreenSpace *_startingSpace;
    _NSFullScreenSpace *_remainingSpace;
    NSWindow *_destinationWindow;
    _NSFullScreenTileToTabTransitionOverlayWindow *_overlayWindow;
}

+ (id)transitionFromWindow:(id)a0 toTabBarInWindow:(id)a1 space:(id)a2;

- (void)dealloc;
- (void)start;
- (void)_moveWindowToFinalState;
- (void)_performAnimation;
- (void)_setupAndPresentOverlayWindow;
- (void)_transitionComplete;
- (id)initFromWindow:(id)a0 toTabBarInWindow:(id)a1 space:(id)a2;
- (id)startingSpace;

@end
