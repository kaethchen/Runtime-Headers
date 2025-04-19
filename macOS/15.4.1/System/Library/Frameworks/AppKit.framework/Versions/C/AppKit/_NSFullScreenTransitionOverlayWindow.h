@class CALayer;

@interface _NSFullScreenTransitionOverlayWindow : NSPanel {
    CALayer *rootLayer;
    CALayer *_transitionedWindowBeforeLayer;
    CALayer *_transitionedWindowAfterLayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionedWindowTargetFrame;
@property (retain, nonatomic) id transitionedWindowBeforeContents;
@property (retain, nonatomic) id transitionedWindowAfterContents;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowSnapshotStartFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shadowDeltaRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shadowAfterDeltaRect;

- (void)dealloc;
- (void)positionLayersForEnter:(BOOL)a0 reduced:(BOOL)a1;
- (id)initWithScreen:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedWindowEndFrame;
- (BOOL)_hostsLayersInWindowServer;
- (void)_setWindowTag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedStartFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)startEnterFullScreenAnimationWithDuration:(double)a0 reduced:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)startExitFullScreenAnimationWithDuration:(double)a0 reduced:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
