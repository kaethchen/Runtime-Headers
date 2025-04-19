@class NSTitlebarSeparatorView, NSString, NSView, NSTrackingArea, NSColor, NSLayoutConstraint, NSImageView, NSBox;
@protocol NSTabBarSyncedButtonDelegate;

@interface NSTabBarNewTabButton : NSButton <NSDraggingDestination, NSTabBarSyncedButton> {
    NSTrackingArea *_trackingArea;
    NSColor *_backgroundColor;
    NSImageView *_addImageView;
    NSTitlebarSeparatorView *_topBorderView;
    NSBox *_leadingBorderView;
    NSView *_backgroundHighlightView;
    NSLayoutConstraint *_backgroundHighlightLeadingConstraint;
    BOOL _mouseIsOverButton;
    BOOL _forcesActiveWindowState;
}

@property (nonatomic) BOOL forcesActiveWindowState;
@property (weak, nonatomic) id<NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate;
@property (nonatomic, getter=isSyncedWithOtherButton) BOOL syncedWithOtherButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)width;
+ (id)installNewTabButtonInView:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_windowIsActive;
- (void)draggingExited:(id)a0;
- (id)_backgroundDefaultColor;
- (id)_dragTypes;
- (void)_finishInitialization;
- (id)_leadingBorderDefaultColor;
- (void)_setBackgroundColor:(id)a0 withAnimation:(id)a1;
- (void)_updateButtonColors;
- (void)_updateButtonHighlightWhenPressed:(BOOL)a0 hovered:(BOOL)a1;
- (void)_updateButtonHighlightWhenPressed:(BOOL)a0 hovered:(BOOL)a1 notifyNSTabBarSyncedButtonDelegate:(BOOL)a2;
- (void)_windowChangedKeyState;
- (BOOL)allowsVibrancy;
- (id)associatedWindow;
- (void)awakeFromNib;
- (void)concludeDragOperation:(id)a0;
- (id)draggingDestination;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)drawFocusRingMask;
- (BOOL)forcesActiveWindowState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)setForcesActiveWindowState:(BOOL)a0;
- (void)setHighlightStateToPressed:(BOOL)a0 hovered:(BOOL)a1;
- (void)updateDraggingItemsForDrag:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsPeriodicDraggingUpdates;

@end
