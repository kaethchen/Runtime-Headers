@class _NSFullScreenSpace, CALayer;

@interface _NSFullScreenTileDividerWindow : NSWindow {
    _NSFullScreenSpace *_space;
    unsigned long long _tileSpace;
    unsigned long long _direction;
    unsigned long long _verticalIndex;
    unsigned long long _horizontalIndex;
    BOOL _drivingLiveResize;
    BOOL _liveResizeMoved;
    BOOL _shouldAbortLiveResize;
    struct CGSize { double width; double height; } _spacing;
    CALayer *_grabBarLayer;
}

@property BOOL overrideDrivingLiveResize;

+ (id)tileGrabBarWithSize:(struct CGSize { double x0; double x1; })a0;

- (void)close;
- (void)_setupOverlayWindowImmediately:(BOOL)a0;
- (void)abortLiveResize;
- (unsigned long long)horizontalIndex;
- (void)reshape;
- (struct CGSize { double x0; double x1; })spacing;
- (void)_beginOverlayPresentationIfNeeded;
- (void)_endLiveResizeAtDividerLocation:(double)a0;
- (void)_forceOverlayPresentation;
- (id)_grabber;
- (id)_hitTestWithHysteresisCheck:(struct CGPoint { double x0; double x1; })a0 forEvent:(id)a1 allowWindowDragging:(BOOL *)a2;
- (void)_liveResizeToDividerLocation:(double)a0;
- (void)_removeOverlayWindow;
- (void)_setWindowTag;
- (void)_startLiveResizeWithOverlay:(BOOL)a0;
- (void)_updateOverlayWindow;
- (void)cancelOverlayAnimations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (unsigned long long)direction;
- (BOOL)drivingLiveResize;
- (void)hideGrabBar;
- (id)initWithTileSpace:(unsigned long long)a0 direction:(unsigned long long)a1 space:(id)a2;
- (unsigned long long)parentSpaceID;
- (BOOL)performDividerDragWithEvent:(id)a0;
- (id)resizeCursor;
- (void)resizeToFiftyFifty;
- (void)setAsActiveTileDividerWindow;
- (BOOL)shouldAbortLiveResize;
- (void)showGrabBar;
- (void)showRolloverState:(BOOL)a0;
- (id)space;
- (unsigned long long)tileSpaceID;
- (unsigned long long)verticalIndex;

@end
