@class NSStatusBar, NSMenu;

@interface NSStatusBarButtonCell : NSButtonCell {
    NSStatusBar *_fStatusBar;
    NSMenu *_fStatusMenu;
    BOOL _fDoubleClick;
    SEL _fDoubleAction;
    unsigned char _looksDisabled : 1;
    unsigned char _actsOnRightMouseDown : 1;
    unsigned char _actsOnRightMouseUp : 1;
    unsigned int _reservedFlags : 29;
    BOOL _appOverrodeHighlightsBy;
}

@property BOOL looksDisabled;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } selectionInset;

+ (void)_endTrackingNavigationLoopOnMenu:(id)a0 withToken:(id)a1 view:(id)a2;
+ (id)_trackNavigationLoopOnMenu:(id)a0 view:(id)a1;
+ (void)popUpStatusBarMenu:(id)a0 ofItem:(id)a1 ofBar:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 ofView:(id)a4 withEvent:(id)a5;

- (void)dealloc;
- (id)init;
- (void)setAttributedTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)dismiss;
- (BOOL)_alwaysHorizontallyCenterContent;
- (BOOL)_disabledForDrawingContent;
- (id)_effectiveSymbolConfiguration;
- (id)_interiorBackgroundFillColor;
- (BOOL)_sendActionFrom:(id)a0;
- (long long)_stateForDrawing;
- (id)_statusItem;
- (void)_updateHighlightsBy;
- (BOOL)acceptsFirstResponder;
- (SEL)doubleAction;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)performClick:(id)a0;
- (long long)sendActionOn:(unsigned long long)a0;
- (unsigned long long)sendActionOnMask;
- (void)setAlternateImage:(id)a0;
- (void)setDoubleAction:(SEL)a0;
- (void)setFont:(id)a0;
- (void)setHighlightsBy:(unsigned long long)a0;
- (void)setImagePosition:(unsigned long long)a0;
- (void)setStatusBar:(id)a0;
- (void)setStatusMenu:(id)a0;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)statusBar;
- (id)statusMenu;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchBeganAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;

@end
