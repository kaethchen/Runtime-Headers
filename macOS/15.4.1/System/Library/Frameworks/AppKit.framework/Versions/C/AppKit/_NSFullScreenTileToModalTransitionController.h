@class _NSFullScreenSpace, NSWindow, _NSFullScreenTileToModalTransitionOverlayWindow;

@interface _NSFullScreenTileToModalTransitionController : _NSFullScreenTransitionController {
    NSWindow *_sourceWindow;
    _NSFullScreenSpace *_startingSpace;
    _NSFullScreenTileToModalTransitionOverlayWindow *_overlayWindow;
}

+ (id)transitionFromWindow:(id)a0;

- (void)dealloc;
- (void)start;
- (id)initFromWindow:(id)a0;
- (void)_moveWindowToFinalState;
- (void)_performAnimation;
- (void)_setupAndPresentOverlayWindow;
- (void)_transitionComplete;
- (id)destinationSpace;
- (id)startingSpace;

@end
