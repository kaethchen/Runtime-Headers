@class CALayer;

@interface _NSFullScreenTileToTabTransitionOverlayWindow : _NSFullScreenTileResizeCrossfadeOverlayWindow {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingTileFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalTabFrame;
    CALayer *_finalTabLayer;
    CALayer *_finalTabBackgroundLayer;
    CALayer *_realTabCoverLayer;
}

- (void)dealloc;
- (void)captureAfterWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 destinationTab:(id)a1;
- (void)captureBeforeWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closingTileTargetFrame;
- (void)configureAnimationToFinalStateWithDuration:(double)a0;

@end
