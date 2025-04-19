@class NSTextField, NSView, NSTrackingArea, NSLayoutConstraint, NSTimer, StatusMessage;
@protocol OverlayStatusWindowDelegate;

@interface OverlayStatusWindowController : NSWindowController {
    NSView *_parentContentView;
    NSTextField *_mainTextField;
    NSLayoutConstraint *_maximumWidthConstraint;
    unsigned long long _pendingShowAnimations;
    NSTrackingArea *_mouseTrackingArea;
    BOOL _suppressUpdatingPlacement;
    long long _lastStatusPlacement;
    NSTimer *_clearStatusBarIsOnStatusTimer;
    StatusMessage *_statusMessage;
}

@property (weak, nonatomic) id<OverlayStatusWindowDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)mouseMoved:(id)a0;
- (void)setStatusMessage:(id)a0;
- (void)_hideFromParentWindowAfterDelay;
- (id)_attributedStringForStatusMessage:(id)a0;
- (void)_cancelDelayBeforeStartingHideAnimation;
- (void)_clearStatusBarIsOnTimerFired:(id)a0;
- (void)_createMainTextField;
- (void)_hideFromParentWindow;
- (double)_maximumContentWidthForPlacement:(long long)a0;
- (void)_parentWindowDidResize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectWithinWhichMouseMayOccludeStatusInScreenCoordinates;
- (BOOL)_shouldAnchorStatusBarToLeftForPlacement:(long long)a0;
- (void)_showInParentWindow;
- (id)_statusBarIsOnStatusMessage;
- (void)_updateMetrics;
- (void)clearStatus;
- (void)displayStatusBarIsOnMessage;

@end
