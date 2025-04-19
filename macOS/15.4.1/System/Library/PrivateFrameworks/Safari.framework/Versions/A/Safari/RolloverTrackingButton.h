@class NSTrackingArea, NSTimer;
@protocol RolloverTrackingButtonDelegate;

@interface RolloverTrackingButton : ButtonPlus {
    NSTrackingArea *_trackingArea;
    id _flagsChangedEventMonitor;
    BOOL _mouseOver;
    BOOL _trackingRectUpdatePending;
    NSTimer *_mouseDownTimer;
    BOOL _performedLongPress;
}

@property (weak, nonatomic) id<RolloverTrackingButtonDelegate> delegate;
@property (nonatomic) BOOL usesRolloverAppearanceInInactiveWindow;
@property (nonatomic) BOOL usesRolloverAppearanceOnMouseDown;
@property (nonatomic) BOOL usesRolloverAppearanceWhenFirstResponder;
@property (nonatomic) BOOL redrawOnMouseEnteredAndExited;
@property (nonatomic) BOOL useRolloverAppearanceNow;
@property (readonly, nonatomic, getter=isTrackingMouseDown) BOOL trackingMouseDown;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_finishInitialization;
- (BOOL)accessibilityPerformPress;
- (BOOL)canBecomeKeyView;
- (void)didBecomeActiveFirstResponder;
- (void)didResignActiveFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)shouldUseRolloverAppearance;
- (void)updateMouseIsOver;
- (void)updateMouseIsOver:(int)a0;
- (void)updateTrackingAreas;
- (void)_addFlagsChangedEventMonitorIfNecessary;
- (void)_removeFlagsChangedEventMonitorIfNecessary;
- (BOOL)_supportsLongPress;
- (void)mouseEnteredOrExited:(BOOL)a0;
- (BOOL)mouseIsOver;

@end
