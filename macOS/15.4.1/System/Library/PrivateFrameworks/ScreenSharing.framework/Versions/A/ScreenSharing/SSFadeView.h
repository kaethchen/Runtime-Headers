@class NSTimer, SSNotificationOverlayViewController, NSObject;
@protocol SSFadeViewDelegate;

@interface SSFadeView : NSView {
    float currentAlpha;
    BOOL wantsSpinner;
}

@property (retain) NSTimer *animationTimer;
@property (retain) SSNotificationOverlayViewController *overlayNotificationViewController;
@property NSObject<SSFadeViewDelegate> *delegate;
@property BOOL wantsSpinner;
@property float maxAlpha;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)animateFadeOut:(id)a0;
- (void)addStaticViewWithMessage:(id)a0 image:(id)a1;
- (void)addOverlayBoxWithMessage:(id)a0;
- (void)addSpinnerView;
- (void)animateFadeIn:(id)a0;
- (void)updateFrameAndRedraw;
- (void)viewDidBecomeOverlay;
- (void)viewWillResignOverlay:(BOOL)a0;

@end
