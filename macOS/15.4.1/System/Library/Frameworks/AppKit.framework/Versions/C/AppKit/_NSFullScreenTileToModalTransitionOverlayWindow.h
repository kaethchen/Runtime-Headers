@class CALayer;

@interface _NSFullScreenTileToModalTransitionOverlayWindow : _NSFullScreenTileResizeCrossfadeOverlayWindow {
    CALayer *_tabHeaderLayer;
    CALayer *_tabHeaderBackgroundLayer;
    CALayer *_afterTabBarBackgroundLayer;
    CALayer *_afterTabBarDividerLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _remainingTileStartingFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tabBarScreenRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tileToolbarStartingFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tabWindowScreenRect;
}

- (void)dealloc;
- (void)captureAfterWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collapsedTabWindow:(id)a1;
- (void)captureBeforeWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closingTileTargetFrame;
- (void)configureAnimationToFinalStateWithDuration:(double)a0;
- (id)windowIDsForCaptureOnSpace:(unsigned long long)a0;

@end
