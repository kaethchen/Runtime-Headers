@class CALayer, _NSFullScreenTileResizeCrossfadeOverlayLayer;

@interface _NSFullScreenTileResizeCrossfadeOverlayWindow : NSPanel {
    unsigned long long _tileID;
    unsigned long long _parentID;
    unsigned long long _closingSpaceID;
    BOOL _doResize;
    BOOL _lockedMenuBar;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetTileFrame;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_beforeTileLayer;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_openingTileLayer;
}

@property unsigned long long openingSpaceID;
@property (readonly) unsigned long long closingSpaceID;
@property (readonly) CALayer *rootLayer;
@property (readonly) _NSFullScreenTileResizeCrossfadeOverlayLayer *closingTileLayer;
@property (readonly) _NSFullScreenTileResizeCrossfadeOverlayLayer *afterTileLayer;

- (void)dealloc;
- (void)close;
- (void)_setWindowTag;
- (void)animateSwapWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)captureAfterWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)captureBeforeWindowsUsingTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closingTileTargetFrame;
- (void)configureAnimationToFinalStateWithDuration:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)doFinalBeforeSetupWithAfterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTileID:(unsigned long long)a0 parentSpaceID:(unsigned long long)a1 closingSpaceID:(unsigned long long)a2 screen:(id)a3 doResize:(BOOL)a4 placeInWallSpace:(BOOL)a5;
- (id)windowIDsForCaptureOnSpace:(unsigned long long)a0;
- (id)windowIDsForCaptureOnSpace:(unsigned long long)a0 predicate:(id /* block */)a1;

@end
