@class NSTouchBar, NSString, NSTouchBarView, _NSTouchBarItemOverlayTouchInterceptionView, NSTouchBarItem, NSFunctionRowBackgroundColorView, NSTouchBarViewController, NSFunctionRow, NSButton, NSTouchBarItemOverlayOptions;

@interface NSTouchBarItemOverlay : NSObject <NSTouchBarPressAndHoldTransposerDelegate> {
    NSTouchBarItem *_weakItem;
    NSTouchBarItem *_strongItem;
    NSTouchBar *_overlayTouchBar;
    NSTouchBar *_popoverTouchBar;
    NSFunctionRow *_functionRow;
    NSTouchBarViewController *_viewController;
    _NSTouchBarItemOverlayTouchInterceptionView *_containerView;
    NSButton *_closeButton;
    NSFunctionRowBackgroundColorView *_colorView;
    NSTouchBarItemOverlayOptions *_options;
    unsigned char _showsCloseButtonForOverlay : 1;
    unsigned char _showsControlStripForOverlay : 1;
    unsigned char _preventUserDismissalForOverlay : 1;
    unsigned char _listeningForAppDeactivation : 1;
    unsigned char _listeningForItemInvisible : 1;
    unsigned char _trackingTouches : 1;
}

@property (class, readonly) NSTouchBarItemOverlay *activeOverlay;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSTouchBarItem *item;
@property (retain) NSTouchBar *popoverTouchBar;
@property (retain) NSTouchBar *overlayTouchBar;
@property BOOL showsCloseButtonForOverlay;
@property BOOL preventUserDismissalForOverlay;
@property BOOL showsControlStripForOverlay;
@property (copy) id /* block */ closeButtonHandler;
@property (readonly) NSTouchBarView *touchBarView;
@property (readonly, getter=isTrackingTouches) BOOL trackingTouches;
@property (readonly, copy) NSTouchBarItemOverlayOptions *currentRecommendedOptions;

+ (id)_createContainerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)makePopoverCloseButtonWithTarget:(id)a0 action:(SEL)a1;
+ (void)runHidePopoverAnimationWithTouchBarView:(id)a0 colorView:(id)a1 closeButton:(id)a2 completionHandler:(id /* block */)a3;
+ (void)runShowPopoverAnimationWithContainerView:(id)a0 touchBarView:(id)a1 colorView:(id)a2 closeButton:(id)a3 completionHandler:(id /* block */)a4;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_cleanupFromPressAndHold;
- (void)_setContainerView:(id)a0;
- (void)closeButtonPressed;
- (void)hide;
- (id)initWithItem:(id)a0;
- (void)show;
- (void)showWithOptions:(id)a0;
- (void)trackTouch:(id)a0 fromSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)trackTouches;
- (void)transposerDidCancel:(id)a0;
- (void)transposerDidEnd:(id)a0;

@end
